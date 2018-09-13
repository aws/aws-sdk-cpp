/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/s3/S3Client.h>
#include <aws/s3-encryption/S3EncryptionClient.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/PutObjectResult.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Modules
        {
            typedef std::function <Aws::S3::Model::PutObjectOutcome(const Aws::S3::Model::PutObjectRequest&)> PutObjectFunction;
            typedef std::function <Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&)> GetObjectFunction;

            class AWS_S3ENCRYPTION_API CryptoModule
            {
            public:
                /*
                 * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                 */
                CryptoModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig);


                /*
                 * Default destructor
                 */
                virtual ~CryptoModule() = default;

                /*
                * Function to put an encrypted object to S3.
                */
                S3EncryptionPutObjectOutcome PutObjectSecurely(const Aws::S3::Model::PutObjectRequest& request, const PutObjectFunction& putObjectFunction);

                /*
                * Function to get an encrypted object from S3. This function takes a headObjectResult as well to collect metadata.
                */
                S3EncryptionGetObjectOutcome GetObjectSecurely(const Aws::S3::Model::GetObjectRequest& request, const Aws::S3::Model::HeadObjectResult& headObjectResult,
                    const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial, const GetObjectFunction& getObjectFunction);

                /*
                * Function to parse range of a get object request and return a pair containing the lower and upper bounds.
                */
                static std::pair<int64_t, int64_t> ParseGetObjectRequestRange(const Aws::String& range, int64_t contentLength);

            private:
                /*
                * This function is used to encrypt the given S3 PutObjectRequest.
                */
                S3EncryptionPutObjectOutcome WrapAndMakeRequestWithCipher(Aws::S3::Model::PutObjectRequest& request, const PutObjectFunction& putObjectFunction);

                /*
                * This function is used to decrypt the given S3 GetObjectResult.
                */
                S3EncryptionGetObjectOutcome UnwrapAndMakeRequestWithCipher(Aws::S3::Model::GetObjectRequest& request, const GetObjectFunction& getObjectFunction, int16_t firstBlockOffset = 0);

            protected:
                /*
                * This function sets the content length of the put object request, accounting for any additional content appended after encryption.
                */
                virtual void SetContentLength(Aws::S3::Model::PutObjectRequest& request) = 0;

                /**
                * This function initializes the cipher for encryption with the content encryption key and iv.
                */
                virtual void InitEncryptionCipher() = 0;

                /**
                * This function initializes the cipher for decryption with the content encryption key, iv and tag.
                */
                virtual void InitDecryptionCipher(int64_t rangeStart = 0, int64_t rangeEnd = 0, const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer()) = 0;

                /*
                * This function populates the content crypto material with the module specific details for encryption.
                */
                virtual void PopulateCryptoContentMaterial() = 0;

                /*
                * This function is used to get the crypto tag appended to the end of the body. It creates a seperate get request to obtain the tag.
                */
                virtual Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction) = 0;

                /*
                * This function checks for any prohibitted actions within each module.
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) = 0;

                /*
                * This function adjusts the get object request range to specifically get only the body of the content and not any addition content. It also adjusts the range if the a range-get request was specified according to the range for the cipher block.
                */
                virtual std::pair<int64_t, int64_t> AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) = 0;

                std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
                Aws::Utils::Crypto::ContentCryptoMaterial m_contentCryptoMaterial;
                CryptoConfiguration m_cryptoConfig;
                std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> m_cipher;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleEO : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleEO(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig);

            private:
                /*
                * Function to set content length of request which accounts for CBC padding.
                */
                void SetContentLength(Aws::S3::Model::PutObjectRequest& request) override;

                /*
                * Function to populate the crypto content member variable.
                */
                void PopulateCryptoContentMaterial() override;

                /**
                * Function to initialize the cipher for encryption using the crypto content material.
                */
                void InitEncryptionCipher() override;

                /**
                *Function to initialize the cipher for decryption using the crypto content material.
                */
                void InitDecryptionCipher(int64_t rangeStart = 0, int64_t rangeEnd = 0, const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer()) override;

                /*
                * Function to get the crypto tag according to the module.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function to adjust getObjectRequest range to only specify the encrypted body.
                */
                std::pair<int64_t, int64_t> AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleAE : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleAE(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig);

            private:
                /*
                * Function to set content length of request which accounts for the GCM tag appended to the body of the request.
                */
                void SetContentLength(Aws::S3::Model::PutObjectRequest& request) override;
                /*
                * Function to populate the crypto content member variable.
                */
                void PopulateCryptoContentMaterial() override;

                /**
                * Function to initialize the cipher for encryption using the crypto content material.
                */
                void InitEncryptionCipher() override;

                /**
                *Function to initialize the cipher for decryption using the crypto content material.
                */
                void InitDecryptionCipher(int64_t rangeStart = 0, int64_t rangeEnd = 0, const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer()) override;

                /*
                * Function to get the crypto tag according to the module.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function adjust getObjectRequest range to only specify the encrypted body.
                */
                std::pair<int64_t, int64_t> AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleStrictAE : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleStrictAE(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig);

            private:
                /*
                * Function to set content length of request which accounts for the GCM tag appended to the body of the request.
                */
                void SetContentLength(Aws::S3::Model::PutObjectRequest& request) override;
                /*
                * Function to populate the crypto content member variable.
                */
                void PopulateCryptoContentMaterial() override;

                /**
                * Function to initialize the cipher for encryption using the crypto content material.
                */
                void InitEncryptionCipher() override;

                /**
                *Function to initialize the cipher for decryption using the crypto content material.
                */
                void InitDecryptionCipher(int64_t rangeStart = 0, int64_t rangeEnd = 0, const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer()) override;

                /*
                * Function to get the crypto tag according to the module.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function adjust getObjectRequest range to only specify the encrypted body.
                */
                std::pair<int64_t, int64_t> AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
            };

            /**
             * This isn't a normal GCM Cipher. It appends the tag to the stream so that the tag can be sent as part of the stream
             * in the Crypto Modules. This is only useful for encryption in the CryptoModules.
             */
            class AWS_S3ENCRYPTION_API AES_GCM_AppendedTag : public Aws::Utils::Crypto::SymmetricCipher
            {
            public:
                /**
                 * This will create a GCM cipher under the hood, passing the specified key.
                 */
                AES_GCM_AppendedTag(const Aws::Utils::CryptoBuffer& key);

                operator bool() const override;

                /**
                 * Calls straight through to internal cipher.
                 */
                Aws::Utils::CryptoBuffer EncryptBuffer(const Aws::Utils::CryptoBuffer& unEncryptedData) override;

                /**
                 * Finalize Encryption, returns whatever is left in the cipher, computes the tag, and appends the tag to the output.
                 *  Calls FinalizeEncryption on the underlying cipher first.
                 */
                Aws::Utils::CryptoBuffer FinalizeEncryption() override;

                /**
                 * Do not use for decryption mode. It will assert(0)
                 */
                Aws::Utils::CryptoBuffer DecryptBuffer(const Aws::Utils::CryptoBuffer& unEncryptedData) override;

                /**
                 *  Do not use for decryption mode. It will assert(0)
                 */
                Aws::Utils::CryptoBuffer FinalizeDecryption() override;

                /**
                 * Calls reset on internal cipher
                 */
                void Reset() override;

            private:
                std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> m_cipher;
            };

        }
    }
}
