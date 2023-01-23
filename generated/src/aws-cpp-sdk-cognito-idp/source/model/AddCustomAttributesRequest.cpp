/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AddCustomAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddCustomAttributesRequest::AddCustomAttributesRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_customAttributesHasBeenSet(false)
{
}

Aws::String AddCustomAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_customAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customAttributesJsonList(m_customAttributes.size());
   for(unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex)
   {
     customAttributesJsonList[customAttributesIndex].AsObject(m_customAttributes[customAttributesIndex].Jsonize());
   }
   payload.WithArray("CustomAttributes", std::move(customAttributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddCustomAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AddCustomAttributes"));
  return headers;

}




