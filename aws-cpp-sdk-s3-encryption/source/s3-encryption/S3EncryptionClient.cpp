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
#include <aws/s3-encryption/S3EncryptionClient.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils::Crypto;
namespace Aws
{
    namespace S3Encryption
    {
        static const char* const ALLOCATION_TAG = "S3EncryptionClient";

        using namespace Aws::S3::Model;

        S3EncryptionClient::S3EncryptionClient(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Client::ClientConfiguration& clientConfiguration) :
            S3Client(clientConfiguration), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
        }

        S3EncryptionClient::S3EncryptionClient(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
            S3Client(credentials, clientConfiguration), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
        }

        S3EncryptionClient::S3EncryptionClient(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials,
            const Aws::S3Encryption::CryptoConfiguration& cryptoConfig, const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const Client::ClientConfiguration& clientConfiguration) :
            S3Client(credentialsProvider, clientConfiguration), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
        }

        Aws::S3::Model::PutObjectOutcome S3EncryptionClient::PutObject(const Aws::S3::Model::PutObjectRequest& request) const
        {
            auto module = m_cryptoModuleFactory.FetchCryptoModule(m_encryptionMaterials, m_cryptoConfig);
            auto putObjectFunction = [this](const Aws::S3::Model::PutObjectRequest& putRequest) { return S3Client::PutObject(putRequest); };
            return module->PutObjectSecurely(request, putObjectFunction);
        }

        Aws::S3::Model::GetObjectOutcome S3EncryptionClient::GetObject(const Aws::S3::Model::GetObjectRequest & request) const
        {
            Aws::S3::Model::HeadObjectRequest headRequest;
            headRequest.WithBucket(request.GetBucket());
            headRequest.WithKey(request.GetKey());
            Aws::S3::Model::HeadObjectOutcome headOutcome = this->HeadObject(headRequest);
            if (!headOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Head Request not successful: "
                    << headOutcome.GetError().GetExceptionName() << " : "
                    << headOutcome.GetError().GetMessage());
                return Aws::S3::Model::GetObjectOutcome(headOutcome.GetError());
            }

            auto headMetadata = headOutcome.GetResult().GetMetadata();
            auto metadataEnd = headMetadata.end();
            CryptoConfiguration decryptionCryptoConfig;
            headMetadata.find(CONTENT_KEY_HEADER) != metadataEnd && headMetadata.find(IV_HEADER) != metadataEnd
                ? decryptionCryptoConfig.SetStorageMethod(StorageMethod::METADATA)
                : decryptionCryptoConfig.SetStorageMethod(StorageMethod::INSTRUCTION_FILE);

            ContentCryptoMaterial contentCryptoMaterial;
            if (decryptionCryptoConfig.GetStorageMethod() == StorageMethod::INSTRUCTION_FILE)
            {
                GetObjectOutcome instructionOutcome = GetInstructionFileObject(request);
                if (!instructionOutcome.IsSuccess())
                {
                    return instructionOutcome;
                }
                Handlers::InstructionFileHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(instructionOutcome.GetResult());
            }
            else
            {
                Handlers::MetadataHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());
            }

            if (contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::CBC)
            {
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::ENCRYPTION_ONLY);
            }
            else if (m_cryptoConfig.GetCryptoMode() != CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION &&
                contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::GCM)
            {
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
            }
            else
            {
                assert(request.GetRange().empty());
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);
            }

            auto module = m_cryptoModuleFactory.FetchCryptoModule(m_encryptionMaterials, decryptionCryptoConfig);
            auto getObjectFunction = [this](const Aws::S3::Model::GetObjectRequest& getRequest) { return S3Client::GetObject(getRequest); };
            return module->GetObjectSecurely(request, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        }

        Aws::S3::Model::GetObjectOutcome S3EncryptionClient::GetInstructionFileObject(const Aws::S3::Model::GetObjectRequest & originalGetRequest) const
        {
            GetObjectRequest instructionFileRequest;
            instructionFileRequest.SetKey(originalGetRequest.GetKey() + Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX);
            instructionFileRequest.SetBucket(originalGetRequest.GetBucket());
            GetObjectOutcome instructionOutcome = S3Client::GetObject(instructionFileRequest);
            if (!instructionOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Instruction file get operation not successful: "
                    << instructionOutcome.GetError().GetExceptionName() << " : "
                    << instructionOutcome.GetError().GetMessage());
                return instructionOutcome;
            }
            return instructionOutcome;
        }

    }
}

