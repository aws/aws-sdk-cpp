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
   Array<JsonValue> customAttributesJsonList(m_customAttributes.size());
   for(unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex)
   {
     customAttributesJsonList[customAttributesIndex].AsObject(m_customAttributes[customAttributesIndex].Jsonize());
   }
   payload.WithArray("CustomAttributes", std::move(customAttributesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AddCustomAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AddCustomAttributes"));
  return headers;

}



