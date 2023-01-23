/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DeleteUserAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserAttributesRequest::DeleteUserAttributesRequest() : 
    m_userAttributeNamesHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String DeleteUserAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userAttributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributeNamesJsonList(m_userAttributeNames.size());
   for(unsigned userAttributeNamesIndex = 0; userAttributeNamesIndex < userAttributeNamesJsonList.GetLength(); ++userAttributeNamesIndex)
   {
     userAttributeNamesJsonList[userAttributeNamesIndex].AsString(m_userAttributeNames[userAttributeNamesIndex]);
   }
   payload.WithArray("UserAttributeNames", std::move(userAttributeNamesJsonList));

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteUserAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.DeleteUserAttributes"));
  return headers;

}




