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

static const char* gWrongRoleCredentialsAccessKeyId = "wrong_access_key";
static const char* gWrongRoleCredentialsSecretKey = "wrong_secret_key";
static const char* gRoleCredentialsAccessKeyId = "role_credentials_access_key";
static const char* gRoleCredentialsSecretKey = "role_credentials_secret_key";


class CredentialsFileModifyingTest : public ::testing::Test
{
public:

    void SetUp()
    {
        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();

        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());

        m_tempFileName = CredentialsFilename() + "_tempMv";
        Aws::FileSystem::RelocateFileOrDirectory(CredentialsFilename().c_str(), m_tempFileName.c_str());
    }

    void TearDown()
    {
        Aws::FileSystem::RelocateFileOrDirectory(m_tempFileName.c_str(), CredentialsFilename().c_str());
    }

    Aws::String CredentialsFilename(void)
    {
        return ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename();
    }

    void WriteToTempConfig(const char* config)
    {
        Aws::OFStream configFile(CredentialsFilename().c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

        configFile << config;

        configFile.flush();
        configFile.close();
    }

    Aws::String m_tempFileName;
};

static const char* gConfig1 = R"CONFIG(
[Somebody Else ]
aws_access_key_id = SomebodyElseAccessId
something else to break the parser
#test comment
[default]
aws_access_key_id = DefaultAccessKey
aws_secret_access_key=DefaultSecretKey
aws_session_token=DefaultSessionToken

 [Somebody Else Again]
aws_secret_access_key = SomebodyElseAgainAccessId
 aws_secret_access_key=SomebodyElseAgainSecretKey
aws_session_token=SomebodyElseAgainSessionToken
)CONFIG";

TEST_F(CredentialsFileModifyingTest, TestDefaultConfig)
{
    struct ReloadableProfileConfigProvider : ProfileConfigFileAWSCredentialsProvider
    {
        void ReloadNow()
        {
            Reload();
        }
    };

    WriteToTempConfig(gConfig1);
    ReloadableProfileConfigProvider provider;
    EXPECT_STREQ("DefaultAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(CredentialsFilename().c_str());
    provider.ReloadNow();

    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());
}

/**
 * This test implementation gets injected into core to mock STS functionality
 */
class MockRoleCredentialsSupplier : public Aws::Auth::IRoleCredentialsSupplier
{
public:
    Aws::Auth::AWSCredentials GetRoleCredentials(const Aws::Auth::AWSCredentials& sourceCredentials,
                                                 const Aws::String& roleArn) override
    {
        Aws::Auth::AWSCredentials credentials;

        if(sourceCredentials.GetAWSAccessKeyId().compare("SomebodyElseAccessId")
           || sourceCredentials.GetAWSSecretKey().compare("SomebodyElseSecretKey")
           || roleArn.compare("arn:aws:iam::123456789:role/foo"))
        {
            credentials.SetAWSAccessKeyId(gWrongRoleCredentialsAccessKeyId);
            credentials.SetAWSSecretKey(gWrongRoleCredentialsSecretKey);
        }
        else
        {
            credentials.SetAWSAccessKeyId(gRoleCredentialsAccessKeyId);
            credentials.SetAWSSecretKey(gRoleCredentialsSecretKey);
        }

        return credentials;
    }
};

static const char* gConfig2 = R"CONFIG(
[Somebody Else ]
aws_access_key_id = SomebodyElseAccessId
aws_secret_access_key = SomebodyElseSecretKey

[default]
role_arn = arn:aws:iam::123456789:role/foo
source_profile = Somebody Else

 [Somebody Else Again]
aws_secret_access_key = SomebodyElseAgainAccessId
 aws_secret_access_key=SomebodyElseAgainSecretKey
aws_session_token=SomebodyElseAgainSessionToken
)CONFIG";

TEST_F(CredentialsFileModifyingTest, TestRoleCredentials)
{
    auto supplier = Aws::MakeShared<MockRoleCredentialsSupplier>(AllocationTag);
    Aws::Auth::ProfileConfigFileAWSCredentialsProvider::SetRoleCredentialsSupplier(supplier);

    WriteToTempConfig(gConfig2);

    ProfileConfigFileAWSCredentialsProvider provider;
    EXPECT_STREQ(gRoleCredentialsAccessKeyId, provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ(gRoleCredentialsSecretKey, provider.GetAWSCredentials().GetAWSSecretKey().c_str());
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
        SaveVariable("AWS_PROFILE");
        SaveVariable("AWS_ACCESS_KEY_ID");
        SaveVariable("AWS_SECRET_ACCESS_KEY");
        SaveVariable("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI");
        SaveVariable("AWS_EC2_METADATA_DISABLED");
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

TEST_F(EnvironmentModifyingTest, TestOrderOfAwsDefaultProfileAndAwsProfile)
{
    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";
    Aws::OFStream configFile(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);


    configFile << "[default_profile]" << std::endl;
    configFile << " aws_access_key_id = DefaultProfileAccessKey " << std::endl;
    configFile << "aws_secret_access_key= DefaultProfileSecretKey" << std::endl;
    configFile << std::endl;

    configFile << "[default]" << std::endl;
    configFile << " aws_access_key_id = DefaultAccessKey " << std::endl;
    configFile << "aws_secret_access_key= DefaultSecretKey" << std::endl;
    configFile << std::endl;

    configFile << "[profile]" << std::endl;
    configFile << " aws_access_key_id = ProfileAccessKey " << std::endl;
    configFile << "aws_secret_access_key =ProfileSecretKey" << std::endl;
    configFile << std::endl;

    configFile.flush();
    configFile.close();

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

    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVars)
{
    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() + "_blah";
  
    Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);
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
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVarsButSpecifiedProfile)
{
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
}


TEST_F(EnvironmentModifyingTest, ProfileConfigTestNotSetup)
{
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
