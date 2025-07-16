/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateMemoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMemoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventExpiryDurationHasBeenSet)
  {
   payload.WithInteger("eventExpiryDuration", m_eventExpiryDuration);

  }

  if(m_memoryExecutionRoleArnHasBeenSet)
  {
   payload.WithString("memoryExecutionRoleArn", m_memoryExecutionRoleArn);

  }

  if(m_memoryStrategiesHasBeenSet)
  {
   payload.WithObject("memoryStrategies", m_memoryStrategies.Jsonize());

  }

  return payload.View().WriteReadable();
}




