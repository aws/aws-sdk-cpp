/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/model/CreateIdentityPoolResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIdentityPoolResult::CreateIdentityPoolResult() : 
    m_allowUnauthenticatedIdentities(false)
{
}

CreateIdentityPoolResult::CreateIdentityPoolResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_allowUnauthenticatedIdentities(false)
{
  *this = result;
}

CreateIdentityPoolResult& CreateIdentityPoolResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

  }

  if(jsonValue.ValueExists("IdentityPoolName"))
  {
    m_identityPoolName = jsonValue.GetString("IdentityPoolName");

  }

  if(jsonValue.ValueExists("AllowUnauthenticatedIdentities"))
  {
    m_allowUnauthenticatedIdentities = jsonValue.GetBool("AllowUnauthenticatedIdentities");

  }

  if(jsonValue.ValueExists("SupportedLoginProviders"))
  {
    Aws::Map<Aws::String, JsonValue> supportedLoginProvidersJsonMap = jsonValue.GetObject("SupportedLoginProviders").GetAllObjects();
    for(auto& supportedLoginProvidersItem : supportedLoginProvidersJsonMap)
    {
      m_supportedLoginProviders[supportedLoginProvidersItem.first] = supportedLoginProvidersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("DeveloperProviderName"))
  {
    m_developerProviderName = jsonValue.GetString("DeveloperProviderName");

  }

  if(jsonValue.ValueExists("OpenIdConnectProviderARNs"))
  {
    Array<JsonValue> openIdConnectProviderARNsJsonList = jsonValue.GetArray("OpenIdConnectProviderARNs");
    for(unsigned openIdConnectProviderARNsIndex = 0; openIdConnectProviderARNsIndex < openIdConnectProviderARNsJsonList.GetLength(); ++openIdConnectProviderARNsIndex)
    {
      m_openIdConnectProviderARNs.push_back(openIdConnectProviderARNsJsonList[openIdConnectProviderARNsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CognitoIdentityProviders"))
  {
    Array<JsonValue> cognitoIdentityProvidersJsonList = jsonValue.GetArray("CognitoIdentityProviders");
    for(unsigned cognitoIdentityProvidersIndex = 0; cognitoIdentityProvidersIndex < cognitoIdentityProvidersJsonList.GetLength(); ++cognitoIdentityProvidersIndex)
    {
      m_cognitoIdentityProviders.push_back(cognitoIdentityProvidersJsonList[cognitoIdentityProvidersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SamlProviderARNs"))
  {
    Array<JsonValue> samlProviderARNsJsonList = jsonValue.GetArray("SamlProviderARNs");
    for(unsigned samlProviderARNsIndex = 0; samlProviderARNsIndex < samlProviderARNsJsonList.GetLength(); ++samlProviderARNsIndex)
    {
      m_samlProviderARNs.push_back(samlProviderARNsJsonList[samlProviderARNsIndex].AsString());
    }
  }



  return *this;
}
