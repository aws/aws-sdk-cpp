/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ForgotPasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ForgotPasswordRequest::ForgotPasswordRequest() : 
    m_clientIdHasBeenSet(false),
    m_secretHashHasBeenSet(false),
    m_userContextDataHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_analyticsMetadataHasBeenSet(false),
    m_clientMetadataHasBeenSet(false)
{
}

Aws::String ForgotPasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_secretHashHasBeenSet)
  {
   payload.WithString("SecretHash", m_secretHash);

  }

  if(m_userContextDataHasBeenSet)
  {
   payload.WithObject("UserContextData", m_userContextData.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_analyticsMetadataHasBeenSet)
  {
   payload.WithObject("AnalyticsMetadata", m_analyticsMetadata.Jsonize());

  }

  if(m_clientMetadataHasBeenSet)
  {
   JsonValue clientMetadataJsonMap;
   for(auto& clientMetadataItem : m_clientMetadata)
   {
     clientMetadataJsonMap.WithString(clientMetadataItem.first, clientMetadataItem.second);
   }
   payload.WithObject("ClientMetadata", std::move(clientMetadataJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ForgotPasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ForgotPassword"));
  return headers;

}




