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

OptimizePromptRequest::OptimizePromptRequest() : 
    m_inputHasBeenSet(false),
    m_targetModelIdHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

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




