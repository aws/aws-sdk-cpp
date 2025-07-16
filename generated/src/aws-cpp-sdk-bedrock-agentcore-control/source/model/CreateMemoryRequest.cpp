/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateMemoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMemoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_memoryExecutionRoleArnHasBeenSet)
  {
   payload.WithString("memoryExecutionRoleArn", m_memoryExecutionRoleArn);

  }

  if(m_eventExpiryDurationHasBeenSet)
  {
   payload.WithInteger("eventExpiryDuration", m_eventExpiryDuration);

  }

  if(m_memoryStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memoryStrategiesJsonList(m_memoryStrategies.size());
   for(unsigned memoryStrategiesIndex = 0; memoryStrategiesIndex < memoryStrategiesJsonList.GetLength(); ++memoryStrategiesIndex)
   {
     memoryStrategiesJsonList[memoryStrategiesIndex].AsObject(m_memoryStrategies[memoryStrategiesIndex].Jsonize());
   }
   payload.WithArray("memoryStrategies", std::move(memoryStrategiesJsonList));

  }

  return payload.View().WriteReadable();
}




