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
static const char* const Allocation_Tag = "CryptoModuleFactory";


CryptoModuleFactory::CryptoModuleFactory()
{
    m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryEO().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryEO>(Allocation_Tag, CryptoModuleFactoryEO())));
    m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryAE().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryAE>(Allocation_Tag, CryptoModuleFactoryAE())));
    m_cryptoFactories.insert(std::pair < CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>>(CryptoModuleFactoryStrictAE().HandlesMode(), Aws::MakeShared<CryptoModuleFactoryStrictAE>(Allocation_Tag, CryptoModuleFactoryStrictAE())));
}

std::shared_ptr<CryptoModule> CryptoModuleFactory::FetchCryptoModule(const std::shared_ptr<Aws::S3Encryption::Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig,
	const Aws::S3::S3Client& s3Client)
{
    auto entry = m_cryptoFactories.find(cryptoConfig.GetCryptoMode());
    std::shared_ptr<CryptoModuleAbstractFactory> factory = entry->second;
    return factory->CreateModule(encryptionMaterials, cryptoConfig, s3Client);
}


CryptoModuleFactoryEO::CryptoModuleFactoryEO()
{
}

std::shared_ptr<CryptoModule> CryptoModuleFactoryEO::CreateModule(const std::shared_ptr<Aws::S3Encryption::Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig,
	const Aws::S3::S3Client& s3Client)
{
    return Aws::MakeShared<CryptoModuleEO>(Allocation_Tag, encryptionMaterials, cryptoConfig, s3Client);
}

CryptoMode CryptoModuleFactoryEO::HandlesMode() const
{
    return CryptoMode::ENCRYPTION_ONLY;
}

CryptoModuleFactoryAE::CryptoModuleFactoryAE()
{
}

std::shared_ptr<CryptoModule> CryptoModuleFactoryAE::CreateModule(const std::shared_ptr<Aws::S3Encryption::Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig,
	const Aws::S3::S3Client& s3Client)
{
    return Aws::MakeShared<CryptoModuleAE>(Allocation_Tag, encryptionMaterials, cryptoConfig, s3Client);
}

CryptoMode CryptoModuleFactoryAE::HandlesMode() const
{
    return CryptoMode::AUTHENTICATED_ENCRYPTION;
}

CryptoModuleFactoryStrictAE::CryptoModuleFactoryStrictAE()
{
}

std::shared_ptr<CryptoModule> CryptoModuleFactoryStrictAE::CreateModule(const std::shared_ptr<Aws::S3Encryption::Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig,
	const Aws::S3::S3Client& s3Client)
{
    return Aws::MakeShared<CryptoModuleStrictAE>(Allocation_Tag, encryptionMaterials, cryptoConfig, s3Client);
}

CryptoMode CryptoModuleFactoryStrictAE::HandlesMode() const
{
    return CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION;
}

} //namespace Modules
} //namespace S3Encryption
} //namespace Aws