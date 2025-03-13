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

Aws::String UpdateRoutingProfileAgentAvailabilityTimerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentAvailabilityTimerHasBeenSet)
  {
   payload.WithString("AgentAvailabilityTimer", AgentAvailabilityTimerMapper::GetNameForAgentAvailabilityTimer(m_agentAvailabilityTimer));
  }

  return payload.View().WriteReadable();
}




