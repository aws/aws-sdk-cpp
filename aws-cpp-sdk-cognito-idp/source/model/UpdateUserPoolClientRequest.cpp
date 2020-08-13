/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateUserPoolClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserPoolClientRequest::UpdateUserPoolClientRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
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
    m_preventUserExistenceErrorsHasBeenSet(false)
{
}

Aws::String UpdateUserPoolClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("ClientName", m_clientName);

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

  if(m_preventUserExistenceErrorsHasBeenSet)
  {
   payload.WithString("PreventUserExistenceErrors", PreventUserExistenceErrorTypesMapper::GetNameForPreventUserExistenceErrorTypes(m_preventUserExistenceErrors));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserPoolClientRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateUserPoolClient"));
  return headers;

}




