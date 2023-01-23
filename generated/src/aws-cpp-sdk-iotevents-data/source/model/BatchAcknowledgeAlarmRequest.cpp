/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchAcknowledgeAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchAcknowledgeAlarmRequest::BatchAcknowledgeAlarmRequest() : 
    m_acknowledgeActionRequestsHasBeenSet(false)
{
}

Aws::String BatchAcknowledgeAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acknowledgeActionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acknowledgeActionRequestsJsonList(m_acknowledgeActionRequests.size());
   for(unsigned acknowledgeActionRequestsIndex = 0; acknowledgeActionRequestsIndex < acknowledgeActionRequestsJsonList.GetLength(); ++acknowledgeActionRequestsIndex)
   {
     acknowledgeActionRequestsJsonList[acknowledgeActionRequestsIndex].AsObject(m_acknowledgeActionRequests[acknowledgeActionRequestsIndex].Jsonize());
   }
   payload.WithArray("acknowledgeActionRequests", std::move(acknowledgeActionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




