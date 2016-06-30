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


#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/FileSystemUtils.h>

#include <cstdlib>
#include <fstream>
#include <string.h>

#ifdef _WIN32
    //Windows likes to complain about std::getenv, we are using it in a secure context and the string we are returning is not being
    //fed to any other processes.
    #pragma warning( disable : 4996)
#endif


using namespace Aws::Utils;
using namespace Aws::Utils::Logging;
using namespace Aws::Auth;
using namespace Aws::Internal;


static const char* ACCESS_KEY_ENV_VARIABLE = "AWS_ACCESS_KEY_ID";
static const char* SECRET_KEY_ENV_VAR = "AWS_SECRET_ACCESS_KEY";
static const char* SESSION_TOKEN_ENV_VARIABLE = "AWS_SESSION_TOKEN";
static const char* DEFAULT_PROFILE = "default";
static const char* AWS_PROFILE_ENVIRONMENT_VARIABLE = "AWS_DEFAULT_PROFILE";

static const char* AWS_CREDENTIAL_PROFILES_FILE = "AWS_SHARED_CREDENTIALS_FILE";

static const char* PROFILE_DEFAULT_FILENAME = "credentials";
static const char* CONFIG_FILENAME = "config";

#ifndef _WIN32
static const char* PROFILE_DIRECTORY = "/.aws";
static const char* DIRECTORY_JOIN = "/";

#else
    static const char* PROFILE_DIRECTORY = "\\.aws";
    static const char* DIRECTORY_JOIN = "\\";
#endif // _WIN32


bool AWSCredentialsProvider::IsTimeToRefresh(long reloadFrequency)
{
    if (DateTime::Now().Millis() - m_lastLoadedMs > reloadFrequency)
    {
        m_lastLoadedMs = DateTime::Now().Millis();
        return true;
    }

    return false;
}


static const char* environmentLogTag = "EnvironmentAWSCredentialsProvider";


AWSCredentials EnvironmentAWSCredentialsProvider::GetAWSCredentials()
{
    char* accessKey = std::getenv(ACCESS_KEY_ENV_VARIABLE);
    AWSCredentials credentials("", "", "");

    if (accessKey != nullptr)
    {
        credentials.SetAWSAccessKeyId(accessKey);

        AWS_LOGSTREAM_INFO(environmentLogTag, "Found credential in environment with access key id " << accessKey);
        char* secretKey = std::getenv(SECRET_KEY_ENV_VAR);

        if (secretKey)
        {
            credentials.SetAWSSecretKey(secretKey);
            AWS_LOG_INFO(environmentLogTag, "Found secret key");
        }

        char* sessionToken = std::getenv(SESSION_TOKEN_ENV_VARIABLE);

        if(sessionToken)
        {
            credentials.SetSessionToken(sessionToken);
            AWS_LOG_INFO(environmentLogTag, "Found sessionToken");
        }
    }

    return credentials;
}

static Aws::String GetBaseDirectory()
{
    return FileSystemUtils::GetHomeDirectory();
}

Aws::String ProfileConfigFileAWSCredentialsProvider::GetConfigProfileFilename()
{
    return GetBaseDirectory() + PROFILE_DIRECTORY + DIRECTORY_JOIN + CONFIG_FILENAME;
}

Aws::String ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename()
{
    char* profileFileNameFromVar = std::getenv(AWS_CREDENTIAL_PROFILES_FILE);

    if (profileFileNameFromVar)
    {
        return Aws::String(profileFileNameFromVar);
    }
    else
    {
        return GetBaseDirectory() + PROFILE_DIRECTORY + DIRECTORY_JOIN + PROFILE_DEFAULT_FILENAME;
    }
}

Aws::String ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory()
{
    Aws::String profileFileName = GetCredentialsProfileFilename();
    auto lastSeparator = profileFileName.find_last_of(DIRECTORY_JOIN);
    if (lastSeparator != std::string::npos)
    {
        return profileFileName.substr(0, lastSeparator);
    }
    else
    {
        return "";
    }
}

static const char* profileLogTag = "ProfileConfigFileAWSCredentialsProvider";


ProfileConfigFileAWSCredentialsProvider::ProfileConfigFileAWSCredentialsProvider(long refreshRateMs) :
        m_configFileLoader(Aws::MakeShared<Aws::Config::AWSConfigFileProfileConfigLoader>(profileLogTag, GetConfigProfileFilename(), true)),
        m_credentialsFileLoader(Aws::MakeShared<Aws::Config::AWSConfigFileProfileConfigLoader>(profileLogTag, GetCredentialsProfileFilename())),
        m_loadFrequencyMs(refreshRateMs)
{
    char* profileFromVar = std::getenv(AWS_PROFILE_ENVIRONMENT_VARIABLE);
    if (profileFromVar)
    {
        m_profileToUse = profileFromVar;
    }
    else
    {
        m_profileToUse = DEFAULT_PROFILE;
    }

    AWS_LOGSTREAM_INFO(profileLogTag, "Setting provider to read credentials from " <<  GetCredentialsProfileFilename() << " for credentials file"
                                      << " and " <<  GetConfigProfileFilename() << " for the config file "
                                      << ", for use with profile " << m_profileToUse);
}

ProfileConfigFileAWSCredentialsProvider::ProfileConfigFileAWSCredentialsProvider(const char* profile, long refreshRateMs) :
        m_profileToUse(profile),
        m_configFileLoader(Aws::MakeShared<Aws::Config::AWSConfigFileProfileConfigLoader>(profileLogTag, GetConfigProfileFilename(), true)),
        m_credentialsFileLoader(Aws::MakeShared<Aws::Config::AWSConfigFileProfileConfigLoader>(profileLogTag, GetCredentialsProfileFilename())),
        m_loadFrequencyMs(refreshRateMs)
{
    AWS_LOGSTREAM_INFO(profileLogTag, "Setting provider to read credentials from " <<  GetCredentialsProfileFilename() << " for credentials file"
                                      << " and " <<  GetConfigProfileFilename() << " for the config file "
                                      << ", for use with profile " << m_profileToUse);
}

AWSCredentials ProfileConfigFileAWSCredentialsProvider::GetAWSCredentials()
{
    RefreshIfExpired();
    auto credsFileProfileIter = m_credentialsFileLoader->GetProfiles().find(m_profileToUse);

    if(credsFileProfileIter != m_credentialsFileLoader->GetProfiles().end())
    {
        return credsFileProfileIter->second.GetCredentials();
    }

    auto configFileProfileIter = m_configFileLoader->GetProfiles().find(m_profileToUse);
    if(configFileProfileIter != m_configFileLoader->GetProfiles().end())
    {
        return configFileProfileIter->second.GetCredentials();
    }

    return AWSCredentials();
}


void ProfileConfigFileAWSCredentialsProvider::RefreshIfExpired()
{
    std::lock_guard<std::mutex> locker(m_reloadMutex);

    if (IsTimeToRefresh(m_loadFrequencyMs))
    {
        //fall-back to config file.
        if(!m_credentialsFileLoader->Load())
        {
            m_configFileLoader->Load();
        }
    }
}

static const char* instanceLogTag = "InstanceProfileCredentialsProvider";

InstanceProfileCredentialsProvider::InstanceProfileCredentialsProvider(long refreshRateMs) :
        m_credentials(nullptr),
        m_loadFrequencyMs(refreshRateMs)
{
    AWS_LOGSTREAM_INFO(instanceLogTag, "Creating Instance with default EC2MetadataClient and refresh rate " << refreshRateMs);

    m_metadataClient = Aws::MakeShared<EC2MetadataClient>(instanceLogTag);
}


InstanceProfileCredentialsProvider::InstanceProfileCredentialsProvider(const std::shared_ptr<EC2MetadataClient>& mdClient,
                                                                       long refreshRateMs) :
        m_metadataClient(mdClient),
        m_credentials(nullptr),
        m_loadFrequencyMs(refreshRateMs)
{
    AWS_LOGSTREAM_INFO(instanceLogTag, "Creating Instance with injected EC2MetadataClient and refresh rate " << refreshRateMs);
}


AWSCredentials InstanceProfileCredentialsProvider::GetAWSCredentials()
{
    RefreshIfExpired();
    return *m_credentials;
}


void InstanceProfileCredentialsProvider::RefreshIfExpired()
{
    AWS_LOG_DEBUG(instanceLogTag, "Checking if latest credential pull has expired.");

    std::lock_guard<std::mutex> locker(m_reloadMutex);
    if (!m_credentials || IsTimeToRefresh(m_loadFrequencyMs))
    {
        AWS_LOG_INFO(instanceLogTag, "Credentials have expired attempting to repull from EC2 Metadata Service.");
        Aws::String mdRet = m_metadataClient->GetDefaultCredentials();

        if (mdRet.empty())
        {
            AWS_LOG_WARN(instanceLogTag, "Not able to pull credentials from the metadata service, returning empty credentials.");
            m_credentials = Aws::MakeShared<AWSCredentials>(instanceLogTag, "", "");
            return;
        }

        const char* accessKeyId = "AccessKeyId";
        const char* secretAccessKey = "SecretAccessKey";
        Aws::String accessKey, secretKey, token;

        using namespace Aws::Utils::Json;
        JsonValue jsonValue(mdRet);

        if (jsonValue.WasParseSuccessful())
        {
            accessKey = jsonValue.GetString(accessKeyId);
            AWS_LOGSTREAM_INFO(instanceLogTag, "Successfully pulled credentials from metadata service with access key " << accessKey);

            secretKey = jsonValue.GetString(secretAccessKey);
            token = jsonValue.GetString("Token");
        }
        else
        {
            AWS_LOGSTREAM_ERROR(instanceLogTag, "Failed to parse output from Ec2MetadataService with error " << jsonValue.GetErrorMessage());
        }

        m_credentials = Aws::MakeShared<AWSCredentials>(instanceLogTag, accessKey, secretKey, token);
    }
}


