/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GenerateQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventDataStoresJsonList(m_eventDataStores.size());
   for(unsigned eventDataStoresIndex = 0; eventDataStoresIndex < eventDataStoresJsonList.GetLength(); ++eventDataStoresIndex)
   {
     eventDataStoresJsonList[eventDataStoresIndex].AsString(m_eventDataStores[eventDataStoresIndex]);
   }
   payload.WithArray("EventDataStores", std::move(eventDataStoresJsonList));

  }

  if(m_promptHasBeenSet)
  {
   payload.WithString("Prompt", m_prompt);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.GenerateQuery"));
  return headers;

}




