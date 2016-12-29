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

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3/S3Client.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/modules/CryptoModule.h>

namespace Aws
{
    namespace S3Encryption
    {
        class AWS_S3ENCRYPTION_API S3EncryptionClient : public Aws::S3::S3Client
        {
        public:
            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, AWS credentials and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());
            
            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, AWS credentials provider and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

            S3EncryptionClient(const S3EncryptionClient&) = delete;
            S3EncryptionClient& operator=(const S3EncryptionClient&) = delete;

            /*
            * Function to put an object encrypted to S3.
            */
            Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const override;

            /*
            * Function to get an object decrypted from S3.
            */
            Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override;

        private:
            /*
            * Function to get the instruction file object of a encrypted object from S3. This instruction file object will be used to assist decryption.
            */
            Aws::S3::Model::GetObjectOutcome GetInstructionFileObject(const Aws::S3::Model::GetObjectRequest& originalGetRequest) const;

            Aws::S3Encryption::Modules::CryptoModuleFactory m_cryptoModuleFactory;
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
            const Aws::S3Encryption::CryptoConfiguration& m_cryptoConfig;
        };
    }
}