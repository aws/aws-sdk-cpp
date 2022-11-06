/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/PutPartnerEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPartnerEventsRequest::PutPartnerEventsRequest() : 
    m_entriesHasBeenSet(false)
{
}

Aws::String PutPartnerEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("Entries", std::move(entriesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutPartnerEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.PutPartnerEvents"));
  return headers;

}




