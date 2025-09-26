/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateRoutingProfileQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateRoutingProfileQueuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueConfigsJsonList(m_queueConfigs.size());
   for(unsigned queueConfigsIndex = 0; queueConfigsIndex < queueConfigsJsonList.GetLength(); ++queueConfigsIndex)
   {
     queueConfigsJsonList[queueConfigsIndex].AsObject(m_queueConfigs[queueConfigsIndex].Jsonize());
   }
   payload.WithArray("QueueConfigs", std::move(queueConfigsJsonList));

  }

  if(m_manualAssignmentQueueConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> manualAssignmentQueueConfigsJsonList(m_manualAssignmentQueueConfigs.size());
   for(unsigned manualAssignmentQueueConfigsIndex = 0; manualAssignmentQueueConfigsIndex < manualAssignmentQueueConfigsJsonList.GetLength(); ++manualAssignmentQueueConfigsIndex)
   {
     manualAssignmentQueueConfigsJsonList[manualAssignmentQueueConfigsIndex].AsObject(m_manualAssignmentQueueConfigs[manualAssignmentQueueConfigsIndex].Jsonize());
   }
   payload.WithArray("ManualAssignmentQueueConfigs", std::move(manualAssignmentQueueConfigsJsonList));

  }

  return payload.View().WriteReadable();
}




