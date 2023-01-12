#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/HttpClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>

#include <aws/crt/io/TlsOptions.h>

namespace Aws
{
    namespace Crt
    {
        namespace Http
        {
            class HttpClientConnectionManager;
            class HttpClientConnectionOptions;
        }
    }

    namespace Client
    {
        struct ClientConfiguration;
    } // namespace Client

    namespace Http
    {
        class CRTHttpClient : public HttpClient {
        public:
            using Base = HttpClient;

            /**
             * Initializes the client with relevant parameters from clientConfig.
             */
            CRTHttpClient(const Aws::Client::ClientConfiguration& clientConfig, Crt::Io::ClientBootstrap& bootstrap);
            ~CRTHttpClient();

            std::shared_ptr<HttpResponse> MakeRequest(const std::shared_ptr<HttpRequest>& request,
                Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
                Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const override;

        private:
            mutable std::unordered_map<Aws::String, const std::shared_ptr<Crt::Http::HttpClientConnectionManager>> m_connectionPools;
            mutable std::mutex m_connectionPoolLock;

            Crt::Optional<Crt::Io::TlsContext> m_context;
            Crt::Optional< Crt::Http::HttpClientConnectionProxyOptions> m_proxyOptions;

            Crt::Io::ClientBootstrap& m_bootstrap;

            Client::ClientConfiguration m_configuration;

            const std::shared_ptr<Crt::Http::HttpClientConnectionManager> GetWithCreateConnectionManagerForRequest(const std::shared_ptr<HttpRequest>& request, const Crt::Http::HttpClientConnectionOptions& connectionOptions) const;
            static Aws::String ResolveConnectionPoolHash(const URI& uri);
                        
            Crt::Http::HttpClientConnectionOptions CreateConnectionOptionsForRequest(const std::shared_ptr<HttpRequest>& request) const;
            void CheckAndInitializeProxySettings(const Aws::Client::ClientConfiguration& clientConfig);
        };
    }
}