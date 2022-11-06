/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchResetAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchResetAlarmRequest::BatchResetAlarmRequest() : 
    m_resetActionRequestsHasBeenSet(false)
{
}

Aws::String BatchResetAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resetActionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resetActionRequestsJsonList(m_resetActionRequests.size());
   for(unsigned resetActionRequestsIndex = 0; resetActionRequestsIndex < resetActionRequestsJsonList.GetLength(); ++resetActionRequestsIndex)
   {
     resetActionRequestsJsonList[resetActionRequestsIndex].AsObject(m_resetActionRequests[resetActionRequestsIndex].Jsonize());
   }
   payload.WithArray("resetActionRequests", std::move(resetActionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




