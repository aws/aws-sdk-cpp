/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/Region.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <memory>

namespace Aws
{
    namespace Http
    {
        class HttpClientFactory;
        class HttpRequest;
    } // namespace Http

    namespace Utils
    {
        namespace Crypto
        {
            class Sha256;
            class Sha256HMAC;
        } // namespace Crypto
    } // namespace Utils

    namespace Auth
    {
        class AWSCredentials;
        class AWSCredentialsProvider;
    } // namespace Auth

    namespace Client
    {
        struct ClientConfiguration;

        /**
         * Auth Signer interface. Takes a generic AWS request and applies crypto tamper resistent signatures on the request.
         */
        class AWS_CORE_API AWSAuthSigner
        {
        public:
            virtual ~AWSAuthSigner() = default;

            /**
             * Signs the request itself (usually by adding a signature header) based on info in the request and uri.
             */
            virtual bool SignRequest(Aws::Http::HttpRequest& request) const = 0;

            /**
             * Takes a request and signs the URI based on the HttpMethod, URI and other info from the request.
             * The URI can then be used in a normal HTTP call until expiration.
             */
            virtual bool PresignRequest(Aws::Http::HttpRequest& request, long long expirationInSeconds) const = 0;
        };

        /**
         * AWS Auth v4 Signer implementation of the AWSAuthSigner interface. More information on AWS Auth v4 Can be found here:
         * http://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html
         */
        class AWS_CORE_API AWSAuthV4Signer : public AWSAuthSigner
        {

        public:
            /**
            * Take credentials provider and uses it for authentication. This constructor
            * is ideal for special credentials providers such as cognito-identity.
            */
            AWSAuthV4Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const char* serviceName, const Aws::String& region);

            virtual ~AWSAuthV4Signer();

            /**
            * Signs the request itself based on info in the request and uri.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            */
            bool SignRequest(Aws::Http::HttpRequest& request) const override;

            /**
            * Takes a request and signs the URI based on the HttpMethod, URI and other info from the request.
            * The URI can then be used in a normal HTTP call until expiration.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            * expirationInSeconds defaults to 0 which provides a URI good for 7 days.
            */
            bool PresignRequest(Aws::Http::HttpRequest& request, long long expirationInSeconds = 0) const override;

        private:
            Aws::String GenerateSignature(const Aws::Auth::AWSCredentials& credentials, const Aws::String& stringToSign, const Aws::String& simpleDate) const;
            Aws::String ComputePayloadHash(Aws::Http::HttpRequest&) const;
            Aws::String GenerateStringToSign(const Aws::String& dateValue, const Aws::String& simpleDate, const Aws::String& canonicalRequestHash) const;

            std::shared_ptr<Auth::AWSCredentialsProvider> m_credentialsProvider;
            Aws::String m_serviceName;
            Aws::String m_region;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256> m_hash;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256HMAC> m_HMAC;
        };

    } // namespace Client
} // namespace Aws

