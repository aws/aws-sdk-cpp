/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableTraceHasBeenSet)
  {
   payload.WithBool("enableTrace", m_enableTrace);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsObject(m_inputs[inputsIndex].Jsonize());
   }
   payload.WithArray("inputs", std::move(inputsJsonList));

  }

  if(m_modelPerformanceConfigurationHasBeenSet)
  {
   payload.WithObject("modelPerformanceConfiguration", m_modelPerformanceConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




