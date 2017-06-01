/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cognito-idp/model/CreateIdentityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIdentityProviderRequest::CreateIdentityProviderRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_providerType(IdentityProviderTypeType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_providerDetailsHasBeenSet(false),
    m_attributeMappingHasBeenSet(false),
    m_idpIdentifiersHasBeenSet(false)
{
}

Aws::String CreateIdentityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", IdentityProviderTypeTypeMapper::GetNameForIdentityProviderTypeType(m_providerType));
  }

  if(m_providerDetailsHasBeenSet)
  {
   JsonValue providerDetailsJsonMap;
   for(auto& providerDetailsItem : m_providerDetails)
   {
     providerDetailsJsonMap.WithString(providerDetailsItem.first, providerDetailsItem.second);
   }
   payload.WithObject("ProviderDetails", std::move(providerDetailsJsonMap));

  }

  if(m_attributeMappingHasBeenSet)
  {
   JsonValue attributeMappingJsonMap;
   for(auto& attributeMappingItem : m_attributeMapping)
   {
     attributeMappingJsonMap.WithString(attributeMappingItem.first, attributeMappingItem.second);
   }
   payload.WithObject("AttributeMapping", std::move(attributeMappingJsonMap));

  }

  if(m_idpIdentifiersHasBeenSet)
  {
   Array<JsonValue> idpIdentifiersJsonList(m_idpIdentifiers.size());
   for(unsigned idpIdentifiersIndex = 0; idpIdentifiersIndex < idpIdentifiersJsonList.GetLength(); ++idpIdentifiersIndex)
   {
     idpIdentifiersJsonList[idpIdentifiersIndex].AsString(m_idpIdentifiers[idpIdentifiersIndex]);
   }
   payload.WithArray("IdpIdentifiers", std::move(idpIdentifiersJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIdentityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CreateIdentityProvider"));
  return headers;

}




