/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/http/crt/CRTHttpClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>

#include <aws/crt/http/HttpConnectionManager.h>
#include <aws/crt/http/HttpRequestResponse.h>

// Adapts AWS SDK input streams and rate limiters to the CRT input stream reading model.
class ThrottleAwareInputStream : public Crt::Io::StdIOStreamInputStream {
public:
    ThrottleAwareInputStream(Utils::RateLimits::RateLimiterInterface& rateLimiter, std::shared_ptr<Aws::Crt::Io::IStream> stream,
                             Aws::Crt::Allocator *allocator = Crt::ApiAllocator()) noexcept : Crt::Io::StdIOStreamInputStream(std::move(stream), allocator), m_rateLimiter(rateLimiter){

    }
protected:
    bool ReadImpl(Crt::ByteBuf &buffer) noexcept override
    {
        // initial check to see if we should avoid reading for the moment.
        if (m_rateLimiter.ApplyCost(0) == std::chrono::milliseconds(0)) {
            size_t currentPos = buffer.len;

            // now do the read. We may over read by an IO buffer size, but it's fine. The throttle will still
            // kick-in in plenty of time.
            bool retValue = Crt::Io::StdIOStreamInputStream::ReadImpl(buffer);

            size_t newPos = buffer.len;
            AWS_ASSERT(newPos >= currentPos && !"the buffer length should not have decreased in value.");
            // now actually reduce the window.
            m_rateLimiter.ApplyCost(static_cast<int64_t>(newPos - currentPos));
            return retValue;
        }

        return true;
    }

private:
    Utils::RateLimits::RateLimiterInterface& m_rateLimiter;
};

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
            
            if (Crt::Io::TlsContextOptions::IsAlpnSupported())
            {
                // this may need to be pulled from the client configuration....
                tlsContextOptions.SetAlpnList("h2;http/1.1");
            }

            Crt::Io::TlsContext newContext(tlsContextOptions, Crt::Io::TlsMode::CLIENT);
            m_context = std::move(newContext);
        }

        // this isn't entirely necessary, but if you want to be nice to debuggers and memory checkers, let's go ahead
        // and shut everything down cleanly.
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

            //Add http headers to the request.
            for (const auto& header : request->GetHeaders())
            {
                Crt::Http::HttpHeader crtHeader;

                crtHeader.name = Crt::ByteCursorFromArray((const uint8_t *)header.first.data(), header.first.length());;
                crtHeader.value = Crt::ByteCursorFromArray((const uint8_t *)header.second.data(), header.second.length());
                crtRequest->AddHeader(crtHeader);
            }

            // HTTP method, GET, PUT, DELETE, etc...
            auto methodCursor = Crt::ByteCursorFromCString(Aws::Http::HttpMethodMapper::GetNameForHttpMethod(request->GetMethod()));
            crtRequest->SetMethod(methodCursor);

            // Path portion of the request
            auto pathStrCpy = request->GetUri().GetURLEncodedPathRFC3986();
            auto queryStrCpy = request->GetUri().GetQueryString();
            Aws::StringStream ss;

            //CRT client has you pass the query string as part of the path. concatenate that here.
            ss << pathStrCpy << queryStrCpy;
            auto fullPathAndQueryCpy = ss.str();
            auto pathCursor = Crt::ByteCursorFromArray((uint8_t *)fullPathAndQueryCpy.c_str(), fullPathAndQueryCpy.length());
            crtRequest->SetPath(pathCursor);

            // Set the request body stream on the crt request. Setup the write rate limiter if present
            if (request->GetContentBody())
            {
                // need to hook up back pressure to plug the read limiter in. But the write direction is fairly simple.
                if (m_configuration.writeRateLimiter)
                {
                    crtRequest->SetBody(Aws::MakeShared<ThrottleAwareInputStream>("CRTHttpClient", *m_configuration.writeRateLimiter, request->GetContentBody()));
                }
                else
                {
                    crtRequest->SetBody(request->GetContentBody());
                }
            }

            auto response = Aws::MakeShared<Standard::StandardHttpResponse>("CRTHttpClient", request);

            Crt::Http::HttpRequestOptions requestOptions;
            requestOptions.request = crtRequest.get();

            // When data is received from the content body of the incoming response, just copy it to the output stream.
            requestOptions.onIncomingBody =
                [response](Crt::Http::HttpStream&, const Crt::ByteCursor& body)
            {
                response->GetResponseBody().write((const char*)body.ptr, static_cast<long>(body.len));
            };

            // on response headers arriving, write them to the response.
            requestOptions.onIncomingHeaders =
                [response](Crt::Http::HttpStream&, enum aws_http_header_block, const Crt::Http::HttpHeader* headersArray, std::size_t headersCount)
            {
                for (size_t i = 0; i < headersCount; ++i)
                {
                    const Crt::Http::HttpHeader* header = &headersArray[i];
                    Aws::String headerNameStr((const char* const)header->name.ptr, header->name.len);
                    Aws::String headerValueStr((const char* const)header->value.ptr, header->value.len);
                    response->AddHeader(headerNameStr, std::move(headerValueStr));
                }
            };

            // This will arrive at or around the same time as the headers. Use it to set the response code on the response
            requestOptions.onIncomingHeadersBlockDone =
                [response](Crt::Http::HttpStream& stream, enum aws_http_header_block)
            {
                    response->SetResponseCode((HttpResponseCode)stream.GetResponseStatusCode());
            };

            // CRT client is async only so we'll need to do the synchronous part ourselves.
            // We'll use a condition variable and wait on it until the request completes or errors out.
            std::mutex waiterLock;
            std::condition_variable waiterCVar;
            bool waitCompletedIntentionally = false;

            // Request is done. If there was an error set it, otherwise just wake up the cvar.
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

            std::shared_ptr<Crt::Http::HttpClientConnection> connectionRef = nullptr;

            // now we finally have the request, get a connection and make the request.
            // if the connection acquisition failed, go ahead and fail the request and wakeup the cvar.
            connectionManager->AcquireConnection(
                    [&connectionRef, requestOptions, response, &waitCompletedIntentionally, &waiterCVar, &waiterLock]
                    (std::shared_ptr<Crt::Http::HttpClientConnection> connection, int errorCode) {
                    if (connection)
                    {
                        {
                            std::lock_guard<std::mutex> locker(waiterLock);
                            connectionRef = connection;
                        }

                        auto clientStream = connection->NewClientStream(requestOptions);

                        // if client stream is nullptr, something went wrong. This SHOULDNT happen
                        // because it's usually something not using the API correctly, but
                        // there's probably a complex set of interactions that can result in in-proper use of the API over-time,
                        // and we need to just surface the error rather than bringing down the whole process with an assertion.
                        // If we have a valid stream go ahead and return allowing the request to continue.
                        if (clientStream) {
                            clientStream->Activate();
                            return;
                        }

                        response->SetClientErrorType(Aws::Client::CoreErrors::INVALID_PARAMETER_COMBINATION);
                        response->SetClientErrorMessage(aws_error_debug_str(aws_last_error()));
                    }
                    else
                    {

                        response->SetClientErrorType(Aws::Client::CoreErrors::NETWORK_CONNECTION);
                        response->SetClientErrorMessage(aws_error_debug_str(errorCode));
                    }

                    {
                        std::lock_guard<std::mutex> locker(waiterLock);
                        waitCompletedIntentionally = true;
                    }
                    waiterCVar.notify_all();
                });

            std::unique_lock<std::mutex> cvarUniqueLock(waiterLock);

            // Naive http request timeout implementation. This doesn't factor in how long it took to get the connection from the pool, and
            // I'm undecided on the queueing theory implications of this decision so if this turns out to be the wrong granularity
            // this is the section of code you should be changing. You can probably get "close" by having an additional
            // atomic (not necessarily full on atomics implementation, but it needs to be the size of a WORD if it's not)
            // counter that gets incremented in the acquireConnection callback as long as your connection timeout
            // is shorter than your request timeout. Even if it's not, that would handle like.... 4-5 nines of getting this right.
            // since in the worst case scenario, your connect timeout got preempted by the request timeout, and is it really worth
            // all that effort if that's the worst thing that can happen?
            if (m_configuration.requestTimeoutMs > 0)
            {
                auto  requestExpiryTime = std::chrono::high_resolution_clock::now() + std::chrono::milliseconds(m_configuration.requestTimeoutMs);
                waiterCVar.wait_until(cvarUniqueLock, requestExpiryTime, [&connectionRef, &waitCompletedIntentionally, requestExpiryTime, response] ()
                {
                    // If the request is done, we don't care about the timeout.
                    if (waitCompletedIntentionally) return true;

                    // if this predicate was triggered because the cvar timed out, this branch will be taken.
                    // if it was triggered spuriously, this branch will be missed.
                    if (std::chrono::high_resolution_clock::now() >= requestExpiryTime)
                    {
                        response->SetClientErrorType(Aws::Client::CoreErrors::REQUEST_TIMEOUT);
                        response->SetClientErrorMessage("Request Timeout Has Expired");

                        if (connectionRef)
                        {
                            connectionRef->Close();
                        }
                    }

                    // go back to sleep to try again later.
                    return false;
                });
            } else
            {
                waiterCVar.wait(cvarUniqueLock, [&waitCompletedIntentionally] () { return &waitCompletedIntentionally; });
            }

            return response;
        }

        Aws::String CRTHttpClient::ResolveConnectionPoolHash(const URI& uri) 
        {
            Aws::StringStream ss;
            ss << SchemeMapper::ToString(uri.GetScheme()) << "://" << uri.GetAuthority() << uri.GetPort();

            return ss.str();
        }

        // The main purpose of this is to ensure there's exactly one connection manager per unique endpoint.
        // To do so, we simply keep a hash table of the hashed endpoint (see ResolveConnectionPoolHash()), and
        // put a connection manager for that endpoint as the value.
        // This runs in multiple threads potentially so there's a lock around it.
        std::shared_ptr<Crt::Http::HttpClientConnectionManager> CRTHttpClient::GetWithCreateConnectionManagerForRequest(const std::shared_ptr<HttpRequest>& request, const Crt::Http::HttpClientConnectionOptions& options) const
        {
            const auto connManagerRequestHash = ResolveConnectionPoolHash(request->GetUri());

            std::lock_guard<std::mutex> locker(m_connectionPoolLock);

            const auto& foundManager = m_connectionPools.find(connManagerRequestHash);

            // We've already got one, return it.
            if (foundManager != m_connectionPools.cend()) {
                return foundManager->second;
            }

            // don't have a manager for this endpoint, so create one for it.
            Crt::Http::HttpClientConnectionManagerOptions connectionManagerOptions;
            connectionManagerOptions.ConnectionOptions = options;
            connectionManagerOptions.MaxConnections = m_configuration.maxConnections;
            connectionManagerOptions.EnableBlockingShutdown = true;
            // need to bind out Monitoring options to handle the read timeout config value.
            // once done, come back and use it to setup read timeouts.

            auto connectionManager = Crt::Http::HttpClientConnectionManager::NewClientConnectionManager(connectionManagerOptions);
            // put it in the hash table and return it.
            m_connectionPools.emplace(connManagerRequestHash, connectionManager);

            return connectionManager;
        }

        Crt::Http::HttpClientConnectionOptions CRTHttpClient::CreateConnectionOptionsForRequest(const std::shared_ptr<HttpRequest>& request) const
        {
            // connection options are unique per request, this is mostly just connection-level configuration mapping.

            Crt::Http::HttpClientConnectionOptions connectionOptions;
            connectionOptions.HostName = request->GetUri().GetAuthority();
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

            if (m_configuration.enableTcpKeepAlive)
            {
                connectionOptions.SocketOptions.SetKeepAliveIntervalSec(
                        (uint16_t) (m_configuration.tcpKeepAliveIntervalMs / 1000));
            }
            connectionOptions.SocketOptions.SetSocketType(Crt::Io::SocketType::Stream);

            return connectionOptions;
        }

        // The proxy config is pretty hefty, so we don't want to create one for each request when we don't have to.
        // This converts whatever proxy settings are in clientConfig to CRT specific proxy settings.
        // It then sets it on the member variable for re-use elsewhere.
        void CRTHttpClient::CheckAndInitializeProxySettings(const Aws::Client::ClientConfiguration& clientConfig)
        {
            if (!clientConfig.proxyHost.empty())
            {
                Crt::Http::HttpClientConnectionProxyOptions proxyOptions;

                if (!clientConfig.proxyUserName.empty())
                {
                    proxyOptions.AuthType = Crt::Http::AwsHttpProxyAuthenticationType::Basic;
                    proxyOptions.BasicAuthUsername = clientConfig.proxyUserName;
                    proxyOptions.BasicAuthPassword = clientConfig.proxyPassword;
                }

                proxyOptions.HostName = m_configuration.proxyHost;

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
                    Crt::Io::TlsContextOptions contextOptions = Crt::Io::TlsContextOptions::InitDefaultClient();

                    if (clientConfig.proxySSLKeyPassword.empty() && !clientConfig.proxySSLCertPath.empty())
                    {
                        const char* certPath = clientConfig.proxySSLCertPath.empty() ? nullptr : clientConfig.proxySSLCertPath.c_str();
                        const char* certFile = clientConfig.proxySSLKeyPath.empty() ? nullptr : clientConfig.proxySSLKeyPath.c_str();
                        contextOptions = Crt::Io::TlsContextOptions::InitClientWithMtls(certPath, certFile);
                    }
                    else if (!clientConfig.proxySSLKeyPassword.empty())
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

                    contextOptions.SetVerifyPeer(clientConfig.verifySSL);
                    Crt::Io::TlsContext context = Crt::Io::TlsContext(contextOptions, Crt::Io::TlsMode::CLIENT);
                    proxyOptions.TlsOptions = context.NewConnectionOptions();                    
                }

                m_proxyOptions = std::move(proxyOptions);
            }
        }

    }
}
