/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OptimizePromptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String OptimizePromptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_targetModelIdHasBeenSet)
  {
   payload.WithString("targetModelId", m_targetModelId);

  }

  return payload.View().WriteReadable();
}




