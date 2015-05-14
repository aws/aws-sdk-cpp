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
        class AWSCredentialsProvider;
    } // namespace Auth

    namespace Client
    {
        struct ClientConfiguration;

        class AWS_CORE_API AWSAuthSigner
        {
        public:
            virtual ~AWSAuthSigner() = default;

            virtual bool SignRequest(Aws::Http::HttpRequest& request) const = 0;
        };

        class AWS_CORE_API AWSAuthV4Signer : public AWSAuthSigner
        {

        public:
            /**
            * Take credentials provider and uses it for authentication. This constructor
            * is ideal for special credentials providers such as odin or other encryption helpers.
            */
            AWSAuthV4Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const char* serviceName, Region region);

            virtual ~AWSAuthV4Signer();

            virtual bool SignRequest(Aws::Http::HttpRequest& request) const override;

        private:

            AWSAuthV4Signer &operator =(const AWSAuthV4Signer &rhs);

            std::shared_ptr<Auth::AWSCredentialsProvider> m_credentialsProvider;
            Aws::String m_serviceName;
            Region m_region;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256> m_hash;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256HMAC> m_HMAC;
        };

        class AWS_CORE_API AWSAuthV2Signer : public AWSAuthSigner
        {
        public:
            AWSAuthV2Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider);

            AWSAuthV2Signer(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey);

            virtual ~AWSAuthV2Signer();

            virtual bool SignRequest(Aws::Http::HttpRequest& request) const override;

        private:

            AWSAuthV2Signer &operator =(const AWSAuthV2Signer& rhs);

            std::shared_ptr<Auth::AWSCredentialsProvider> m_credentialsProvider;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256HMAC> m_HMAC;
        };

        class AWS_CORE_API AWSAuthV3Signer : public AWSAuthSigner
        {
            AWSAuthV3Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider);
            AWSAuthV3Signer(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey);

            virtual ~AWSAuthV3Signer();

            virtual bool SignRequest(Aws::Http::HttpRequest& request) const override;

        private:
            AWSAuthV3Signer &operator =(const AWSAuthV3Signer &rhs);

            std::shared_ptr<Auth::AWSCredentialsProvider> m_credentialsProvider;
            Aws::UniquePtr<Aws::Utils::Crypto::Sha256HMAC> m_HMAC;
        };

    } // namespace Client
} // namespace Aws

