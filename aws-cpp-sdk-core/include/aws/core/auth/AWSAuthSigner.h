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
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>

#include <memory>
#include <atomic>
#include <chrono>

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
            AWSAuthSigner() : m_clockSkew() { m_clockSkew.store(std::chrono::milliseconds(0L)); }
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

            /**
            * Generates a signed Uri using the injected signer. for the supplied uri and http method and region. expirationInSeconds defaults
            * to 0 which is the default 7 days.
            */
            virtual bool PresignRequest(Aws::Http::HttpRequest& request, const char* region, long long expirationInSeconds = 0) const = 0;

            /**
            * Generates a signed Uri using the injected signer. for the supplied uri and http method, region, and service name. expirationInSeconds defaults
            * to 0 which is the default 7 days.
            */
            virtual bool PresignRequest(Aws::Http::HttpRequest& request, const char* region, const char* serviceName, long long expirationInSeconds = 0) const = 0;

            /**
             * This handles detection of clock skew between clients and the server and adjusts the clock so that the next request will not
             * fail on the timestamp check.
             */
            virtual void SetClockSkew(const std::chrono::milliseconds& clockSkew) { m_clockSkew = clockSkew; }

            /**
             * Gets the timestamp being used by the signer. This may include a clock skew if a clock skew has been detected.
             */
            virtual Aws::Utils::DateTime GetSigningTimestamp() const { return Aws::Utils::DateTime::Now() + GetClockSkewOffset(); }

        protected:            
            virtual std::chrono::milliseconds GetClockSkewOffset() const { return m_clockSkew.load(); }

            std::atomic<std::chrono::milliseconds> m_clockSkew;
        };

        /**
         * AWS Auth v4 Signer implementation of the AWSAuthSigner interface. More information on AWS Auth v4 Can be found here:
         * http://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html
         */
        class AWS_CORE_API AWSAuthV4Signer : public AWSAuthSigner
        {

        public:
            /**
             * credentialsProvider, source of AWS Credentials to sign requests with
             * serviceName,  canonical service name to sign with
             * region, region string to use in signature
             * signPayloads, if true, the payload will have a sha256 computed on the body of the request. If this is set
             *    to false, the sha256 will not be computed on the body. This is only useful for Amazon S3 over Https. If
             *    Https is not used then this flag will be ignored.
             */
            AWSAuthV4Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
                            const char* serviceName, const Aws::String& region, bool signPayloads = true, bool urlEscapePath = true);

            virtual ~AWSAuthV4Signer();

            /**
            * Signs the request itself based on info in the request and uri.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            */
            bool SignRequest(Aws::Http::HttpRequest& request) const override;

            /**
            * Takes a request and signs the URI based on the HttpMethod, URI and other info from the request.
            * the region the signer was initialized with will be used for the signature.
            * The URI can then be used in a normal HTTP call until expiration.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            * expirationInSeconds defaults to 0 which provides a URI good for 7 days.
            */
            bool PresignRequest(Aws::Http::HttpRequest& request, long long expirationInSeconds = 0) const override;

            /**
            * Takes a request and signs the URI based on the HttpMethod, URI and other info from the request.            
            * The URI can then be used in a normal HTTP call until expiration.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            * expirationInSeconds defaults to 0 which provides a URI good for 7 days.
            */
            bool PresignRequest(Aws::Http::HttpRequest& request, const char* region, long long expirationInSeconds = 0) const override;

            /**
            * Takes a request and signs the URI based on the HttpMethod, URI and other info from the request.
            * The URI can then be used in a normal HTTP call until expiration.
            * Uses AWS Auth V4 signing method with SHA256 HMAC algorithm.
            * expirationInSeconds defaults to 0 which provides a URI good for 7 days.
            */
            bool PresignRequest(Aws::Http::HttpRequest& request, const char* region, const char* serviceName, long long expirationInSeconds = 0) const override;

        protected:
            bool m_includeSha256HashHeader;

        private:
            Aws::String GenerateSignature(const Aws::Auth::AWSCredentials& credentials, const Aws::String& stringToSign, const Aws::String& simpleDate) const;
            Aws::String ComputePayloadHash(Aws::Http::HttpRequest&) const;
            Aws::String GenerateStringToSign(const Aws::String& dateValue, const Aws::String& simpleDate, const Aws::String& canonicalRequestHash) const;
            const Aws::Utils::ByteBuffer& ComputeLongLivedHash(const Aws::String& secretKey, const Aws::String& simpleDate) const;

            bool ShouldSignHeader(const Aws::String& header) const;

            std::shared_ptr<Auth::AWSCredentialsProvider> m_credentialsProvider;
            Aws::String m_serviceName;
            Aws::String m_region;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256> m_hash;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256HMAC> m_HMAC;

            Aws::Set<Aws::String> m_unsignedHeaders;

            //these next four fields are ONLY for caching purposes and do not change
            //the logical state of the signer. They are marked mutable so the
            //interface can remain const.
            mutable Aws::Utils::ByteBuffer m_partialSignature;
            mutable Aws::String m_currentDateStr;
            mutable Aws::String m_currentSecretKey;
            mutable std::mutex m_partialSignatureLock;
            bool m_signPayloads;
            bool m_urlEscapePath;
        };

    } // namespace Client
} // namespace Aws

