/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/CryptoConfiguration.h>
namespace Aws
{
    namespace S3Encryption
    {

        CryptoConfiguration::CryptoConfiguration() :
            m_storageMethod(StorageMethod::METADATA),
            m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY)
        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMethod) :
            m_storageMethod(storageMethod),
            m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY)
        {
        }

        CryptoConfiguration::CryptoConfiguration(CryptoMode cryptoMode) :
            m_storageMethod(StorageMethod::METADATA),
            m_cryptoMode(cryptoMode),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY)
        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode) :
            m_storageMethod(storageMode),
            m_cryptoMode(cryptoMode),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY)
        {
        }

        CryptoConfigurationV2::CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials) :
            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials)
        {
        }

        CryptoConfigurationV2::CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials) :
            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials)
        {
        }
    }
}
