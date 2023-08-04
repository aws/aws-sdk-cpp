/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateRoutingProfileAgentAvailabilityTimerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingProfileAgentAvailabilityTimerRequest::UpdateRoutingProfileAgentAvailabilityTimerRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_agentAvailabilityTimer(AgentAvailabilityTimer::NOT_SET),
    m_agentAvailabilityTimerHasBeenSet(false)
{
}

Aws::String UpdateRoutingProfileAgentAvailabilityTimerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentAvailabilityTimerHasBeenSet)
  {
   payload.WithString("AgentAvailabilityTimer", AgentAvailabilityTimerMapper::GetNameForAgentAvailabilityTimer(m_agentAvailabilityTimer));
  }

  return payload.View().WriteReadable();
}




