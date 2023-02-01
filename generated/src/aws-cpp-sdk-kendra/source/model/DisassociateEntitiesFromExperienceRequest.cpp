/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DisassociateEntitiesFromExperienceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateEntitiesFromExperienceRequest::DisassociateEntitiesFromExperienceRequest() : 
    m_idHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_entityListHasBeenSet(false)
{
}

Aws::String DisassociateEntitiesFromExperienceRequest::SerializePayload() const
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

  if(m_entityListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityListJsonList(m_entityList.size());
   for(unsigned entityListIndex = 0; entityListIndex < entityListJsonList.GetLength(); ++entityListIndex)
   {
     entityListJsonList[entityListIndex].AsObject(m_entityList[entityListIndex].Jsonize());
   }
   payload.WithArray("EntityList", std::move(entityListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateEntitiesFromExperienceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.DisassociateEntitiesFromExperience"));
  return headers;

}




