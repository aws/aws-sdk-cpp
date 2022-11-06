/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SignUpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SignUpRequest::SignUpRequest() : 
    m_clientIdHasBeenSet(false),
    m_secretHashHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_userAttributesHasBeenSet(false),
    m_validationDataHasBeenSet(false),
    m_analyticsMetadataHasBeenSet(false),
    m_userContextDataHasBeenSet(false),
    m_clientMetadataHasBeenSet(false)
{
}

Aws::String SignUpRequest::SerializePayload() const
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

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_userAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributesJsonList(m_userAttributes.size());
   for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
   {
     userAttributesJsonList[userAttributesIndex].AsObject(m_userAttributes[userAttributesIndex].Jsonize());
   }
   payload.WithArray("UserAttributes", std::move(userAttributesJsonList));

  }

  if(m_validationDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationDataJsonList(m_validationData.size());
   for(unsigned validationDataIndex = 0; validationDataIndex < validationDataJsonList.GetLength(); ++validationDataIndex)
   {
     validationDataJsonList[validationDataIndex].AsObject(m_validationData[validationDataIndex].Jsonize());
   }
   payload.WithArray("ValidationData", std::move(validationDataJsonList));

  }

  if(m_analyticsMetadataHasBeenSet)
  {
   payload.WithObject("AnalyticsMetadata", m_analyticsMetadata.Jsonize());

  }

  if(m_userContextDataHasBeenSet)
  {
   payload.WithObject("UserContextData", m_userContextData.Jsonize());

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

Aws::Http::HeaderValueCollection SignUpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SignUp"));
  return headers;

}




