﻿/*
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

#include <aws/cognito-idp/model/UserPoolClientType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserPoolClientType::UserPoolClientType() : 
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_refreshTokenValidity(0),
    m_refreshTokenValidityHasBeenSet(false),
    m_readAttributesHasBeenSet(false),
    m_writeAttributesHasBeenSet(false),
    m_explicitAuthFlowsHasBeenSet(false),
    m_supportedIdentityProvidersHasBeenSet(false),
    m_callbackURLsHasBeenSet(false),
    m_logoutURLsHasBeenSet(false),
    m_defaultRedirectURIHasBeenSet(false),
    m_allowedOAuthFlowsHasBeenSet(false),
    m_allowedOAuthScopesHasBeenSet(false),
    m_allowedOAuthFlowsUserPoolClient(false),
    m_allowedOAuthFlowsUserPoolClientHasBeenSet(false),
    m_analyticsConfigurationHasBeenSet(false)
{
}

UserPoolClientType::UserPoolClientType(const JsonValue& jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_refreshTokenValidity(0),
    m_refreshTokenValidityHasBeenSet(false),
    m_readAttributesHasBeenSet(false),
    m_writeAttributesHasBeenSet(false),
    m_explicitAuthFlowsHasBeenSet(false),
    m_supportedIdentityProvidersHasBeenSet(false),
    m_callbackURLsHasBeenSet(false),
    m_logoutURLsHasBeenSet(false),
    m_defaultRedirectURIHasBeenSet(false),
    m_allowedOAuthFlowsHasBeenSet(false),
    m_allowedOAuthScopesHasBeenSet(false),
    m_allowedOAuthFlowsUserPoolClient(false),
    m_allowedOAuthFlowsUserPoolClientHasBeenSet(false),
    m_analyticsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolClientType& UserPoolClientType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientName"))
  {
    m_clientName = jsonValue.GetString("ClientName");

    m_clientNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientSecret"))
  {
    m_clientSecret = jsonValue.GetString("ClientSecret");

    m_clientSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshTokenValidity"))
  {
    m_refreshTokenValidity = jsonValue.GetInteger("RefreshTokenValidity");

    m_refreshTokenValidityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadAttributes"))
  {
    Array<JsonValue> readAttributesJsonList = jsonValue.GetArray("ReadAttributes");
    for(unsigned readAttributesIndex = 0; readAttributesIndex < readAttributesJsonList.GetLength(); ++readAttributesIndex)
    {
      m_readAttributes.push_back(readAttributesJsonList[readAttributesIndex].AsString());
    }
    m_readAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteAttributes"))
  {
    Array<JsonValue> writeAttributesJsonList = jsonValue.GetArray("WriteAttributes");
    for(unsigned writeAttributesIndex = 0; writeAttributesIndex < writeAttributesJsonList.GetLength(); ++writeAttributesIndex)
    {
      m_writeAttributes.push_back(writeAttributesJsonList[writeAttributesIndex].AsString());
    }
    m_writeAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplicitAuthFlows"))
  {
    Array<JsonValue> explicitAuthFlowsJsonList = jsonValue.GetArray("ExplicitAuthFlows");
    for(unsigned explicitAuthFlowsIndex = 0; explicitAuthFlowsIndex < explicitAuthFlowsJsonList.GetLength(); ++explicitAuthFlowsIndex)
    {
      m_explicitAuthFlows.push_back(ExplicitAuthFlowsTypeMapper::GetExplicitAuthFlowsTypeForName(explicitAuthFlowsJsonList[explicitAuthFlowsIndex].AsString()));
    }
    m_explicitAuthFlowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedIdentityProviders"))
  {
    Array<JsonValue> supportedIdentityProvidersJsonList = jsonValue.GetArray("SupportedIdentityProviders");
    for(unsigned supportedIdentityProvidersIndex = 0; supportedIdentityProvidersIndex < supportedIdentityProvidersJsonList.GetLength(); ++supportedIdentityProvidersIndex)
    {
      m_supportedIdentityProviders.push_back(supportedIdentityProvidersJsonList[supportedIdentityProvidersIndex].AsString());
    }
    m_supportedIdentityProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallbackURLs"))
  {
    Array<JsonValue> callbackURLsJsonList = jsonValue.GetArray("CallbackURLs");
    for(unsigned callbackURLsIndex = 0; callbackURLsIndex < callbackURLsJsonList.GetLength(); ++callbackURLsIndex)
    {
      m_callbackURLs.push_back(callbackURLsJsonList[callbackURLsIndex].AsString());
    }
    m_callbackURLsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogoutURLs"))
  {
    Array<JsonValue> logoutURLsJsonList = jsonValue.GetArray("LogoutURLs");
    for(unsigned logoutURLsIndex = 0; logoutURLsIndex < logoutURLsJsonList.GetLength(); ++logoutURLsIndex)
    {
      m_logoutURLs.push_back(logoutURLsJsonList[logoutURLsIndex].AsString());
    }
    m_logoutURLsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRedirectURI"))
  {
    m_defaultRedirectURI = jsonValue.GetString("DefaultRedirectURI");

    m_defaultRedirectURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedOAuthFlows"))
  {
    Array<JsonValue> allowedOAuthFlowsJsonList = jsonValue.GetArray("AllowedOAuthFlows");
    for(unsigned allowedOAuthFlowsIndex = 0; allowedOAuthFlowsIndex < allowedOAuthFlowsJsonList.GetLength(); ++allowedOAuthFlowsIndex)
    {
      m_allowedOAuthFlows.push_back(OAuthFlowTypeMapper::GetOAuthFlowTypeForName(allowedOAuthFlowsJsonList[allowedOAuthFlowsIndex].AsString()));
    }
    m_allowedOAuthFlowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedOAuthScopes"))
  {
    Array<JsonValue> allowedOAuthScopesJsonList = jsonValue.GetArray("AllowedOAuthScopes");
    for(unsigned allowedOAuthScopesIndex = 0; allowedOAuthScopesIndex < allowedOAuthScopesJsonList.GetLength(); ++allowedOAuthScopesIndex)
    {
      m_allowedOAuthScopes.push_back(allowedOAuthScopesJsonList[allowedOAuthScopesIndex].AsString());
    }
    m_allowedOAuthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedOAuthFlowsUserPoolClient"))
  {
    m_allowedOAuthFlowsUserPoolClient = jsonValue.GetBool("AllowedOAuthFlowsUserPoolClient");

    m_allowedOAuthFlowsUserPoolClientHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalyticsConfiguration"))
  {
    m_analyticsConfiguration = jsonValue.GetObject("AnalyticsConfiguration");

    m_analyticsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPoolClientType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("ClientName", m_clientName);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_refreshTokenValidityHasBeenSet)
  {
   payload.WithInteger("RefreshTokenValidity", m_refreshTokenValidity);

  }

  if(m_readAttributesHasBeenSet)
  {
   Array<JsonValue> readAttributesJsonList(m_readAttributes.size());
   for(unsigned readAttributesIndex = 0; readAttributesIndex < readAttributesJsonList.GetLength(); ++readAttributesIndex)
   {
     readAttributesJsonList[readAttributesIndex].AsString(m_readAttributes[readAttributesIndex]);
   }
   payload.WithArray("ReadAttributes", std::move(readAttributesJsonList));

  }

  if(m_writeAttributesHasBeenSet)
  {
   Array<JsonValue> writeAttributesJsonList(m_writeAttributes.size());
   for(unsigned writeAttributesIndex = 0; writeAttributesIndex < writeAttributesJsonList.GetLength(); ++writeAttributesIndex)
   {
     writeAttributesJsonList[writeAttributesIndex].AsString(m_writeAttributes[writeAttributesIndex]);
   }
   payload.WithArray("WriteAttributes", std::move(writeAttributesJsonList));

  }

  if(m_explicitAuthFlowsHasBeenSet)
  {
   Array<JsonValue> explicitAuthFlowsJsonList(m_explicitAuthFlows.size());
   for(unsigned explicitAuthFlowsIndex = 0; explicitAuthFlowsIndex < explicitAuthFlowsJsonList.GetLength(); ++explicitAuthFlowsIndex)
   {
     explicitAuthFlowsJsonList[explicitAuthFlowsIndex].AsString(ExplicitAuthFlowsTypeMapper::GetNameForExplicitAuthFlowsType(m_explicitAuthFlows[explicitAuthFlowsIndex]));
   }
   payload.WithArray("ExplicitAuthFlows", std::move(explicitAuthFlowsJsonList));

  }

  if(m_supportedIdentityProvidersHasBeenSet)
  {
   Array<JsonValue> supportedIdentityProvidersJsonList(m_supportedIdentityProviders.size());
   for(unsigned supportedIdentityProvidersIndex = 0; supportedIdentityProvidersIndex < supportedIdentityProvidersJsonList.GetLength(); ++supportedIdentityProvidersIndex)
   {
     supportedIdentityProvidersJsonList[supportedIdentityProvidersIndex].AsString(m_supportedIdentityProviders[supportedIdentityProvidersIndex]);
   }
   payload.WithArray("SupportedIdentityProviders", std::move(supportedIdentityProvidersJsonList));

  }

  if(m_callbackURLsHasBeenSet)
  {
   Array<JsonValue> callbackURLsJsonList(m_callbackURLs.size());
   for(unsigned callbackURLsIndex = 0; callbackURLsIndex < callbackURLsJsonList.GetLength(); ++callbackURLsIndex)
   {
     callbackURLsJsonList[callbackURLsIndex].AsString(m_callbackURLs[callbackURLsIndex]);
   }
   payload.WithArray("CallbackURLs", std::move(callbackURLsJsonList));

  }

  if(m_logoutURLsHasBeenSet)
  {
   Array<JsonValue> logoutURLsJsonList(m_logoutURLs.size());
   for(unsigned logoutURLsIndex = 0; logoutURLsIndex < logoutURLsJsonList.GetLength(); ++logoutURLsIndex)
   {
     logoutURLsJsonList[logoutURLsIndex].AsString(m_logoutURLs[logoutURLsIndex]);
   }
   payload.WithArray("LogoutURLs", std::move(logoutURLsJsonList));

  }

  if(m_defaultRedirectURIHasBeenSet)
  {
   payload.WithString("DefaultRedirectURI", m_defaultRedirectURI);

  }

  if(m_allowedOAuthFlowsHasBeenSet)
  {
   Array<JsonValue> allowedOAuthFlowsJsonList(m_allowedOAuthFlows.size());
   for(unsigned allowedOAuthFlowsIndex = 0; allowedOAuthFlowsIndex < allowedOAuthFlowsJsonList.GetLength(); ++allowedOAuthFlowsIndex)
   {
     allowedOAuthFlowsJsonList[allowedOAuthFlowsIndex].AsString(OAuthFlowTypeMapper::GetNameForOAuthFlowType(m_allowedOAuthFlows[allowedOAuthFlowsIndex]));
   }
   payload.WithArray("AllowedOAuthFlows", std::move(allowedOAuthFlowsJsonList));

  }

  if(m_allowedOAuthScopesHasBeenSet)
  {
   Array<JsonValue> allowedOAuthScopesJsonList(m_allowedOAuthScopes.size());
   for(unsigned allowedOAuthScopesIndex = 0; allowedOAuthScopesIndex < allowedOAuthScopesJsonList.GetLength(); ++allowedOAuthScopesIndex)
   {
     allowedOAuthScopesJsonList[allowedOAuthScopesIndex].AsString(m_allowedOAuthScopes[allowedOAuthScopesIndex]);
   }
   payload.WithArray("AllowedOAuthScopes", std::move(allowedOAuthScopesJsonList));

  }

  if(m_allowedOAuthFlowsUserPoolClientHasBeenSet)
  {
   payload.WithBool("AllowedOAuthFlowsUserPoolClient", m_allowedOAuthFlowsUserPoolClient);

  }

  if(m_analyticsConfigurationHasBeenSet)
  {
   payload.WithObject("AnalyticsConfiguration", m_analyticsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
