/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AssociatePersonasToEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociatePersonasToEntitiesRequest::AssociatePersonasToEntitiesRequest() : 
    m_idHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_personasHasBeenSet(false)
{
}

Aws::String AssociatePersonasToEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_personasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> personasJsonList(m_personas.size());
   for(unsigned personasIndex = 0; personasIndex < personasJsonList.GetLength(); ++personasIndex)
   {
     personasJsonList[personasIndex].AsObject(m_personas[personasIndex].Jsonize());
   }
   payload.WithArray("Personas", std::move(personasJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociatePersonasToEntitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.AssociatePersonasToEntities"));
  return headers;

}




