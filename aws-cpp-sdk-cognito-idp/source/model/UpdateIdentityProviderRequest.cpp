/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateIdentityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIdentityProviderRequest::UpdateIdentityProviderRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_providerDetailsHasBeenSet(false),
    m_attributeMappingHasBeenSet(false),
    m_idpIdentifiersHasBeenSet(false)
{
}

Aws::String UpdateIdentityProviderRequest::SerializePayload() const
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
   Aws::Utils::Array<JsonValue> idpIdentifiersJsonList(m_idpIdentifiers.size());
   for(unsigned idpIdentifiersIndex = 0; idpIdentifiersIndex < idpIdentifiersJsonList.GetLength(); ++idpIdentifiersIndex)
   {
     idpIdentifiersJsonList[idpIdentifiersIndex].AsString(m_idpIdentifiers[idpIdentifiersIndex]);
   }
   payload.WithArray("IdpIdentifiers", std::move(idpIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIdentityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateIdentityProvider"));
  return headers;

}




