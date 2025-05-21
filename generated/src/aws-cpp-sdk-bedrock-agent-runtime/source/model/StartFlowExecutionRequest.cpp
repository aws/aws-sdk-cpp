/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/StartFlowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartFlowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowExecutionNameHasBeenSet)
  {
   payload.WithString("flowExecutionName", m_flowExecutionName);

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




