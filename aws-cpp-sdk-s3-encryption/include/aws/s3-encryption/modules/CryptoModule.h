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
#include <aws/s3-encryption/ContentCryptoMaterial.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/s3-encryption/materials/EncryptionMaterials.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <aws/s3/S3Client.h>
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
            class AWS_S3ENCRYPTION_API CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModule(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
                    const Aws::S3::S3Client& s3Client);

                /*
                * Function to put an encrypted object to S3.
                */
                Aws::S3::Model::PutObjectOutcome PutObjectSecurely(Aws::S3::Model::PutObjectRequest& request);

                /*
                * Function to get an encrypted object from S3. This function takes a headObjectResult as well to collect metadata.
                */
                Aws::S3::Model::GetObjectOutcome GetObjectSecurely(Aws::S3::Model::GetObjectRequest& request, const Aws::S3::Model::HeadObjectResult& headObjectResult);

            private:
                /*
                * This function is used to encrypt the given S3 PutObjectRequest.
                */
                const Aws::S3::Model::PutObjectOutcome WrapAndMakeRequestWithCipher(Aws::S3::Model::PutObjectRequest& request);

                /*
                * This function is used to decrypt the given S3 GetObjectResult.
                */
                const Aws::S3::Model::GetObjectOutcome UnwrapAndMakeRequestWithCipher(Aws::S3::Model::GetObjectRequest& request);

            protected:
                /*
                * Override this function to set the content length of the put object request.
                */
                virtual void SetContentLength(Aws::S3::Model::PutObjectRequest& request) = 0;

                /**
                * Override this Function to initialize the cipher for encryption using the crypto content material.
                */
                virtual void InitEncryptionCipher() = 0;

                /**
                * Override this Function to initialize the cipher for decryption using the crypto content material.
                */
                virtual void InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer()) = 0;

                /*
                * Override this function to populate the crypto content member variable.
                */
                virtual void PopulateCryptoContentMaterial() = 0;

                /*
                * Override this function to get the crypto tag according to the module. See specific module documentation for more details.
                */
                virtual Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request) = 0;

                /*
                * Override this function to check for any prohibitted actions specific to each module. Refer to documentation on subclass functions for details. 
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) = 0;

                /*
                * Override this function adjust getObjectRequest range to only specify the encrypted body. 
                */
                virtual void AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) = 0;

                const Aws::S3::S3Client& m_s3Client;
                std::shared_ptr<Materials::EncryptionMaterials> m_encryptionMaterials;
                ContentCryptoMaterial m_contentCryptoMaterial;
                CryptoConfiguration m_cryptoConfig;
                std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> m_cipher;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleEO : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleEO(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
                    const Aws::S3::S3Client& s3Client);

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
                void InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer());

                /*
                * Function to get the crypto tag according to the module. 
                * For Encryption Only, this will only return an empty cryptobuffer since there is no tag in CBC encryption.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                * In Encryption Only, a warning will be logged to notify the user that they are using Encryption Only mode for decryption.
                * The decryption will still occur. 
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function adjust getObjectRequest range to only specify the encrypted body.
                * For Encryption Only, this will not change the range since there is no tag appended to the end of the body.
                */
                void AdjustRange( Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleAE : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
                    const Aws::S3::S3Client& s3Client);

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
                void InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer());

                /*
                * Function to get the crypto tag according to the module.
                * For Authenticated Encryption, this will only return the 16 byte crypto tag at the end of the crypto body.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function adjust getObjectRequest range to only specify the encrypted body.
                * For Authenticated Encryption, this will change the range to exclude the tag from GCM encryption.
                */
                void AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
            };

            class AWS_S3ENCRYPTION_API CryptoModuleStrictAE : public CryptoModule
            {
            public:
                /*
                * Constructor to initialize encryption materials, crypto configuration, and internal S3 client.
                */
                CryptoModuleStrictAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
                    const Aws::S3::S3Client& s3Client);
                
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
                void InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag = Aws::Utils::CryptoBuffer());

                /*
                * Function to get the crypto tag according to the module.
                * For Authenticated Encryption, this will only return the 16 byte crypto tag at the end of the crypto body.
                */
                Aws::Utils::CryptoBuffer GetTag(const Aws::S3::Model::GetObjectRequest& request) override;

                /*
                * Function to check for any prohibitted actions specific to each module for decryption.
                * In strict AE mode, this function will check for range get operations or decryption of non GCM-encrypted object.
                * This will log a fatal error and exit. 
                */
                virtual void DecryptionConditionCheck(const Aws::String& requestRange) override;

                /*
                * Function adjust getObjectRequest range to only specify the encrypted body.
                * For Strict Authenticated Encryption, this will change the range to exclude the tag from GCM encryption.
                */
                void AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult) override;
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
