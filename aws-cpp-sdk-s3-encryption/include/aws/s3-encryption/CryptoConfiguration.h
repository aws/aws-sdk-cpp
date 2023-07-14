/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
namespace Aws
{
    namespace S3Encryption
    {
        class S3EncryptionClient;

        enum class StorageMethod
        {
            METADATA,
            INSTRUCTION_FILE
        };

        enum class CryptoMode
        {
            /*
             * Encrypt with a non-authenticated mode of operation.
             *
             * NOTE: This feature is in maintenance mode, no new updates will be released.
             * Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.
             */
            ENCRYPTION_ONLY,
            /*
             * Encrypt with an authenticated mode of operation, but do not require that objects be authenticated on Get.
             *
             * NOTE: This feature is in maintenance mode, no new updates will be released.
             * Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.
             */
            AUTHENTICATED_ENCRYPTION,
            /*
             * Encrypt and decrypt with an authenticated mode of operation only.
             */
            STRICT_AUTHENTICATED_ENCRYPTION
        };

        enum class SecurityProfile
        {
            V2, // Client only decrypt objects encrypted using best practice key wrap algorithms (KMS_CONTEXT and AES_GCM ) and best practice content crypto schemes (AES_GCM)
            V2_AND_LEGACY, // Client will try to decrypt objects encrypted using all key wrap algorithms (KMS_CONTEXT, KMS, AES_KeyWrap, AES_GCM) and content crypto schemes (AES_GCM, AES_CBC).
        };

        enum class RangeGetMode
        {
            DISABLED, // Range get is not allowed
            ALL,    // Range get is allowed
        };

        class AWS_S3ENCRYPTION_API CryptoConfiguration
        {
        public:
            /*
            * Default constructor.
            */
            CryptoConfiguration();

            /*
            * Constructor that accepts a storage method and defaults the cryptoMode to authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMethod);

            /*
            * Constructor that accepts a crypto mode and defaults the storage method to metadata.
            */
            CryptoConfiguration(CryptoMode cryptoMode);

            /*
            * Constructor that accepts storage method and crypto mode. Default storage method is metadata and default crypto mode is authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode);

            /**
            * Gets the underlying storage mode.
            */
            inline StorageMethod GetStorageMethod() const
            {
                return m_storageMethod;
            }

            /**
            * Gets the underlying crypto mode.
            */
            inline CryptoMode GetCryptoMode() const
            {
                return m_cryptoMode;
            }

            /**
            * Sets the underlying storage method. Copies from parameter storageMethod.
            */
            inline void SetStorageMethod(StorageMethod storageMethod)
            {
                m_storageMethod = storageMethod;
            }

            /**
            * Sets the underlying cryptoMode. Copies from parameter cryptoMode
            */
            inline void SetCryptoMode(CryptoMode cryptoMode)
            {
                m_cryptoMode = cryptoMode;
            }

        private:
            inline void SetSecurityProfile(SecurityProfile profile) { m_securityProfile = profile; }
            inline void SetUnAuthenticatedRangeGet(RangeGetMode mode) { m_unAuthenticatedRangeGet = mode; }
            inline RangeGetMode GetUnAuthenticatedRangeGet() const { return m_unAuthenticatedRangeGet; }
            inline SecurityProfile GetSecurityProfile() const { return m_securityProfile; }

            StorageMethod m_storageMethod;
            CryptoMode m_cryptoMode;
            RangeGetMode m_unAuthenticatedRangeGet;
            SecurityProfile m_securityProfile;

            friend class S3EncryptionClientBase;
            friend class S3EncryptionClientV2;
        };

        class AWS_S3ENCRYPTION_API CryptoConfigurationV2
        {
        public:
            CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials);
            CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials);

            inline void SetSecurityProfile(SecurityProfile profile) { m_securityProfile = profile; }
            inline void SetUnAuthenticatedRangeGet(RangeGetMode mode) { m_unAuthenticatedRangeGet = mode; }
            inline void SetStorageMethod(StorageMethod storageMethod) { m_storageMethod = storageMethod; }

            inline SecurityProfile GetSecurityProfile() const { return m_securityProfile; }
            inline RangeGetMode GetUnAuthenticatedRangeGet() const { return m_unAuthenticatedRangeGet; }
            inline StorageMethod GetStorageMethod() const { return m_storageMethod; }
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> GetEncryptionMaterials() const { return m_encryptionMaterials; }

        private:
            StorageMethod m_storageMethod;
            RangeGetMode m_unAuthenticatedRangeGet;
            SecurityProfile m_securityProfile;
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
        };
    }
}
