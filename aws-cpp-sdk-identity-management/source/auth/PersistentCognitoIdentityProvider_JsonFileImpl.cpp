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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <fstream>

using namespace Aws::Auth;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

static const char* FILENAME = ".identities";
static const char* DIR = ".aws";
static const char* LOG_TAG = "PersistentCognitoIdentityProvider_JsonFileImpl";

PersistentCognitoIdentityProvider_JsonFileImpl::PersistentCognitoIdentityProvider_JsonFileImpl(const Aws::String& identityPoolId, const Aws::String& accountId)
    : m_identityPoolId(identityPoolId), m_accountId(accountId)
{
    auto jsonDoc = LoadJsonDocFromFile();

    if(jsonDoc.ValueExists(identityPoolId))
    {
        auto identityNode = jsonDoc.GetObject(identityPoolId);
        m_identityId = identityNode.GetString("IdentityId");

        if(identityNode.ValueExists("Logins"))
        {
            auto logins = identityNode.GetObject("Logins").GetAllObjects();
            for(auto& login : logins)
            {
               m_logins[login.first] = login.second.AsString();
            }
        }
    }
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistIdentityId(const Aws::String& identityId)
{
    std::lock_guard<std::mutex> locker(m_docMutex);
    m_identityId = identityId;
    auto jsonDoc = LoadJsonDocFromFile();
    JsonValue identityNode;
    if(jsonDoc.ValueExists(m_identityPoolId))
    {
        identityNode = jsonDoc.GetObject(m_identityPoolId);
    }

    identityNode.WithString("IdentityId", m_identityId);
    jsonDoc.WithObject(m_identityPoolId, identityNode);
    PersistChangesToFile(jsonDoc);
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistLogins(const Aws::Map<Aws::String, Aws::String>& logins)
{
    std::lock_guard<std::mutex> locker(m_docMutex);
    m_logins = logins;

    auto jsonDoc = LoadJsonDocFromFile();
    JsonValue identityNode;
    if(jsonDoc.ValueExists(m_identityPoolId))
    {
        identityNode = jsonDoc.GetObject(m_identityPoolId);
    }

    JsonValue loginsNode;

    for(auto login : m_logins)
    {
       loginsNode.WithString(login.first, login.second);
    }

    identityNode.WithObject("Logins", loginsNode);
    jsonDoc.WithObject(m_identityPoolId, identityNode);
    PersistChangesToFile(jsonDoc);
}

JsonValue PersistentCognitoIdentityProvider_JsonFileImpl::LoadJsonDocFromFile() const
{
    Aws::String identitiesDir = FileSystemUtils::GetHomeDirectory() + DIR;

    if(FileSystemUtils::CreateDirectoryIfNotExists(identitiesDir.c_str()))
    {
        Aws::String identitiesFile = identitiesDir + PATH_DELIM + FILENAME;
        std::ifstream infile(identitiesFile.c_str());
        if (infile.is_open() && infile.good())
        {
            return JsonValue(infile);
        }
        else
        {
            AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed reading from file " << identitiesFile);
        }
    }

    return JsonValue();
}

void PersistentCognitoIdentityProvider_JsonFileImpl::PersistChangesToFile(const JsonValue& jsonValue) const
{
    //the assumption here is that we've already created the directory by the time we make it here.
    Aws::String identitiesFile = FileSystemUtils::GetHomeDirectory() + PATH_DELIM + DIR + PATH_DELIM + FILENAME;
    std::ofstream outfile(identitiesFile.c_str(), std::ios_base::trunc | std::ios_base::out);

    if(outfile.is_open() && outfile.good())
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
