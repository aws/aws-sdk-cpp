/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InvokeAgentRequest::InvokeAgentRequest() : 
    m_agentAliasIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_enableTrace(false),
    m_enableTraceHasBeenSet(false),
    m_endSession(false),
    m_endSessionHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

Aws::String InvokeAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableTraceHasBeenSet)
  {
   payload.WithBool("enableTrace", m_enableTrace);

  }

  if(m_endSessionHasBeenSet)
  {
   payload.WithBool("endSession", m_endSession);

  }

  if(m_inputTextHasBeenSet)
  {
   payload.WithString("inputText", m_inputText);

  }

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  return payload.View().WriteReadable();
}




