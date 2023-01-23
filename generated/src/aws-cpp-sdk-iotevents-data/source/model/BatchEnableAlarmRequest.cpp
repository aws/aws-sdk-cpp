/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchEnableAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchEnableAlarmRequest::BatchEnableAlarmRequest() : 
    m_enableActionRequestsHasBeenSet(false)
{
}

Aws::String BatchEnableAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableActionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enableActionRequestsJsonList(m_enableActionRequests.size());
   for(unsigned enableActionRequestsIndex = 0; enableActionRequestsIndex < enableActionRequestsJsonList.GetLength(); ++enableActionRequestsIndex)
   {
     enableActionRequestsJsonList[enableActionRequestsIndex].AsObject(m_enableActionRequests[enableActionRequestsIndex].Jsonize());
   }
   payload.WithArray("enableActionRequests", std::move(enableActionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




