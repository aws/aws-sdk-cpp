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
   Array<JsonValue> userAttributeNamesJsonList(m_userAttributeNames.size());
   for(unsigned userAttributeNamesIndex = 0; userAttributeNamesIndex < userAttributeNamesJsonList.GetLength(); ++userAttributeNamesIndex)
   {
     userAttributeNamesJsonList[userAttributeNamesIndex].AsString(m_userAttributeNames[userAttributeNamesIndex]);
   }
   payload.WithArray("UserAttributeNames", std::move(userAttributeNamesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AdminDeleteUserAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminDeleteUserAttributes"));
  return headers;

}



