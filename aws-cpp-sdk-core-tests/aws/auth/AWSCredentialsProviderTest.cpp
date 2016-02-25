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
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/FileSystemUtils.h>

#include <stdlib.h>
#include <thread>
#include <fstream>

#ifndef _WIN32
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <errno.h>

    Aws::String GetEnv(const char *variableName)
    {
        char* envValue = std::getenv(variableName);
        if(envValue)
        {
            return Aws::String(envValue);
        }

        return "";
    }

#else
    #include <Windows.h>

    void setenv(const char* name, const char* value, unsigned overwrite)
    {
        AWS_UNREFERENCED_PARAM(overwrite);
        Aws::StringStream ss;
        ss << name << "=" << value;
        _putenv(ss.str().c_str());
    }

    void unsetenv(const char* name)
    {
        setenv(name, "", 1);
    }

    /*
    using std::getenv generates a warning on windows so we use _dupenv_s instead.  The character array returned by this function is our responsibility to clean up, so rather than returning raw strings
    that would need to be manually freed in all the client functions, just copy it into a Aws::String instead, freeing it here.
    */
    Aws::String GetEnv(const char *variableName)
    {
        char* variableValue = nullptr;
        std::size_t valueSize = 0;
        auto queryResult = _dupenv_s(&variableValue, &valueSize, variableName);

        Aws::String result;
        if(queryResult == 0 && variableValue != nullptr && valueSize > 0)
        {
            result.assign(variableValue, valueSize - 1);  // don't copy the c-string terminator byte
            free(variableValue);
        }

        return result;
    }
 

#endif // _WIN32

static const char *AllocationTag = "AWSCredentialsProviderTest";

using namespace Aws::Auth;
using namespace Aws::Utils;

#ifndef __ANDROID__

TEST(ProfileConfigFileAWSCredentialsProviderTest, TestDefaultConfig)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    FileSystemUtils::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetProfileFilename();
    Aws::String tempFileName = configFileName + "_tempMv";

    FileSystemUtils::RelocateFileOrDirectory(configFileName.c_str(), tempFileName.c_str());

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

    FileSystemUtils::RemoveFileIfExists(configFileName.c_str());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    FileSystemUtils::RelocateFileOrDirectory(tempFileName.c_str(), configFileName.c_str());

    AWS_END_MEMORY_TEST
}


TEST(ProfileConfigFileAWSCredentialsProviderTest, TestWithEnvVars)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    FileSystemUtils::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetProfileFilename() + "_blah";
  
    Aws::String oldValue = GetEnv("AWS_SHARED_CREDENTIALS_FILE");
    setenv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);
    Aws::String oldProfileValue = GetEnv("AWS_DEFAULT_PROFILE");
    const char* profile = "someProfile";
    setenv("AWS_DEFAULT_PROFILE", profile, 1);
    Aws::OFStream configFile(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[ someProfile]" << std::endl;
    configFile << " aws_access_key_id = SomeProfileAccessKey " << std::endl;
    configFile << "aws_secret_access_key =SomeProfileSecretKey" << std::endl;
    configFile << "aws_session_token=SomeProfileSessionToken " << std::endl;
    configFile << std::endl;

    configFile.flush();
    configFile.close();

    ProfileConfigFileAWSCredentialsProvider provider(10);
    if (!oldValue.empty())
        setenv("AWS_SHARED_CREDENTIALS_FILE", oldValue.c_str(), 1);
    else
        unsetenv("AWS_SHARED_CREDENTIALS_FILE");

    if (!oldProfileValue.empty())
        setenv("AWS_DEFAULT_PROFILE", oldProfileValue.c_str(), 1);
    else
        unsetenv("AWS_DEFAULT_PROFILE");

    ASSERT_STREQ("SomeProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("SomeProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    AWS_END_MEMORY_TEST
}

TEST(ProfileConfigFileAWSCredentialsProviderTest, TestWithEnvVarsButSpecifiedProfile)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    FileSystemUtils::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());

    Aws::String configFileName = ProfileConfigFileAWSCredentialsProvider::GetProfileFilename() + "_blah";

    Aws::String oldValue = GetEnv("AWS_SHARED_CREDENTIALS_FILE");
    setenv("AWS_SHARED_CREDENTIALS_FILE", configFileName.c_str(), 1);
    Aws::String oldProfileValue = GetEnv("AWS_DEFAULT_PROFILE");
    const char* profile = "someProfile";
    setenv("AWS_DEFAULT_PROFILE", profile, 1);
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

    if (!oldValue.empty())
        setenv("AWS_SHARED_CREDENTIALS_FILE", oldValue.c_str(), 1);

    if (!oldProfileValue.empty())
        setenv("AWS_DEFAULT_PROFILE", oldProfileValue.c_str(), 1);

    ASSERT_STREQ("customProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("customProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    AWS_END_MEMORY_TEST
}


TEST(ProfileConfigFileAWSCredentialsProviderTest, TestNotSetup)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    Aws::String oldProfileFile = GetEnv("AWS_SHARED_CREDENTIALS_FILE");  
    Aws::String oldProfileValue = GetEnv("AWS_DEFAULT_PROFILE");
    Aws::String oldAWSAccessKeyValue = GetEnv("AWS_ACCESS_KEY_ID");
    Aws::String oldSecretKeyValue = GetEnv("AWS_SECRET_ACCESS_KEY");

    unsetenv("AWS_ACCESS_KEY_ID");
    unsetenv("AWS_SECRET_ACCESS_KEY");
    unsetenv("AWS_SHARED_CREDENTIALS_FILE");

    ProfileConfigFileAWSCredentialsProvider provider;
    if (!oldProfileFile.empty())
        setenv("AWS_SHARED_CREDENTIALS_FILE", oldProfileFile.c_str(), 1);
    if (!oldProfileValue.empty())
        setenv("AWS_DEFAULT_PROFILE", oldProfileValue.c_str(), 1);
    if (!oldAWSAccessKeyValue.empty())
        setenv("AWS_ACCESS_KEY_ID", oldAWSAccessKeyValue.c_str(), 1);
    if (!oldSecretKeyValue.empty())
        setenv("AWS_SECRET_ACCESS_KEY", oldSecretKeyValue.c_str(), 1);

    ASSERT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    AWS_END_MEMORY_TEST
}

#endif // __ANDROID__


TEST(EnvironmentAWSCredentialsProviderTest, TestEnvironmentVariablesExist)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    setenv("AWS_ACCESS_KEY_ID", "Access Key", 1);
    setenv("AWS_SECRET_ACCESS_KEY", "Secret Key", 1);
    setenv("AWS_SESSION_TOKEN", "Session Token", 1);

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("Access Key", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("Secret Key", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("Session Token", provider.GetAWSCredentials().GetSessionToken());

    AWS_END_MEMORY_TEST
}


TEST(EnvironmentAWSCredentialsProviderTest, TestEnvironmentVariablesDoNotExist)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)

    unsetenv("AWS_ACCESS_KEY_ID");
    unsetenv("AWS_SECRET_ACCESS_KEY");

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

    InstanceProfileCredentialsProvider provider(mockClient, 1000 * 60 * 15);
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

    InstanceProfileCredentialsProvider provider(mockClient, 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* nextSetOfCredentials = "{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\" }";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

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

    InstanceProfileCredentialsProvider provider(mockClient, 1000 * 60 * 15);
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

    InstanceProfileCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    AWS_END_MEMORY_TEST
}


