/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/logging/LogMacros.h>

// TODO: temporary fix for naming conflicts on Windows.
#ifdef _WIN32
#ifdef GetMessage
#undef GetMessage
#endif
#ifdef GetObject
#undef GetObject
#endif
#endif

#include <aws/s3-encryption/modules/CryptoModule.h>
#include <aws/s3-encryption/S3EncryptionClient.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Client;

namespace Aws
{
    namespace S3Encryption
    {
        static const char* const ALLOCATION_TAG = "S3EncryptionClient";
        using namespace Aws::S3;
        using namespace Aws::S3::Model;

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->SetServiceClientName("S3CryptoV1n");
        }

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, credentials, clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->SetServiceClientName("S3CryptoV1n");
        }

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials,
            const Aws::S3Encryption::CryptoConfiguration& cryptoConfig, const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, credentialsProvider, clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->SetServiceClientName("S3CryptoV1n");
        }

        S3EncryptionPutObjectOutcome S3EncryptionClientBase::PutObject(const Aws::S3::Model::PutObjectRequest& request, const Aws::Map<Aws::String, Aws::String>& contextMap) const
        {
            auto module = m_cryptoModuleFactory.FetchCryptoModule(m_encryptionMaterials, m_cryptoConfig);
            auto putObjectFunction = [this](const Aws::S3::Model::PutObjectRequest& putRequest) { return m_s3Client->PutObject(putRequest); };
            return module->PutObjectSecurely(request, putObjectFunction, contextMap);
        }

        S3EncryptionGetObjectOutcome S3EncryptionClientBase::GetObject(const Aws::S3::Model::GetObjectRequest & request) const
        {
            Aws::S3::Model::HeadObjectRequest headRequest;
            headRequest.WithBucket(request.GetBucket());
            headRequest.WithKey(request.GetKey());
            Aws::S3::Model::HeadObjectOutcome headOutcome = m_s3Client->HeadObject(headRequest);
            if (!headOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Head Request not successful: "
                    << headOutcome.GetError().GetExceptionName() << " : "
                    << headOutcome.GetError().GetMessage());
                return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(headOutcome.GetError()));
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
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(instructionOutcome.GetError()));
                }
                Handlers::InstructionFileHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(instructionOutcome.GetResult());
            }
            else
            {
                Handlers::MetadataHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());
            }

            // security check
            if (request.RangeHasBeenSet() && m_cryptoConfig.GetUnAuthenticatedRangeGet() == RangeGetMode::DISABLED)
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Unable to perform range get request: Range get support has been disabled. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html");
                return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "RangeGetFailed",
                            "Unable to perform range get request: Range get support has been disabled. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html", false/*not retryable*/)));
            }

            if (m_cryptoConfig.GetSecurityProfile() == SecurityProfile::V2)
            {
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::AES_GCM &&
                    contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::KMS_CONTEXT)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object");
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "DecryptV1EncryptSchemaFailed",
                                "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object.", false/*not retryable*/)));
                }

                if (contentCryptoMaterial.GetContentCryptoScheme() != ContentCryptoScheme::GCM)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object");
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "DecryptV1EncryptSchemaFailed",
                                "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object.", false/*not retryable*/)));
                }
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
            auto getObjectFunction = [this](const Aws::S3::Model::GetObjectRequest& getRequest) { return m_s3Client->GetObject(getRequest); };
            return module->GetObjectSecurely(request, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        }

        Aws::S3::Model::GetObjectOutcome S3EncryptionClientBase::GetInstructionFileObject(const Aws::S3::Model::GetObjectRequest & originalGetRequest) const
        {
            GetObjectRequest instructionFileRequest;
            instructionFileRequest.SetKey(originalGetRequest.GetKey() + Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX);
            instructionFileRequest.SetBucket(originalGetRequest.GetBucket());
            GetObjectOutcome instructionOutcome = m_s3Client->GetObject(instructionFileRequest);
            if (!instructionOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Instruction file get operation not successful: "
                    << instructionOutcome.GetError().GetExceptionName() << " : "
                    << instructionOutcome.GetError().GetMessage());
                return instructionOutcome;
            }
            return instructionOutcome;
        }

        void S3EncryptionClientV2::Init(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig)
        {
            m_cryptoConfig.SetSecurityProfile(cryptoConfig.GetSecurityProfile());
            m_cryptoConfig.SetUnAuthenticatedRangeGet(cryptoConfig.GetUnAuthenticatedRangeGet());
            m_s3Client->SetServiceClientName("S3CryptoV2");

            if (cryptoConfig.GetSecurityProfile() == SecurityProfile::V2_AND_LEGACY)
            {
                AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "The S3 Encryption Client is configured to read encrypted data with legacy encryption modes. If you don't have objects encrypted with these legacy modes, you should disable support for them to enhance security. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html");
            }
        }
    }
}
