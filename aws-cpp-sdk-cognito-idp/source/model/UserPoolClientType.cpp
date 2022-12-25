/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_accessTokenValidity(0),
    m_accessTokenValidityHasBeenSet(false),
    m_idTokenValidity(0),
    m_idTokenValidityHasBeenSet(false),
    m_tokenValidityUnitsHasBeenSet(false),
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
    m_analyticsConfigurationHasBeenSet(false),
    m_preventUserExistenceErrors(PreventUserExistenceErrorTypes::NOT_SET),
    m_preventUserExistenceErrorsHasBeenSet(false),
    m_enableTokenRevocation(false),
    m_enableTokenRevocationHasBeenSet(false),
    m_enablePropagateAdditionalUserContextData(false),
    m_enablePropagateAdditionalUserContextDataHasBeenSet(false),
    m_authSessionValidity(0),
    m_authSessionValidityHasBeenSet(false)
{
}

UserPoolClientType::UserPoolClientType(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_refreshTokenValidity(0),
    m_refreshTokenValidityHasBeenSet(false),
    m_accessTokenValidity(0),
    m_accessTokenValidityHasBeenSet(false),
    m_idTokenValidity(0),
    m_idTokenValidityHasBeenSet(false),
    m_tokenValidityUnitsHasBeenSet(false),
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
    m_analyticsConfigurationHasBeenSet(false),
    m_preventUserExistenceErrors(PreventUserExistenceErrorTypes::NOT_SET),
    m_preventUserExistenceErrorsHasBeenSet(false),
    m_enableTokenRevocation(false),
    m_enableTokenRevocationHasBeenSet(false),
    m_enablePropagateAdditionalUserContextData(false),
    m_enablePropagateAdditionalUserContextDataHasBeenSet(false),
    m_authSessionValidity(0),
    m_authSessionValidityHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolClientType& UserPoolClientType::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AccessTokenValidity"))
  {
    m_accessTokenValidity = jsonValue.GetInteger("AccessTokenValidity");

    m_accessTokenValidityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdTokenValidity"))
  {
    m_idTokenValidity = jsonValue.GetInteger("IdTokenValidity");

    m_idTokenValidityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenValidityUnits"))
  {
    m_tokenValidityUnits = jsonValue.GetObject("TokenValidityUnits");

    m_tokenValidityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadAttributes"))
  {
    Aws::Utils::Array<JsonView> readAttributesJsonList = jsonValue.GetArray("ReadAttributes");
    for(unsigned readAttributesIndex = 0; readAttributesIndex < readAttributesJsonList.GetLength(); ++readAttributesIndex)
    {
      m_readAttributes.push_back(readAttributesJsonList[readAttributesIndex].AsString());
    }
    m_readAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteAttributes"))
  {
    Aws::Utils::Array<JsonView> writeAttributesJsonList = jsonValue.GetArray("WriteAttributes");
    for(unsigned writeAttributesIndex = 0; writeAttributesIndex < writeAttributesJsonList.GetLength(); ++writeAttributesIndex)
    {
      m_writeAttributes.push_back(writeAttributesJsonList[writeAttributesIndex].AsString());
    }
    m_writeAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplicitAuthFlows"))
  {
    Aws::Utils::Array<JsonView> explicitAuthFlowsJsonList = jsonValue.GetArray("ExplicitAuthFlows");
    for(unsigned explicitAuthFlowsIndex = 0; explicitAuthFlowsIndex < explicitAuthFlowsJsonList.GetLength(); ++explicitAuthFlowsIndex)
    {
      m_explicitAuthFlows.push_back(ExplicitAuthFlowsTypeMapper::GetExplicitAuthFlowsTypeForName(explicitAuthFlowsJsonList[explicitAuthFlowsIndex].AsString()));
    }
    m_explicitAuthFlowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedIdentityProviders"))
  {
    Aws::Utils::Array<JsonView> supportedIdentityProvidersJsonList = jsonValue.GetArray("SupportedIdentityProviders");
    for(unsigned supportedIdentityProvidersIndex = 0; supportedIdentityProvidersIndex < supportedIdentityProvidersJsonList.GetLength(); ++supportedIdentityProvidersIndex)
    {
      m_supportedIdentityProviders.push_back(supportedIdentityProvidersJsonList[supportedIdentityProvidersIndex].AsString());
    }
    m_supportedIdentityProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallbackURLs"))
  {
    Aws::Utils::Array<JsonView> callbackURLsJsonList = jsonValue.GetArray("CallbackURLs");
    for(unsigned callbackURLsIndex = 0; callbackURLsIndex < callbackURLsJsonList.GetLength(); ++callbackURLsIndex)
    {
      m_callbackURLs.push_back(callbackURLsJsonList[callbackURLsIndex].AsString());
    }
    m_callbackURLsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogoutURLs"))
  {
    Aws::Utils::Array<JsonView> logoutURLsJsonList = jsonValue.GetArray("LogoutURLs");
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
    Aws::Utils::Array<JsonView> allowedOAuthFlowsJsonList = jsonValue.GetArray("AllowedOAuthFlows");
    for(unsigned allowedOAuthFlowsIndex = 0; allowedOAuthFlowsIndex < allowedOAuthFlowsJsonList.GetLength(); ++allowedOAuthFlowsIndex)
    {
      m_allowedOAuthFlows.push_back(OAuthFlowTypeMapper::GetOAuthFlowTypeForName(allowedOAuthFlowsJsonList[allowedOAuthFlowsIndex].AsString()));
    }
    m_allowedOAuthFlowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedOAuthScopes"))
  {
    Aws::Utils::Array<JsonView> allowedOAuthScopesJsonList = jsonValue.GetArray("AllowedOAuthScopes");
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

  if(jsonValue.ValueExists("PreventUserExistenceErrors"))
  {
    m_preventUserExistenceErrors = PreventUserExistenceErrorTypesMapper::GetPreventUserExistenceErrorTypesForName(jsonValue.GetString("PreventUserExistenceErrors"));

    m_preventUserExistenceErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableTokenRevocation"))
  {
    m_enableTokenRevocation = jsonValue.GetBool("EnableTokenRevocation");

    m_enableTokenRevocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnablePropagateAdditionalUserContextData"))
  {
    m_enablePropagateAdditionalUserContextData = jsonValue.GetBool("EnablePropagateAdditionalUserContextData");

    m_enablePropagateAdditionalUserContextDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthSessionValidity"))
  {
    m_authSessionValidity = jsonValue.GetInteger("AuthSessionValidity");

    m_authSessionValidityHasBeenSet = true;
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

  if(m_accessTokenValidityHasBeenSet)
  {
   payload.WithInteger("AccessTokenValidity", m_accessTokenValidity);

  }

  if(m_idTokenValidityHasBeenSet)
  {
   payload.WithInteger("IdTokenValidity", m_idTokenValidity);

  }

  if(m_tokenValidityUnitsHasBeenSet)
  {
   payload.WithObject("TokenValidityUnits", m_tokenValidityUnits.Jsonize());

  }

  if(m_readAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readAttributesJsonList(m_readAttributes.size());
   for(unsigned readAttributesIndex = 0; readAttributesIndex < readAttributesJsonList.GetLength(); ++readAttributesIndex)
   {
     readAttributesJsonList[readAttributesIndex].AsString(m_readAttributes[readAttributesIndex]);
   }
   payload.WithArray("ReadAttributes", std::move(readAttributesJsonList));

  }

  if(m_writeAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> writeAttributesJsonList(m_writeAttributes.size());
   for(unsigned writeAttributesIndex = 0; writeAttributesIndex < writeAttributesJsonList.GetLength(); ++writeAttributesIndex)
   {
     writeAttributesJsonList[writeAttributesIndex].AsString(m_writeAttributes[writeAttributesIndex]);
   }
   payload.WithArray("WriteAttributes", std::move(writeAttributesJsonList));

  }

  if(m_explicitAuthFlowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> explicitAuthFlowsJsonList(m_explicitAuthFlows.size());
   for(unsigned explicitAuthFlowsIndex = 0; explicitAuthFlowsIndex < explicitAuthFlowsJsonList.GetLength(); ++explicitAuthFlowsIndex)
   {
     explicitAuthFlowsJsonList[explicitAuthFlowsIndex].AsString(ExplicitAuthFlowsTypeMapper::GetNameForExplicitAuthFlowsType(m_explicitAuthFlows[explicitAuthFlowsIndex]));
   }
   payload.WithArray("ExplicitAuthFlows", std::move(explicitAuthFlowsJsonList));

  }

  if(m_supportedIdentityProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedIdentityProvidersJsonList(m_supportedIdentityProviders.size());
   for(unsigned supportedIdentityProvidersIndex = 0; supportedIdentityProvidersIndex < supportedIdentityProvidersJsonList.GetLength(); ++supportedIdentityProvidersIndex)
   {
     supportedIdentityProvidersJsonList[supportedIdentityProvidersIndex].AsString(m_supportedIdentityProviders[supportedIdentityProvidersIndex]);
   }
   payload.WithArray("SupportedIdentityProviders", std::move(supportedIdentityProvidersJsonList));

  }

  if(m_callbackURLsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> callbackURLsJsonList(m_callbackURLs.size());
   for(unsigned callbackURLsIndex = 0; callbackURLsIndex < callbackURLsJsonList.GetLength(); ++callbackURLsIndex)
   {
     callbackURLsJsonList[callbackURLsIndex].AsString(m_callbackURLs[callbackURLsIndex]);
   }
   payload.WithArray("CallbackURLs", std::move(callbackURLsJsonList));

  }

  if(m_logoutURLsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logoutURLsJsonList(m_logoutURLs.size());
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
   Aws::Utils::Array<JsonValue> allowedOAuthFlowsJsonList(m_allowedOAuthFlows.size());
   for(unsigned allowedOAuthFlowsIndex = 0; allowedOAuthFlowsIndex < allowedOAuthFlowsJsonList.GetLength(); ++allowedOAuthFlowsIndex)
   {
     allowedOAuthFlowsJsonList[allowedOAuthFlowsIndex].AsString(OAuthFlowTypeMapper::GetNameForOAuthFlowType(m_allowedOAuthFlows[allowedOAuthFlowsIndex]));
   }
   payload.WithArray("AllowedOAuthFlows", std::move(allowedOAuthFlowsJsonList));

  }

  if(m_allowedOAuthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOAuthScopesJsonList(m_allowedOAuthScopes.size());
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

  if(m_preventUserExistenceErrorsHasBeenSet)
  {
   payload.WithString("PreventUserExistenceErrors", PreventUserExistenceErrorTypesMapper::GetNameForPreventUserExistenceErrorTypes(m_preventUserExistenceErrors));
  }

  if(m_enableTokenRevocationHasBeenSet)
  {
   payload.WithBool("EnableTokenRevocation", m_enableTokenRevocation);

  }

  if(m_enablePropagateAdditionalUserContextDataHasBeenSet)
  {
   payload.WithBool("EnablePropagateAdditionalUserContextData", m_enablePropagateAdditionalUserContextData);

  }

  if(m_authSessionValidityHasBeenSet)
  {
   payload.WithInteger("AuthSessionValidity", m_authSessionValidity);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
