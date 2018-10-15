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

#include <aws/servicecatalog/model/CreateServiceActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceActionRequest::CreateServiceActionRequest() : 
    m_nameHasBeenSet(false),
    m_definitionType(ServiceActionDefinitionType::NOT_SET),
    m_definitionTypeHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateServiceActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_definitionTypeHasBeenSet)
  {
   payload.WithString("DefinitionType", ServiceActionDefinitionTypeMapper::GetNameForServiceActionDefinitionType(m_definitionType));
  }

  if(m_definitionHasBeenSet)
  {
   JsonValue definitionJsonMap;
   for(auto& definitionItem : m_definition)
   {
     definitionJsonMap.WithString(ServiceActionDefinitionKeyMapper::GetNameForServiceActionDefinitionKey(definitionItem.first), definitionItem.second);
   }
   payload.WithObject("Definition", std::move(definitionJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.CreateServiceAction"));
  return headers;

}




