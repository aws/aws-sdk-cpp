/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identity-management/auth/STSProfileCredentialsProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/FileSystem.h>
#include <gtest/gtest.h>

#include <fstream>
#include <cassert>
#include <thread>
using namespace Aws::Auth;
using namespace Aws::STS;
using namespace Aws::Utils;

namespace {

class MockSTSClient : public STSClient
{
public:
    MockSTSClient() = default;
    explicit MockSTSClient(const AWSCredentials& creds) : STSClient(creds), m_credentials(creds)
    {
    }

    Model::AssumeRoleOutcome AssumeRole(const Model::AssumeRoleRequest& request) const override
    {
        m_capturedRequest = request;
        return m_mockedOutcome;
    }

    void MockAssumeRole(const Model::AssumeRoleOutcome& outcome)
    {
        m_mockedOutcome = outcome;
    }

    const Model::AssumeRoleRequest& CapturedRequest() const
    {
        return m_capturedRequest;
    }

    const AWSCredentials& Credentials() const
    {
        return m_credentials;
    }

private:
    mutable Model::AssumeRoleRequest m_capturedRequest;
    Model::AssumeRoleOutcome m_mockedOutcome;
    AWSCredentials m_credentials;
};

const char CLASS_TAG[]                  = "STSProfileCredentialsProvider";
const char ROLE_ARN_1[]                 = "arn:aws:iam::123456789:role/SomeRole";
const char ROLE_ARN_2[]                 = "arn:aws:iam::123456789:role/AnotherRole";
const char ACCESS_KEY_ID_1[]            = "accessKeyId1";
const char SECRET_ACCESS_KEY_ID_1[]     = "secretAccessKeyId1";
const char SESSION_TOKEN[]              = "sessionToken123";
const char ACCESS_KEY_ID_2[]            = "accessKeyId2";
const char SECRET_ACCESS_KEY_ID_2[]     = "secretAccessKeyId2";
const char ACCESS_KEY_ID_3[]            = "accessKeyId3";
const char SECRET_ACCESS_KEY_ID_3[]     = "secretAccessKeyId3";

class STSProfileCredentialsProviderTest : public ::testing::Test
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");

        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());

        Aws::StringStream ss;
        ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFilename = ss.str();

        SaveEnvironmentVariable("AWS_CONFIG");
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFilename.c_str(), 1);
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environmentVars.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environmentVars)
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

    Aws::String m_configFilename;
    Aws::Vector<std::pair<const char*, Aws::String>> m_environmentVars;
};

TEST_F(STSProfileCredentialsProviderTest, TestCredentialsLoadAndCache)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "source_profile = other" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile << " [profile other]" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);
    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;
    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [&](const AWSCredentials& creds)
        {
            ++stsCallCounter;
            stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
            stsClient->MockAssumeRole(mockResult);
            return stsClient.get();
        });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_STREQ(ACCESS_KEY_ID_2, actualCredentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_2, actualCredentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN, actualCredentials.GetSessionToken().c_str());
    ASSERT_EQ(expiryTime, actualCredentials.GetExpiration());

    ASSERT_EQ(1, stsCallCounter);
    ASSERT_TRUE(stsClient);
    ASSERT_STREQ(ACCESS_KEY_ID_1, stsClient->Credentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_1, stsClient->Credentials().GetAWSSecretKey().c_str());

    actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_STREQ(ACCESS_KEY_ID_2, actualCredentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_2, actualCredentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN, actualCredentials.GetSessionToken().c_str());
    ASSERT_EQ(expiryTime, actualCredentials.GetExpiration());
    //we should not have called multiple times.
    ASSERT_EQ(1, stsCallCounter);
}

static Aws::String WrapEchoStringWithSingleQuoteForUnixShell(Aws::String str)
{
#ifndef _WIN32
    str.insert(0, 1, '\'');
    str.append(1, '\'');
#endif
    return str;
}

/**
 * Test a initial profile with static credentials and source profile.
 * Expected: use the source profile
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithStaticAndSourceProfile)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << "source_profile = B" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile << std::endl;
    configFile << " [profile B]" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_2 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_2 << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_3)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_3)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);

    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;
    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [&](const AWSCredentials& creds)
        {
            if (++stsCallCounter == 1)
            {
                EXPECT_STREQ(ACCESS_KEY_ID_2, creds.GetAWSAccessKeyId().c_str());
                EXPECT_STREQ(SECRET_ACCESS_KEY_ID_2, creds.GetAWSSecretKey().c_str());
            }
            stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
            stsClient->MockAssumeRole(mockResult);
            return stsClient.get();
        });

    const auto actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_EQ(1, stsCallCounter);

    ASSERT_FALSE(actualCredentials.IsExpiredOrEmpty());
    ASSERT_STREQ(ACCESS_KEY_ID_3, actualCredentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_3, actualCredentials.GetAWSSecretKey().c_str());
    ASSERT_EQ(expiryTime, actualCredentials.GetExpiration());
}

/**
 * Test that having a source profile works (happy path), with the source profile using a process to retrieve credentials.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithProcessCredentials)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "source_profile = other" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile << " [profile other]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey123\", \"SecretAccessKey\": \"SecretKey321\", \"Expiration\": \"1970-01-01T00:00:01Z\"}") << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);

    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;
    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [&](const AWSCredentials& creds)
        {
            ++stsCallCounter;
            stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
            stsClient->MockAssumeRole(mockResult);
            return stsClient.get();
        });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_STREQ(ACCESS_KEY_ID_2, actualCredentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_2, actualCredentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN, actualCredentials.GetSessionToken().c_str());
    ASSERT_EQ(expiryTime, actualCredentials.GetExpiration());

    ASSERT_EQ(1, stsCallCounter);
    ASSERT_TRUE(stsClient);
    ASSERT_STREQ("AccessKey123", stsClient->Credentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("SecretKey321", stsClient->Credentials().GetAWSSecretKey().c_str());
}

/**
 * Test a profile without a Role to assume but yet it has a source profile.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithoutRoleARN)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "source_profile = other" << std::endl;
    configFile << std::endl;
    configFile << " [profile other]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey123\", \"SecretAccessKey\": \"SecretKey321\", \"Expiration\": \"1970-01-01T00:00:01Z\"}") << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);

    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [](const AWSCredentials&) {
            ADD_FAILURE() << "STS Service client should not be used in this scenario.";
            return nullptr;
    });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_TRUE(actualCredentials.IsExpiredOrEmpty());
}

/**
 * Test a source profile without a Role to assume.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithoutRoleARNInSourceProfile)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};
    configFile.open(m_configFilename.c_str());
    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << "source_profile = second" << std::endl;
    configFile << std::endl;
    configFile << " [second]" << std::endl;
    configFile << "source_profile = third" << std::endl;
    configFile << " [third]" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);

    Aws::UniquePtr<MockSTSClient> stsClient;

    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [&](const AWSCredentials& creds) {
            stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
            stsClient->MockAssumeRole(mockResult);
            return stsClient.get();
    });

    auto actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_TRUE(actualCredentials.IsExpiredOrEmpty());
}

/**
 * Test a profile with a Role to assume, but yet has no source profile.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithoutSourceProfile)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);

    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [](const AWSCredentials&) {
            ADD_FAILURE() << "STS Service client should not be used in this scenario.";
            return nullptr;
    });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_TRUE(actualCredentials.IsExpiredOrEmpty());
}

TEST_F(STSProfileCredentialsProviderTest, AssumeRoleWithNonExistentSourceProfile)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};
    configFile << std::endl;
    configFile << "[default]" << std::endl;
    configFile << "source_profile = DoesNotExist" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile << " [YouCannotFindMe]" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);

    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [](const AWSCredentials&) {
            ADD_FAILURE() << "STS Service client should not be used in this scenario.";
            return nullptr;
    });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_TRUE(actualCredentials.IsExpiredOrEmpty());
}

/**
 * Test that source profiles can be chained.
 * The following scenario should succeed:
 * Profile A sources Profile B
 * Profile B sources Profile C
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleRecursively)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[profile A]" << std::endl;
    configFile << "source_profile = B" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile << "[profile B]" << std::endl;
    configFile << "source_profile = C" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_2 << std::endl;
    configFile << std::endl;
    configFile << " [profile C]" << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);
    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;

    STSProfileCredentialsProvider credsProvider("A", roleSessionDuration, [&](const AWSCredentials& creds)
            {
                if (++stsCallCounter == 1)
                {
                    EXPECT_STREQ(ACCESS_KEY_ID_1, creds.GetAWSAccessKeyId().c_str());
                    EXPECT_STREQ(SECRET_ACCESS_KEY_ID_1, creds.GetAWSSecretKey().c_str());
                }
                else if (stsCallCounter == 2)
                {
                    EXPECT_STREQ(ACCESS_KEY_ID_2, creds.GetAWSAccessKeyId().c_str());
                    EXPECT_STREQ(SECRET_ACCESS_KEY_ID_2, creds.GetAWSSecretKey().c_str());
                }
                stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
                stsClient->MockAssumeRole(mockResult);
                return stsClient.get();
            });

    const auto actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_FALSE(actualCredentials.IsExpiredOrEmpty());
    ASSERT_NE(nullptr, stsClient);
    ASSERT_EQ(2, stsCallCounter);
}

/**
 * Test that profile that sources itself.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleSelfReferencing)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[profile A]" << std::endl;
    configFile << "source_profile = A" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);
    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;

    STSProfileCredentialsProvider credsProvider("A", roleSessionDuration, [&](const AWSCredentials& creds)
            {
                ++stsCallCounter;
                EXPECT_STREQ(ACCESS_KEY_ID_1, creds.GetAWSAccessKeyId().c_str());
                EXPECT_STREQ(SECRET_ACCESS_KEY_ID_1, creds.GetAWSSecretKey().c_str());
                stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
                stsClient->MockAssumeRole(mockResult);
                return stsClient.get();
            });

    auto actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_FALSE(actualCredentials.IsExpiredOrEmpty());
    ASSERT_EQ(1, stsCallCounter);
    ASSERT_NE(nullptr, stsClient); // if this fails, that means the sts call never happened.
}

TEST_F(STSProfileCredentialsProviderTest, AssumeRoleSelfReferencingSourceProfile)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[profile A]" << std::endl;
    configFile << "source_profile = B" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << "[profile B]" << std::endl;
    configFile << "source_profile = B" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_2 << std::endl;
    configFile << "aws_access_key_id = " << ACCESS_KEY_ID_1 << std::endl;
    configFile << "aws_secret_access_key = " << SECRET_ACCESS_KEY_ID_1 << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);
    const DateTime expiryTime{DateTime::Now() + roleSessionDuration};

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult mockResult;
    mockResult.SetCredentials(stsCredentials);
    Aws::UniquePtr<MockSTSClient> stsClient;

    int stsCallCounter = 0;

    STSProfileCredentialsProvider credsProvider("A", roleSessionDuration, [&](const AWSCredentials& creds)
            {
                if (++stsCallCounter == 1)
                {
                    EXPECT_STREQ(ACCESS_KEY_ID_1, creds.GetAWSAccessKeyId().c_str());
                    EXPECT_STREQ(SECRET_ACCESS_KEY_ID_1, creds.GetAWSSecretKey().c_str());
                }
                else if (stsCallCounter == 2)
                {
                    EXPECT_STREQ(ACCESS_KEY_ID_2, creds.GetAWSAccessKeyId().c_str());
                    EXPECT_STREQ(SECRET_ACCESS_KEY_ID_2, creds.GetAWSSecretKey().c_str());
                }
                stsClient = Aws::MakeUnique<MockSTSClient>(CLASS_TAG, creds);
                stsClient->MockAssumeRole(mockResult);
                return stsClient.get();
            });

    auto actualCredentials = credsProvider.GetAWSCredentials();
    ASSERT_FALSE(actualCredentials.IsExpiredOrEmpty());
    ASSERT_EQ(2, stsCallCounter);
    ASSERT_NE(nullptr, stsClient); // if this fails, then the sts call never happened.
}

/**
 * Test that profiles with circular-references fail.
 * The following scenario should fail and returns invalid/empty credentials
 * Profile A sources Profile B.
 * Profile B sources Profile C.
 * Profile C sources Profile A.
 */
TEST_F(STSProfileCredentialsProviderTest, AssumeRoleRecursivelyCircularReference)
{
    Aws::OFStream configFile {m_configFilename.c_str(), Aws::OFStream::out | Aws::OFStream::trunc};

    configFile << std::endl;
    configFile << "[A]" << std::endl;
    configFile << "source_profile = B" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_1 << std::endl;
    configFile << std::endl;
    configFile << "[B]" << std::endl;
    configFile << "source_profile = C" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_2 << std::endl;
    configFile << std::endl;
    configFile << "[C]" << std::endl;
    configFile << "source_profile = A" << std::endl;
    configFile << "role_arn = " << ROLE_ARN_2 << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    constexpr auto roleSessionDuration = std::chrono::hours(1);

    STSProfileCredentialsProvider credsProvider("default", roleSessionDuration, [](const AWSCredentials&) {
            ADD_FAILURE() << "STS Service client should not be used in this scenario.";
            return nullptr;
    });

    auto actualCredentials = credsProvider.GetAWSCredentials();

    ASSERT_TRUE(actualCredentials.IsExpiredOrEmpty());
}
} // namespace
