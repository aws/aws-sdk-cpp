/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminUpdateUserAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminUpdateUserAttributesRequest::AdminUpdateUserAttributesRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_userAttributesHasBeenSet(false),
    m_clientMetadataHasBeenSet(false)
{
}

Aws::String AdminUpdateUserAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

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

Aws::Http::HeaderValueCollection AdminUpdateUserAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminUpdateUserAttributes"));
  return headers;

}




