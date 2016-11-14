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
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/core/utils/logging/LogMacros.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Modules
        {
            static const char* const ALLOCATION_TAG = "CryptoModuleFactory";


            CryptoModuleFactory::CryptoModuleFactory()
            {
                m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryEO().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryEO>(ALLOCATION_TAG, CryptoModuleFactoryEO())));
                m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryAE().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryAE>(ALLOCATION_TAG, CryptoModuleFactoryAE())));
                m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryStrictAE().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryStrictAE>(ALLOCATION_TAG, CryptoModuleFactoryStrictAE())));
            }

            std::shared_ptr<CryptoModule> CryptoModuleFactory::FetchCryptoModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) const
            {
                auto entry = m_cryptoFactories.find(cryptoConfig.GetCryptoMode());
                std::shared_ptr<CryptoModuleAbstractFactory> factory = entry->second;
                return factory->CreateModule(encryptionMaterials, cryptoConfig);
            }


            CryptoModuleFactoryEO::CryptoModuleFactoryEO()
            {
            }

            std::shared_ptr<CryptoModule> CryptoModuleFactoryEO::CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig)
            {
                return Aws::MakeShared<CryptoModuleEO>(ALLOCATION_TAG, encryptionMaterials, cryptoConfig);
            }

            CryptoMode CryptoModuleFactoryEO::HandlesMode() const
            {
                return CryptoMode::ENCRYPTION_ONLY;
            }

            CryptoModuleFactoryAE::CryptoModuleFactoryAE()
            {
            }

            std::shared_ptr<CryptoModule> CryptoModuleFactoryAE::CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig)
            {
                return Aws::MakeShared<CryptoModuleAE>(ALLOCATION_TAG, encryptionMaterials, cryptoConfig);
            }

            CryptoMode CryptoModuleFactoryAE::HandlesMode() const
            {
                return CryptoMode::AUTHENTICATED_ENCRYPTION;
            }

            CryptoModuleFactoryStrictAE::CryptoModuleFactoryStrictAE()
            {
            }

            std::shared_ptr<CryptoModule> CryptoModuleFactoryStrictAE::CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig)
            {
                return Aws::MakeShared<CryptoModuleStrictAE>(ALLOCATION_TAG, encryptionMaterials, cryptoConfig);
            }

            CryptoMode CryptoModuleFactoryStrictAE::HandlesMode() const
            {
                return CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION;
            }

        } //namespace Modules
    } //namespace S3Encryption
} //namespace Aws