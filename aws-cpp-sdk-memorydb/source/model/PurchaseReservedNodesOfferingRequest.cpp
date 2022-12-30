/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/PurchaseReservedNodesOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PurchaseReservedNodesOfferingRequest::PurchaseReservedNodesOfferingRequest() : 
    m_reservedNodesOfferingIdHasBeenSet(false),
    m_reservationIdHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PurchaseReservedNodesOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservedNodesOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedNodesOfferingId", m_reservedNodesOfferingId);

  }

  if(m_reservationIdHasBeenSet)
  {
   payload.WithString("ReservationId", m_reservationId);

  }

  if(m_nodeCountHasBeenSet)
  {
   payload.WithInteger("NodeCount", m_nodeCount);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PurchaseReservedNodesOfferingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.PurchaseReservedNodesOffering"));
  return headers;

}




