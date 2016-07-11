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

#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>

#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <fstream>

using namespace Aws::Auth;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

static const char* IDENTITY_ID = "IdentityId";
static const char* LOGINS = "Logins";
static const char* ACCESS_TOKEN = "AccessToken";
static const char* LONG_TERM_TOKEN = "LongTermToken";
static const char* EXPIRY = "Expiry";
static const char* FILENAME = ".identities";
static const char* DIR = ".aws";
static const char* LOG_TAG = "PersistentCognitoIdentityProvider_JsonFileImpl";

PersistentCognitoIdentityProvider_JsonFileImpl::PersistentCognitoIdentityProvider_JsonFileImpl(const Aws::String& identityPoolId, const Aws::String& accountId, bool disableCaching) : 
    m_identityPoolId(identityPoolId), 
    m_accountId(accountId),
    m_disableCaching(disableCaching)
{
    Aws::String identitiesDir = Aws::FileSystem::GetHomeDirectory() + DIR;

    if (Aws::FileSystem::CreateDirectoryIfNotExists(identitiesDir.c_str()))
    {
        m_identityFilePath = identitiesDir + Aws::FileSystem::PATH_DELIM + FILENAME;
    }

    if(!m_disableCaching)
    {
        LoadAndParseDoc();
    }
}

PersistentCognitoIdentityProvider_JsonFileImpl::PersistentCognitoIdentityProvider_JsonFileImpl(const Aws::String& identityPoolId,
                                                                                               const Aws::String& accountId, 
                                                                                               const char* identitiesFilePath,
                                                                                               bool disableCaching) : 
    m_identityPoolId(identityPoolId), 
    m_accountId(accountId), 
    m_identityFilePath(identitiesFilePath),
    m_disableCaching(disableCaching)
{
    if(!m_disableCaching)
    {
        LoadAndParseDoc();
    }
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistIdentityId(const Aws::String& identityId)
{
    {
        std::lock_guard<std::mutex> locker(m_docMutex);
        m_identityId = identityId;
        auto jsonDoc = LoadJsonDocFromFile();
        JsonValue identityNode;
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            identityNode = jsonDoc.GetObject(m_identityPoolId);
        }

        identityNode.WithString(IDENTITY_ID, m_identityId);
        jsonDoc.WithObject(m_identityPoolId, identityNode);
        PersistChangesToFile(jsonDoc);
    }

    if (m_identityIdUpdatedCallback)
    {
        m_identityIdUpdatedCallback(*this);
    }
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistLogins(const Aws::Map<Aws::String, LoginAccessTokens>& logins)
{
    {
        std::lock_guard<std::mutex> locker(m_docMutex);
        m_logins = logins;

        auto jsonDoc = LoadJsonDocFromFile();
        JsonValue identityNode;
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            identityNode = jsonDoc.GetObject(m_identityPoolId);
        }

        JsonValue loginsNode;

        for (auto& login : m_logins)
        {
            JsonValue loginNode;
            loginNode.WithString(ACCESS_TOKEN, login.second.accessToken);
            loginNode.WithString(LONG_TERM_TOKEN, login.second.longTermToken);
            loginNode.WithInt64(EXPIRY, login.second.longTermTokenExpiry);
            loginsNode.WithObject(login.first, std::move(loginNode));
        }

        identityNode.WithObject(LOGINS, loginsNode);
        jsonDoc.WithObject(m_identityPoolId, identityNode);
        PersistChangesToFile(jsonDoc);
    }

    if (m_loginsUpdatedCallback)
    {
        m_loginsUpdatedCallback(*this);
    }
}

JsonValue PersistentCognitoIdentityProvider_JsonFileImpl::LoadJsonDocFromFile() const
{
    std::ifstream infile(m_identityFilePath.c_str());
    if (infile.is_open() && infile.good())
    {
        return JsonValue(infile);
    }
    else
    {
        AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed reading from file " << m_identityFilePath);
    }

    return JsonValue();
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistChangesToFile(const JsonValue& jsonValue) const
{
    //the assumption here is that we've already created the directory by the time we make it here.
    Aws::String identitiesFile = m_identityFilePath;
    std::ofstream outfile(identitiesFile.c_str(), std::ios_base::trunc | std::ios_base::out);

    if (outfile.is_open() && outfile.good())
    {
        outfile << jsonValue.WriteReadable();
        outfile.flush();
        outfile.close();
    }
    else
    {
        AWS_LOG_ERROR(LOG_TAG, "Failed persisting changes to file.");
    }
}

void PersistentCognitoIdentityProvider_JsonFileImpl::LoadAndParseDoc()
{
    auto jsonDoc = LoadJsonDocFromFile();

    if (jsonDoc.ValueExists(m_identityPoolId))
    {
        auto identityNode = jsonDoc.GetObject(m_identityPoolId);
        m_identityId = identityNode.GetString(IDENTITY_ID);

        if (identityNode.ValueExists(LOGINS))
        {
            auto logins = identityNode.GetObject(LOGINS).GetAllObjects();
            BuildLoginsMap(logins, m_logins);
        }
    }    
}

bool PersistentCognitoIdentityProvider_JsonFileImpl::HasIdentityId() const 
{
    if(m_disableCaching)
    {
        auto jsonDoc = LoadJsonDocFromFile();
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            auto identityNode = jsonDoc.GetObject(m_identityPoolId);
            return !identityNode.GetString(IDENTITY_ID).empty();
        }

        return false;
    }
    else
    { 
        return !m_identityId.empty(); 
    }
}

bool PersistentCognitoIdentityProvider_JsonFileImpl::HasLogins() const 
{ 
    if(m_disableCaching)
    {
        auto jsonDoc = LoadJsonDocFromFile();
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            auto identityNode = jsonDoc.GetObject(m_identityPoolId);
            if (identityNode.ValueExists(LOGINS))
            {
                auto logins = identityNode.GetObject(LOGINS).GetAllObjects();
                return logins.size() > 0;
            }
        }

        return false;
    }
    else
    { 
        return !m_logins.empty(); 
    }
}

Aws::String PersistentCognitoIdentityProvider_JsonFileImpl::GetIdentityId() const 
{
    if(m_disableCaching)
    {
        auto jsonDoc = LoadJsonDocFromFile();
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            auto identityNode = jsonDoc.GetObject(m_identityPoolId);
            return identityNode.GetString(IDENTITY_ID);
        }

        return "";
    }
    else
    {   
        return m_identityId; 
    }
}

Aws::Map<Aws::String, LoginAccessTokens> PersistentCognitoIdentityProvider_JsonFileImpl::GetLogins() 
{ 
    if(m_disableCaching)
    {
        Aws::Map<Aws::String, LoginAccessTokens> logins;

        auto jsonDoc = LoadJsonDocFromFile();
        if (jsonDoc.ValueExists(m_identityPoolId))
        {
            auto identityNode = jsonDoc.GetObject(m_identityPoolId);
            if (identityNode.ValueExists(LOGINS))
            {
                auto loginsJsonMap = identityNode.GetObject(LOGINS).GetAllObjects();
                BuildLoginsMap(loginsJsonMap, logins);
            }
        }

        return logins;
    }
    else
    { 
        return m_logins; 
    }
}

void PersistentCognitoIdentityProvider_JsonFileImpl::BuildLoginsMap(Aws::Map<Aws::String, Aws::Utils::Json::JsonValue> loginJsonMap, Aws::Map<Aws::String, LoginAccessTokens>& logins)
{
    for (auto& login : loginJsonMap)
    {
        auto& loginTokens = login.second;
        LoginAccessTokens loginAccessTokens;

        /*this block is for backwards compatibility with the previous implementation.
            This used to be a string: string mapping, if access token is not a member,
            then fallback and assign the value to the accessToken field. Now, next time
            it will save it in the new format.*/
        if(loginTokens.IsString())
        {
            loginAccessTokens.accessToken = loginTokens.AsString();
        }
        else
        {
            if (loginTokens.ValueExists(ACCESS_TOKEN))
            {
                loginAccessTokens.accessToken = loginTokens.GetString(ACCESS_TOKEN);
            }

            if (loginTokens.ValueExists(LONG_TERM_TOKEN))
            {
                loginAccessTokens.longTermToken = loginTokens.GetString(LONG_TERM_TOKEN);
            }
            if (loginTokens.ValueExists(EXPIRY))
            {
                loginAccessTokens.longTermTokenExpiry = loginTokens.GetInt64(EXPIRY);
            }
        }

        logins[login.first] = loginAccessTokens;
    }
}