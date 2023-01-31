/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/UpdateAgentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentStatusRequest::UpdateAgentStatusRequest() : 
    m_agentIdHasBeenSet(false),
    m_aggregateStatusHasBeenSet(false),
    m_componentStatusesHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String UpdateAgentStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aggregateStatusHasBeenSet)
  {
   payload.WithObject("aggregateStatus", m_aggregateStatus.Jsonize());

  }

  if(m_componentStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentStatusesJsonList(m_componentStatuses.size());
   for(unsigned componentStatusesIndex = 0; componentStatusesIndex < componentStatusesJsonList.GetLength(); ++componentStatusesIndex)
   {
     componentStatusesJsonList[componentStatusesIndex].AsObject(m_componentStatuses[componentStatusesIndex].Jsonize());
   }
   payload.WithArray("componentStatuses", std::move(componentStatusesJsonList));

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload.View().WriteReadable();
}




