/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DisassociatePersonasFromEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociatePersonasFromEntitiesRequest::DisassociatePersonasFromEntitiesRequest() : 
    m_idHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_entityIdsHasBeenSet(false)
{
}

Aws::String DisassociatePersonasFromEntitiesRequest::SerializePayload() const
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

  if(m_entityIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityIdsJsonList(m_entityIds.size());
   for(unsigned entityIdsIndex = 0; entityIdsIndex < entityIdsJsonList.GetLength(); ++entityIdsIndex)
   {
     entityIdsJsonList[entityIdsIndex].AsString(m_entityIds[entityIdsIndex]);
   }
   payload.WithArray("EntityIds", std::move(entityIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociatePersonasFromEntitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.DisassociatePersonasFromEntities"));
  return headers;

}




