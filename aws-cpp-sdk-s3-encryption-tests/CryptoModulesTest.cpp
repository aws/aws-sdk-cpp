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

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>

namespace
{
    using namespace Aws::Auth;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::Modules;
    using namespace Aws::S3Encryption::Materials;
    class CryptoModulesTest : public ::testing::Test{};

    //This test is just to show how to use the factory and get the module from it.
    TEST_F(CryptoModulesTest, CryptoFactoryInitializationTest)
    {
        KMSEncryptionMaterials kmsMaterials("exmapleCMKID");
        CryptoConfiguration cryptoConfig;
        ProfileConfigFileAWSCredentialsProvider credentials;
        std::shared_ptr<CryptoModuleFactory> factory = CryptoModuleFactory::FetchFactory(cryptoConfig.GetCryptMode());
        auto module = factory->CreateModule(); //here is where I will pass in encryption materials, crypto config, and AWS Credentials.     
    }
}