/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchSnoozeAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchSnoozeAlarmRequest::BatchSnoozeAlarmRequest() : 
    m_snoozeActionRequestsHasBeenSet(false)
{
}

Aws::String BatchSnoozeAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snoozeActionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snoozeActionRequestsJsonList(m_snoozeActionRequests.size());
   for(unsigned snoozeActionRequestsIndex = 0; snoozeActionRequestsIndex < snoozeActionRequestsJsonList.GetLength(); ++snoozeActionRequestsIndex)
   {
     snoozeActionRequestsJsonList[snoozeActionRequestsIndex].AsObject(m_snoozeActionRequests[snoozeActionRequestsIndex].Jsonize());
   }
   payload.WithArray("snoozeActionRequests", std::move(snoozeActionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




