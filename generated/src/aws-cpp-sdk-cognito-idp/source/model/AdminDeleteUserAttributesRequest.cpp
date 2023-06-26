/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminDeleteUserAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_userAttributeNamesHasBeenSet(false)
{
}

Aws::String AdminDeleteUserAttributesRequest::SerializePayload() const
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

  if(m_userAttributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributeNamesJsonList(m_userAttributeNames.size());
   for(unsigned userAttributeNamesIndex = 0; userAttributeNamesIndex < userAttributeNamesJsonList.GetLength(); ++userAttributeNamesIndex)
   {
     userAttributeNamesJsonList[userAttributeNamesIndex].AsString(m_userAttributeNames[userAttributeNamesIndex]);
   }
   payload.WithArray("UserAttributeNames", std::move(userAttributeNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminDeleteUserAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminDeleteUserAttributes"));
  return headers;

}




