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
#include <aws/external/gtest.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Config;

static void WriteDefaultConfigFile(Aws::OStream& stream, bool useProfilePrefix = false)
{
    const char* profilePrefix = useProfilePrefix ? "profile " : "";
    stream << "[" << profilePrefix << "default ]" << std::endl;
    stream << "aws_access_key_id=AKIAKEY" << std::endl;
    stream << "aws_secret_access_key=foobarbarfoo  " << std::endl;
    stream << "  aws_session_token= \"tokentokentoken==\"" << std::endl;
    stream << "region=us-east-1" << std::endl << std::endl;
    stream << "s3=" << std::endl;
    stream << "    max_concurrent_requests=10;" << std::endl;
    stream << "    max_queue_size=1000" << std::endl << std::endl;

    stream << "[ " << profilePrefix << "assumes_role]" << std::endl;
    stream << "role_arn =arn:aws:iam::123456789:role/foo" << std::endl;
    stream << "external_id = some-random-characters" << std::endl;
    stream << "source_profile= default" << std::endl;
    stream << "region = us-west-2" << std::endl;
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileLoad)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);

    ASSERT_TRUE(configFile.good());

    WriteDefaultConfigFile(configFile);

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    ASSERT_EQ(2u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("assumes_role"));

    ASSERT_STREQ("AKIAKEY", profiles["default"].GetCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("foobarbarfoo", profiles["default"].GetCredentials().GetAWSSecretKey().c_str());
    ASSERT_STREQ("\"tokentokentoken==\"", profiles["default"].GetCredentials().GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles["default"].GetRegion().c_str());
    ASSERT_TRUE(profiles["default"].GetRoleArn().empty());
    ASSERT_TRUE(profiles["default"].GetSourceProfile().empty());

    ASSERT_STREQ("arn:aws:iam::123456789:role/foo", profiles["assumes_role"].GetRoleArn().c_str());
    ASSERT_STREQ("some-random-characters", profiles["assumes_role"].GetExternalId().c_str());
    ASSERT_STREQ("default", profiles["assumes_role"].GetSourceProfile().c_str());
    ASSERT_STREQ("us-west-2", profiles["assumes_role"].GetRegion().c_str());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSSecretKey().empty());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestConfigFileLoad)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    WriteDefaultConfigFile(configFile);

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    ASSERT_EQ(2u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("assumes_role"));

    ASSERT_STREQ("AKIAKEY", profiles["default"].GetCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("foobarbarfoo", profiles["default"].GetCredentials().GetAWSSecretKey().c_str());
    ASSERT_STREQ("\"tokentokentoken==\"", profiles["default"].GetCredentials().GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles["default"].GetRegion().c_str());
    ASSERT_TRUE(profiles["default"].GetRoleArn().empty());
    ASSERT_TRUE(profiles["default"].GetSourceProfile().empty());

    ASSERT_STREQ("arn:aws:iam::123456789:role/foo", profiles["assumes_role"].GetRoleArn().c_str());
    ASSERT_STREQ("default", profiles["assumes_role"].GetSourceProfile().c_str());
    ASSERT_STREQ("us-west-2", profiles["assumes_role"].GetRegion().c_str());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSSecretKey().empty());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileEmpty)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileNotExists)
{
    auto configFileName = "";
    Aws::OFStream configFile(configFileName);
    ASSERT_FALSE(configFile.good());
    configFile << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFileName);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileCorrupted)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << std::endl;
    configFile << "[" << std::endl;
    configFile << "blah blah blah" << std::endl;
    configFile << "]" << std::endl;
    configFile << "blah=blah" << std::endl;
    configFile << "fjk;dsaifoewagtndsalkjds" << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

static const char* const ALLOCATION_TAG = "EC2InstanceProfileConfigLoaderTest";

TEST(EC2InstanceProfileConfigLoaderTest, TestSuccesfullyHitsService)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("us-east-1");
    mockClient->SetMockedCredentialsValue("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_TRUE(loader.Load());
    ASSERT_EQ(1u, loader.GetProfiles().size());
    auto profiles = loader.GetProfiles();
    ASSERT_NE(profiles.end(), profiles.find(Aws::Config::INSTANCE_PROFILE_KEY));
    auto creds = profiles[Aws::Config::INSTANCE_PROFILE_KEY].GetCredentials();
    ASSERT_STREQ("goodAccessKey", creds.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("goodSecretKey", creds.GetAWSSecretKey().c_str());
    ASSERT_STREQ("goodToken", creds.GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles[Aws::Config::INSTANCE_PROFILE_KEY].GetRegion().c_str());
}

TEST(EC2InstanceProfileConfigLoaderTest, TestFailsToHitService)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("");
    mockClient->SetMockedCredentialsValue("");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(EC2InstanceProfileConfigLoaderTest, TestBadJsonInResponse)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("us-east-1");
    mockClient->SetMockedCredentialsValue("{ \"AccessKeyId\": \"goodAccessKey\",");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}
