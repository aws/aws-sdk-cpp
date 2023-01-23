/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchDisableAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisableAlarmRequest::BatchDisableAlarmRequest() : 
    m_disableActionRequestsHasBeenSet(false)
{
}

Aws::String BatchDisableAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_disableActionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disableActionRequestsJsonList(m_disableActionRequests.size());
   for(unsigned disableActionRequestsIndex = 0; disableActionRequestsIndex < disableActionRequestsJsonList.GetLength(); ++disableActionRequestsIndex)
   {
     disableActionRequestsJsonList[disableActionRequestsIndex].AsObject(m_disableActionRequests[disableActionRequestsIndex].Jsonize());
   }
   payload.WithArray("disableActionRequests", std::move(disableActionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




