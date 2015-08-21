/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <memory>

namespace Aws
{
    namespace Utils
    {
        template<typename R, typename E>
        class Outcome;

        namespace Xml
        {
            class XmlDocument;
        } // namespace Xml

        namespace Json
        {
            class JsonValue;
        } // namespace Json

        namespace RateLimits
        {
            class RateLimiterInterface;
        } // namespace RateLimits

    } // namespace Utils

    namespace Http
    {
        class HttpClient;

        class HttpClientFactory;

        class HttpRequest;

        class HttpResponse;
    } // namespace Http

    class AmazonWebServiceRequest;

    namespace Client
    {

        template<typename ERROR_TYPE>
        class AWSError;
        class AWSErrorMarshaller;
        class AWSRestfulJsonErrorMarshaller;
        class AWSAuthSigner;
        struct ClientConfiguration;
        class RetryStrategy;

        typedef Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, AWSError<CoreErrors>> HttpResponseOutcome;
        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Stream::ResponseStream>, AWSError<CoreErrors>> StreamOutcome;

        class AWS_CORE_API AWSClient
        {
        public:

            AWSClient(const std::shared_ptr<Aws::Http::HttpClientFactory const>& clientFactory,
                const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller, const char* hostHeaderOverride = nullptr);

            virtual ~AWSClient();

            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, long long expirationInSeconds = 0);

        protected:

            HttpResponseOutcome AttemptExhaustively(const Aws::String& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod httpMethod) const;

            HttpResponseOutcome AttemptExhaustively(const Aws::String& uri, Http::HttpMethod httpMethod) const;

            HttpResponseOutcome AttemptOneRequest(const Aws::String& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod httpMethod) const;

            HttpResponseOutcome AttemptOneRequest(const Aws::String& uri, Http::HttpMethod httpMethod) const;

            StreamOutcome MakeRequestWithUnparsedResponse(const Aws::String& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST) const;

            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const = 0;

            virtual void BuildHttpRequest(const Aws::AmazonWebServiceRequest& request,
                const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest) const;               

            const std::shared_ptr<AWSErrorMarshaller>& GetErrorMarshaller() const
            {
                return m_errorMarshaller;
            }

        private:
            void AddHeadersToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest, const Http::HeaderValueCollection& headerValues) const;
            void AddContentBodyToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest, const std::shared_ptr<Aws::IOStream>& body) const;
            void AddCommonHeaders(Aws::Http::HttpRequest& httpRequest) const;

            std::shared_ptr<Aws::Http::HttpClientFactory const> m_clientFactory;
            std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
            std::shared_ptr<Aws::Client::AWSAuthSigner> m_signer;
            std::shared_ptr<AWSErrorMarshaller> m_errorMarshaller;
            std::shared_ptr<RetryStrategy> m_retryStrategy;
            std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_writeRateLimiter;
            std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_readRateLimiter;
            Aws::String m_userAgent;
            const char* m_hostHeaderOverride;
        };

        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Json::JsonValue>, AWSError<CoreErrors>> JsonOutcome;

        class AWS_CORE_API AWSJsonClient : public AWSClient
        {
        public:
            typedef AWSClient BASECLASS;

            AWSJsonClient(const std::shared_ptr<Aws::Http::HttpClientFactory const>& clientFactory,
                const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller,
                const char* hostHeaderOverride = nullptr);

            virtual ~AWSJsonClient() = default;

        protected:
            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override;

            JsonOutcome MakeRequest(const Aws::String& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST) const;

            JsonOutcome MakeRequest(const Aws::String& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST) const;

        };       

        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Xml::XmlDocument>, AWSError<CoreErrors>> XmlOutcome;

        class AWS_CORE_API AWSXMLClient : public AWSClient
        {
        public:

            typedef AWSClient BASECLASS;

            AWSXMLClient(const std::shared_ptr<Aws::Http::HttpClientFactory const>& clientFactory,
                const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller,
                const char* hostHeaderOverride = nullptr);

            virtual ~AWSXMLClient() = default;

        protected:

            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override;

            XmlOutcome MakeRequest(const Aws::String& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST) const;


            XmlOutcome MakeRequest(const Aws::String& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST) const;
        };       

    } // namespace Client
} // namespace Aws
