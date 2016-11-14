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
#include <aws/testing/MemoryTesting.h>

#include <aws/testing/mocks/aws/auth/MockEC2MetadataClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/config/AWSProfileConfigLoader.h>

#include <stdlib.h>
#include <thread>
#include <fstream>

static const char *AllocationTag = "AWSCredentialsProviderTest";

using namespace Aws::Auth;
using namespace Aws::Utils;

TEST(ProfileConfigFileAWSCredentialsProviderTest, TestDefaultConfig)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
 
    Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename();
    Aws::String tempFileName = configFileName + "_tempMv";
    std::cout << tempFileName << std::endl;
    Aws::FileSystem::RelocateFileOrDirectory(configFileName.c_str(), tempFileName.c_str());

    Aws::OFStream configFile(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << std::endl;
    configFile << "[Somebody Else ]" << std::endl;
    configFile << "aws_access_key_id = SomebodyElseAccessId" << std::endl;
    configFile << "something else to break the parser" << std::endl;
    configFile << "#test comment" << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "aws_access_key_id = DefaultAccessKey" << std::endl;
    configFile << "aws_secret_access_key=DefaultSecretKey " << std::endl;
    configFile << "aws_session_token=DefaultSessionToken" << std::endl;
    configFile << std::endl;
    configFile << " [Somebody Else Again]" << std::endl;
    configFile << "aws_secret_access_key = SomebodyElseAgainAccessId" << std::endl;
    configFile << " aws_secret_access_key=SomebodyElseAgainSecretKey" << std::endl;
    configFile << "aws_session_token=SomebodyElseAgainSessionToken" << std::endl;

    configFile.flush();
    configFile.close();


    ProfileConfigFileAWSCredentialsProvider provider(10);
    EXPECT_STREQ("DefaultAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RelocateFileOrDirectory(tempFileName.c_str(), configFileName.c_str());

    AWS_END_MEMORY_TEST
}

class EnvironmentModifyingTest : public ::testing::Test
{
public:

    static void SetUpTestCase()
    {
        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());
    }

    static void TearDownTestCase()
    {
    }

    void SetUp()
    {
        SaveVariable("AWS_SHARED_CREDENTIALS_FILE");  
        SaveVariable("AWS_DEFAULT_PROFILE");
        SaveVariable("AWS_ACCESS_KEY_ID");
        SaveVariable("AWS_SECRET_ACCESS_KEY");
    }

    void TearDown()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first.c_str());
            }
            else
            {
                Aws::Environment::SetEnv(iter.first.c_str(), iter.second.c_str(), 1);
            }
        }
    }

    void SaveVariable(const char* variableName)
    {
        m_environment[ Aws::String( variableName ) ] = Aws::Environment::GetEnv(variableName);
    }

    Aws::Map<Aws::String, Aws::String> m_environment;
};

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVars)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";
  
    Aws::String oldValue = Aws::Environment::GetEnv("AWS_SHARED_CREDENTIALS_FILE");
    Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);
    Aws::String oldProfileValue = Aws::Environment::GetEnv("AWS_DEFAULT_PROFILE");
    const char* profile = "someProfile";
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", profile, 1);
    Aws::OFStream configFile(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[ someProfile]" << std::endl;
    configFile << " aws_access_key_id = SomeProfileAccessKey " << std::endl;
    configFile << "aws_secret_access_key =SomeProfileSecretKey" << std::endl;
    configFile << "aws_session_token=SomeProfileSessionToken " << std::endl;
    configFile << std::endl;

    configFile.flush();
    configFile.close();

    ProfileConfigFileAWSCredentialsProvider provider(10);
    EXPECT_STREQ("SomeProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SomeProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());

    AWS_END_MEMORY_TEST
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVarsButSpecifiedProfile)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";

    Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);
    const char* profile = "someProfile";
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", profile, 1);
    Aws::OFStream configFile(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << " [ someProfile]" << std::endl;
    configFile << " aws_access_key_id = SomeProfileAccessKey" << std::endl;
    configFile << "aws_secret_access_key=SomeProfileSecretKey " << std::endl;
    configFile << "aws_session_token= SomeProfileSessionToken" << std::endl;
    configFile << std::endl;
    configFile << "[customProfile]" << std::endl;
    configFile << "aws_access_key_id =customProfileAccessKey" << std::endl;
    configFile << "aws_secret_access_key=customProfileSecretKey " << std::endl;
    configFile << " aws_session_token=customProfileSessionToken" << std::endl;
    configFile << std::endl;

    configFile.flush();
    configFile.close();

    ProfileConfigFileAWSCredentialsProvider provider("customProfile", 10);
    EXPECT_STREQ("customProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("customProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());

    AWS_END_MEMORY_TEST
}


TEST_F(EnvironmentModifyingTest, ProfileConfigTestNotSetup)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename();
    Aws::String tempFileName = configFileName + "_tempNotSetup";

    Aws::FileSystem::RelocateFileOrDirectory(configFileName.c_str(), tempFileName.c_str());

    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
    Aws::Environment::UnSetEnv("AWS_SHARED_CREDENTIALS_FILE");

    ProfileConfigFileAWSCredentialsProvider provider;
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RelocateFileOrDirectory(tempFileName.c_str(), configFileName.c_str());

    AWS_END_MEMORY_TEST
}

TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesExist)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "Access Key", 1);
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "Secret Key", 1);
    Aws::Environment::SetEnv("AWS_SESSION_TOKEN", "Session Token", 1);

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("Access Key", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("Secret Key", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("Session Token", provider.GetAWSCredentials().GetSessionToken());

    AWS_END_MEMORY_TEST
}


TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesDoNotExist)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}



TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsGoodData)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}


TEST(InstanceProfileCredentialsProviderTest, TestThatProviderRefreshes)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* nextSetOfCredentials = "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\" }";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    ASSERT_EQ("betterAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("betterSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}

TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientCouldntFindCredentials)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);
    const char* emptyCredentials = "";
    mockClient->SetMockedCredentialsValue(emptyCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* missingInfo = "{ }";
    mockClient->SetMockedCredentialsValue(missingInfo);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}

TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsBadData)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}


