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

#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <stdlib.h>
#include <thread>
#include <fstream>

static const char *AllocationTag = "AWSCredentialsProviderTest";

using namespace Aws::Auth;
using namespace Aws::Utils;

class ProfileConfigFileAWSCredentialsProviderTest : public ::testing::Test
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_SHARED_CREDENTIALS_FILE");  
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");

        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());
        m_credsFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";

        Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", m_credsFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_credsFileName;
};

TEST_F(ProfileConfigFileAWSCredentialsProviderTest, TestDefaultConfig)
{
    struct ReloadableProfileConfigProvider : ProfileConfigFileAWSCredentialsProvider
    {
        void ReloadNow() 
        {
            Reload();
        }
    };

    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << std::endl;
    credsFile << "[Somebody Else ]" << std::endl;
    credsFile << "aws_access_key_id = SomebodyElseAccessId" << std::endl;
    credsFile << "something else to break the parser" << std::endl;
    credsFile << "#test comment" << std::endl;
    credsFile << "[default]" << std::endl;
    credsFile << "aws_access_key_id = DefaultAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=DefaultSecretKey " << std::endl;
    credsFile << "aws_session_token=DefaultSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile << " [Somebody Else Again]" << std::endl;
    credsFile << "aws_secret_access_key = SomebodyElseAgainAccessId" << std::endl;
    credsFile << " aws_secret_access_key=SomebodyElseAgainSecretKey" << std::endl;
    credsFile << "aws_session_token=SomebodyElseAgainSessionToken" << std::endl;
    credsFile.close();

    ReloadableProfileConfigProvider provider;
    EXPECT_STREQ("DefaultAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
    provider.ReloadNow();
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());
}

class EnvironmentModifyingTest : public ::testing::Test
{
public:

    void SetUp()
    {
        SaveEnvironmentVariable("AWS_SHARED_CREDENTIALS_FILE");  
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_ACCESS_KEY_ID");
        SaveEnvironmentVariable("AWS_SECRET_ACCESS_KEY");
        SaveEnvironmentVariable("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI");
        SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");

        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());
        m_credsFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";
        Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", m_credsFileName.c_str(), 1);

    }

    void TearDown()
    {
        RestoreEnvironmentVariable();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariable()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_credsFileName;
};

TEST_F(EnvironmentModifyingTest, TestOrderOfAwsDefaultProfileAndAwsProfile)
{
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << "[default_profile]" << std::endl;
    credsFile << " aws_access_key_id = DefaultProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key= DefaultProfileSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile << "[default]" << std::endl;
    credsFile << " aws_access_key_id = DefaultAccessKey " << std::endl;
    credsFile << "aws_secret_access_key= DefaultSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile << "[profile]" << std::endl;
    credsFile << " aws_access_key_id = ProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key =ProfileSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile.close();

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "default_profile", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "profile", 1/*override*/);

    ProfileConfigFileAWSCredentialsProvider providerDefaultProfile(10);
    EXPECT_STREQ("DefaultProfileAccessKey", providerDefaultProfile.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultProfileSecretKey", providerDefaultProfile.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "profile", 1/*override*/);
    ProfileConfigFileAWSCredentialsProvider providerProfile(10);
    EXPECT_STREQ("ProfileAccessKey", providerProfile.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("ProfileSecretKey", providerProfile.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "", 1/*override*/);
    ProfileConfigFileAWSCredentialsProvider providerDefault(10);
    EXPECT_STREQ("DefaultAccessKey", providerDefault.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", providerDefault.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVars)
{
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "someProfile", 1);
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << "[ someProfile]" << std::endl;
    credsFile << " aws_access_key_id = SomeProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key =SomeProfileSecretKey" << std::endl;
    credsFile << "aws_session_token=SomeProfileSessionToken " << std::endl;
    credsFile << std::endl;
    credsFile.close();

    ProfileConfigFileAWSCredentialsProvider provider(10);
    EXPECT_STREQ("SomeProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SomeProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVarsButSpecifiedProfile)
{
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "someProfile", 1);
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << " [ someProfile]" << std::endl;
    credsFile << " aws_access_key_id = SomeProfileAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=SomeProfileSecretKey " << std::endl;
    credsFile << "aws_session_token= SomeProfileSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile << "[customProfile]" << std::endl;
    credsFile << "aws_access_key_id =customProfileAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=customProfileSecretKey " << std::endl;
    credsFile << " aws_session_token=customProfileSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile.close();

    ProfileConfigFileAWSCredentialsProvider provider("customProfile", 10);
    EXPECT_STREQ("customProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("customProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestNotSetup)
{
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
    Aws::Environment::UnSetEnv("AWS_SHARED_CREDENTIALS_FILE");
    //On windows we don't redirect the home directory
    //This is to prevent when user actually sets .aws/credentials with Keys, this test would fail.
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "SomeUnknownProfileThatDoesNotExist", 1);

    ProfileConfigFileAWSCredentialsProvider provider;
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());
}

TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesExist)
{
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "Access Key", 1);
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "Secret Key", 1);
    Aws::Environment::SetEnv("AWS_SESSION_TOKEN", "Session Token", 1);

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("Access Key", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("Secret Key", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("Session Token", provider.GetAWSCredentials().GetSessionToken());    
}

TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesDoNotExist)
{
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(EnvironmentModifyingTest, TestProvidersNumberInCredentialsProvidersChain)
{
    Aws::Environment::UnSetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI");
    Aws::Environment::UnSetEnv("AWS_EC2_METADATA_DISABLED");

    DefaultAWSCredentialsProviderChain providersChainWith3ProvidersEC2;
    ASSERT_EQ(3u, providersChainWith3ProvidersEC2.GetProviders().size()); //With EC2 instance metadata, without ECS task role.

    Aws::Environment::SetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI", "TestVar", 1);
    DefaultAWSCredentialsProviderChain providersChainWith3ProvidersECS;
    ASSERT_EQ(3u, providersChainWith3ProvidersECS.GetProviders().size()); //With ECS task role, without ec2

    Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "TruE", 1);
    Aws::Environment::UnSetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI"); //Without ECS task role, without ec2
    DefaultAWSCredentialsProviderChain providersChainWith2Providers;
    ASSERT_EQ(2u, providersChainWith2Providers.GetProviders().size());
}


TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsGoodData)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());    
}


TEST(InstanceProfileCredentialsProviderTest, TestThatProviderRefreshes)
{
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
}

TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientCouldntFindCredentials)
{
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
}

TEST(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsBadData)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}


TEST(TaskRoleCredentialsProviderTest, TestECSCredentialsClientReturnsGoodData)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("goodToken", provider.GetAWSCredentials().GetSessionToken());
}


TEST(TaskRoleCredentialsProviderTest, TestThatProviderRefreshes)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

    Aws::String goodCredentialsPrefix("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": ");
    Aws::String betterCredentialsPrefix("{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": ");
    DateTime now = DateTime::Now();
    Aws::String dateStringNow = now.ToGmtString(DateFormat::ISO_8601);

    DateTime after = now.Millis() + 1000;
    Aws::String dateStringAfter = after.ToGmtString(DateFormat::ISO_8601);

    // Set the current credentials expiration date to now, which expires immediately.
    // Next time when calling GetAWSCredentials, the credentials will be refreshed.
    Aws::StringStream validCredentials;
    validCredentials << goodCredentialsPrefix << "\"" << dateStringNow << "\" }";

    mockClient->SetMockedCredentialsValue(validCredentials.str());

    TaskRoleCredentialsProvider provider(mockClient, 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
    
    Aws::StringStream nextSetOfCredentials;
    nextSetOfCredentials << betterCredentialsPrefix << "\"" << dateStringAfter << "\" }";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials.str());

    ASSERT_EQ("betterAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("betterSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST(TaskRoleCredentialsProviderTest, TestThatProviderDontRefresh)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

    Aws::String goodCredentialsPrefix("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": ");
    DateTime after = DateTime::Now().Millis() + 60 * 1000;
    Aws::String dateStringAfter = after.ToGmtString(DateFormat::ISO_8601);

    // Set the credentials expiration date to 60 seconds from now on.
    Aws::StringStream validCredentials;
    validCredentials << goodCredentialsPrefix << "\"" << dateStringAfter << "\" }";

    mockClient->SetMockedCredentialsValue(validCredentials.str());

    // Set the refresh frequency to 0s, immediately trying refresh each time GetAWSCredentials() get called.
    // If the credential has not expired, it will not be refreshed.
    TaskRoleCredentialsProvider provider(mockClient, 0);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
    
    // After sleeping for 3 seconds, the credentials will not be refreshed.
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST(TaskRoleCredentialsProviderTest, TestECSCrendentialsClientCouldntFindCredentials)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");
    const char* emptyCredentials = "";
    mockClient->SetMockedCredentialsValue(emptyCredentials);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* missingInfo = "{ }";
    mockClient->SetMockedCredentialsValue(missingInfo);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());    
}

TEST(TaskRoleCredentialsProviderTest, TestECSCredentialsClientReturnsBadData)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

static Aws::String WrapEchoStringWithSingleQuoteForUnixShell(Aws::String str)
{
#ifndef _WIN32
    str.insert(0, 1, '\'');
    str.append(1, '\'');
#endif
    return str;
}

class ProcessCredentialsProviderTest : public ::testing::Test
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");

        m_configFileName = Aws::Auth::GetConfigProfileFilename() + "_blah";
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");

        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_configFileName;
};

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderExpiredThenRefreshed)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey123\", \"SecretAccessKey\": \"SecretKey321\", \"Expiration\": \"1970-01-01T00:00:01Z\"}") << std::endl;
    configFile.close();

    ProcessCredentialsProvider provider;
    Aws::Auth::AWSCredentials credsOne = provider.GetAWSCredentials();
    EXPECT_TRUE(credsOne.IsEmpty());

    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey321\", \"SecretAccessKey\": \"SecretKey123\"}") << std::endl;
    configFileNew.close();

    Aws::Auth::AWSCredentials credsTwo = provider.GetAWSCredentials();
    EXPECT_NE(credsOne, credsTwo);
    EXPECT_FALSE(credsTwo.IsEmpty());
    EXPECT_STREQ("AccessKey321", credsTwo.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey123", credsTwo.GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderNonSupportedVersion)
{
    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 2, \"AccessKeyId\": \"AccessKey321\", \"SecretAccessKey\": \"SecretKey123\"}") << std::endl;
    configFileNew.close();
    
    ProcessCredentialsProvider provider;
    EXPECT_TRUE(provider.GetAWSCredentials().IsEmpty());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderDoNotRefresh)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey456\", \"SecretAccessKey\": \"SecretKey654\"}") << std::endl;
    configFile.close();

    ProcessCredentialsProvider provider;
    Aws::Auth::AWSCredentials credsOne = provider.GetAWSCredentials();
    EXPECT_STREQ("AccessKey456", credsOne.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey654", credsOne.GetAWSSecretKey().c_str());

    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey789\", \"SecretAccessKey\": \"SecretKey987\"}") << std::endl;
    configFileNew.close();

    Aws::Auth::AWSCredentials credsTwo = provider.GetAWSCredentials();
    EXPECT_EQ(credsOne, credsTwo);
    EXPECT_FALSE(credsTwo.IsEmpty());
    EXPECT_STREQ("AccessKey456", credsTwo.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey654", credsTwo.GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderCaptureInvalidOutput)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo 'Error: Failed to retrieve credentials'" << std::endl;
    configFile << std::endl;
    configFile.close();

    ProcessCredentialsProvider provider;
    EXPECT_TRUE(provider.GetAWSCredentials().IsEmpty());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}
