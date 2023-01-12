
#include <aws/core/http/crt/CRTHttpClient.h>
#include <aws/crt/http/HttpConnectionManager.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/standard/StandardHttpRequest.h>


namespace Aws
{
    namespace Http
    {

        CRTHttpClient::CRTHttpClient(const Aws::Client::ClientConfiguration& clientConfig, Crt::Io::ClientBootstrap& bootstrap) : 
            HttpClient(), m_context(), m_proxyOptions(), m_bootstrap(bootstrap), m_configuration(clientConfig)
        {
            //first need to figure TLS out...
            Crt::Io::TlsContextOptions tlsContextOptions = Crt::Io::TlsContextOptions::InitDefaultClient();

            CheckAndInitializeProxySettings(clientConfig);

            // if ca is overridden and a proxy is configured, it's intended for the proxy, not this context.
            if (!m_proxyOptions.has_value())
            {
                if (!m_configuration.caPath.empty() || !m_configuration.caFile.empty())
                {
                    const char* caPath = m_configuration.caPath.empty() ? nullptr : m_configuration.caPath.c_str();
                    const char* caFile = m_configuration.caFile.empty() ? nullptr : m_configuration.caFile.c_str();
                    tlsContextOptions.OverrideDefaultTrustStore(caPath, caFile);
                }
            }

            tlsContextOptions.SetVerifyPeer(m_configuration.verifySSL);
            
            if (tlsContextOptions.IsAlpnSupported())
            {
                // this may need to be pulled from the client configuration....
                tlsContextOptions.SetAlpnList("h2;http/1.1");
            }

            m_context = Crt::Io::TlsContext::TlsContext(tlsContextOptions, Crt::Io::TlsMode::CLIENT);
        }

        CRTHttpClient::~CRTHttpClient()
        {
            Aws::Vector<std::future<void>> shutdownFutures;

            for (auto& managerPair : m_connectionPools) 
            {
                shutdownFutures.push_back(managerPair.second->InitiateShutdown());
            }

            for (auto& shutdownFuture : shutdownFutures)
            {
                shutdownFuture.get();
            }

            shutdownFutures.clear();
            m_connectionPools.clear();
        }

        std::shared_ptr<HttpResponse> CRTHttpClient::MakeRequest(const std::shared_ptr<HttpRequest>& request,
            Aws::Utils::RateLimits::RateLimiterInterface*,
            Aws::Utils::RateLimits::RateLimiterInterface*) const
        {
            auto requestConnOptions = CreateConnectionOptionsForRequest(request);
            auto connectionManager = GetWithCreateConnectionManagerForRequest(request, requestConnOptions);

            auto crtRequest = Crt::MakeShared<Crt::Http::HttpRequest>(Crt::g_allocator);
            for (const auto& header : request->GetHeaders())
            {
                Crt::Http::HttpHeader crtHeader;
                
                auto nameCursor = Crt::ByteCursorFromCString(header.first.c_str());
                auto valueCursor = Crt::ByteCursorFromCString(header.second.c_str());
                crtHeader.name = nameCursor;
                crtHeader.value = valueCursor;

                crtRequest->AddHeader(crtHeader);
            }

            auto methodCursor = Crt::ByteCursorFromCString(Aws::Http::HttpMethodMapper::GetNameForHttpMethod(request->GetMethod()));
            crtRequest->SetMethod(methodCursor);

            auto pathStrCpy = request->GetUri().GetURLEncodedPathRFC3986();
            auto queryStrCpy = request->GetUri().GetQueryString();
            Aws::StringStream ss;
            ss << pathStrCpy << queryStrCpy;
            auto fullPathAndQueryCpy = ss.str();
            auto pathCursor = Crt::ByteCursorFromCString(fullPathAndQueryCpy.c_str());
            crtRequest->SetPath(pathCursor);

            if (request->GetContentBody())
            {
                crtRequest->SetBody(request->GetContentBody());
            }
            
            auto response = Aws::MakeShared<Standard::StandardHttpResponse>("CRTHttpClient", request);
            
            Crt::Http::HttpRequestOptions requestOptions;
            requestOptions.onIncomingBody =
                [response](Crt::Http::HttpStream&, const Crt::ByteCursor& body)
            {
                response->GetResponseBody().write((const char*)body.ptr, body.len);
            };

            requestOptions.onIncomingHeaders =
                [response](Crt::Http::HttpStream&, enum aws_http_header_block, const Crt::Http::HttpHeader* headersArray, std::size_t headersCount)
            {
                for (auto i = 0; i < headersCount; ++i)
                {
                    const Crt::Http::HttpHeader* header = &headersArray[i];
                    Aws::String headerNameStr((const char* const)header->name.ptr, header->name.len);
                    Aws::String headerValueStr((const char* const)header->value.ptr, header->value.len);
                    response->AddHeader(std::move(headerNameStr), std::move(headerValueStr));
                }
            };

            requestOptions.onIncomingHeadersBlockDone =
                [response](Crt::Http::HttpStream& stream, enum aws_http_header_block block)
            {
                if (block == AWS_HTTP_HEADER_BLOCK_MAIN)
                {
                    // gotta set it somewhere, and this seems to get called at a good enough time to do it, and it only gets called once.
                    response->SetResponseCode((HttpResponseCode)stream.GetResponseStatusCode());
                }
            };

            std::mutex waiterLock;
            std::condition_variable waiterCVar;
            bool waitCompletedIntentionally = false;
           
            requestOptions.onStreamComplete =
                [&waiterCVar, &waiterLock, &waitCompletedIntentionally, &response](Crt::Http::HttpStream&, int errorCode)
            {
                if (errorCode)
                {
                    /* come back to this one and get the right error parsed out. */
                    response->SetClientErrorType(Aws::Client::CoreErrors::NETWORK_CONNECTION);
                    response->SetClientErrorMessage(aws_error_debug_str(errorCode));
                }
                {
                    std::lock_guard<std::mutex> locker(waiterLock);
                    waitCompletedIntentionally = true;
                }
                waiterCVar.notify_all();
            };

            connectionManager->AcquireConnection([requestOptions, response](std::shared_ptr<Crt::Http::HttpClientConnection> connection, int errorCode) {
                if (connection)
                {
                    auto clientStream = connection->NewClientStream(requestOptions);
                    clientStream->Activate();
                }
                else
                {
                    response->SetClientErrorType(Aws::Client::CoreErrors::NETWORK_CONNECTION);
                    response->SetClientErrorMessage(aws_error_debug_str(errorCode));
                }
            });

            std::unique_lock<std::mutex> cvarUniqueLock(waiterLock);
            waiterCVar.wait(cvarUniqueLock, [&waitCompletedIntentionally]() { return waitCompletedIntentionally; });

            return response;
        }

        Aws::String CRTHttpClient::ResolveConnectionPoolHash(const URI& uri) 
        {
            Aws::StringStream ss;
            ss << SchemeMapper::ToString(uri.GetScheme()) << "://" << uri.GetAuthority() << uri.GetPort();

            return ss.str();
        }

        const std::shared_ptr<Crt::Http::HttpClientConnectionManager> CRTHttpClient::GetWithCreateConnectionManagerForRequest(const std::shared_ptr<HttpRequest>& request, const Crt::Http::HttpClientConnectionOptions& options) const
        {
            const auto connManagerRequestHash = ResolveConnectionPoolHash(request->GetUri());

            std::lock_guard<std::mutex> locker(m_connectionPoolLock);

            const auto& foundManager = m_connectionPools.find(connManagerRequestHash);

            if (foundManager != m_connectionPools.cend()) {
                return foundManager->second;
            }

            Crt::Http::HttpClientConnectionManagerOptions connectionManagerOptions;
            connectionManagerOptions.ConnectionOptions = options;
            connectionManagerOptions.MaxConnections = m_configuration.maxConnections;
            connectionManagerOptions.EnableBlockingShutdown = true;

            auto connectionManager = Crt::Http::HttpClientConnectionManager::NewClientConnectionManager(connectionManagerOptions);
            m_connectionPools.emplace(connManagerRequestHash, connectionManager);

            return connectionManager;
        }

        Crt::Http::HttpClientConnectionOptions CRTHttpClient::CreateConnectionOptionsForRequest(const std::shared_ptr<HttpRequest>& request) const
        {
            Crt::Http::HttpClientConnectionOptions connectionOptions;
            connectionOptions.HostName = request->GetUri().GetAuthority().c_str();
            // probably want to come back and update this when we hook up the rate limiters.
            connectionOptions.ManualWindowManagement = false;
            connectionOptions.Port = request->GetUri().GetPort();
            
            if (m_context.has_value() && request->GetUri().GetScheme() == Scheme::HTTPS) 
            {
                connectionOptions.TlsOptions = m_context.value().NewConnectionOptions();
                auto serverName = request->GetUri().GetAuthority();
                auto serverNameCursor = Crt::ByteCursorFromCString(serverName.c_str());
                connectionOptions.TlsOptions->SetServerName(serverNameCursor);
            }

            connectionOptions.Bootstrap = &m_bootstrap;
            
            if (m_proxyOptions.has_value())
            {
                connectionOptions.ProxyOptions = m_proxyOptions.value();
            }

            connectionOptions.SocketOptions.SetConnectTimeoutMs(m_configuration.connectTimeoutMs);
            connectionOptions.SocketOptions.SetKeepAlive(m_configuration.enableTcpKeepAlive);
            connectionOptions.SocketOptions.SetKeepAliveIntervalSec((uint16_t)(m_configuration.tcpKeepAliveIntervalMs / 1000));
            connectionOptions.SocketOptions.SetSocketType(Crt::Io::SocketType::Stream);

            return connectionOptions;
        }

        void CRTHttpClient::CheckAndInitializeProxySettings(const Aws::Client::ClientConfiguration& clientConfig)
        {
            if (!clientConfig.proxyHost.empty())
            {
                Crt::Http::HttpClientConnectionProxyOptions proxyOptions;

                if (!clientConfig.proxyUserName.empty())
                {
                    proxyOptions.AuthType = Crt::Http::AwsHttpProxyAuthenticationType::Basic;
                    proxyOptions.BasicAuthUsername = clientConfig.proxyUserName.c_str();
                    proxyOptions.BasicAuthPassword = clientConfig.proxyPassword.c_str();
                }

                proxyOptions.HostName = m_configuration.proxyHost.c_str();

                if (clientConfig.proxyPort != 0)
                {
                    proxyOptions.Port = static_cast<uint16_t>(clientConfig.proxyPort);
                }
                else
                {
                    proxyOptions.Port = clientConfig.proxyScheme == Scheme::HTTPS ? 443 : 80;
                }

                if (clientConfig.proxyScheme == Scheme::HTTPS)
                {

                    Crt::Io::TlsContextOptions contextOptions;
                    contextOptions.SetVerifyPeer(clientConfig.verifySSL);

                    if (clientConfig.proxySSLKeyPath.empty())
                    {
                        contextOptions = Crt::Io::TlsContextOptions::InitDefaultClient();
                    }
                    else if (clientConfig.proxySSLKeyPassword.empty())
                    {
                        const char* certPath = clientConfig.proxySSLCertPath.empty() ? nullptr : clientConfig.proxySSLCertPath.c_str();
                        const char* certFile = clientConfig.proxySSLKeyPath.empty() ? nullptr : clientConfig.proxySSLKeyPath.c_str();
                        contextOptions = Crt::Io::TlsContextOptions::InitClientWithMtls(certPath, certFile);
                    }
                    else
                    {
                        const char* pkcs12CertFile = clientConfig.proxySSLKeyPath.empty() ? nullptr : clientConfig.proxySSLKeyPath.c_str();
                        const char* pkcs12Pwd = clientConfig.proxySSLKeyPassword.c_str();
                        contextOptions = Crt::Io::TlsContextOptions::InitClientWithMtlsPkcs12(pkcs12CertFile, pkcs12Pwd);
                    }

                    if (!m_configuration.caFile.empty() || !m_configuration.caPath.empty())
                    {
                        const char* caPath = clientConfig.caPath.empty() ? nullptr : clientConfig.caPath.c_str();
                        const char* caFile = clientConfig.caFile.empty() ? nullptr : clientConfig.caFile.c_str();
                        contextOptions.OverrideDefaultTrustStore(caPath, caFile);
                    }

                    Crt::Io::TlsContext context = Crt::Io::TlsContext(contextOptions, Crt::Io::TlsMode::CLIENT);
                    proxyOptions.TlsOptions = context.NewConnectionOptions();                    
                }

                m_proxyOptions = std::move(proxyOptions);
            }
        }

    }
}
