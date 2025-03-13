/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PutInvocationStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutInvocationStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invocationIdentifierHasBeenSet)
  {
   payload.WithString("invocationIdentifier", m_invocationIdentifier);

  }

  if(m_invocationStepIdHasBeenSet)
  {
   payload.WithString("invocationStepId", m_invocationStepId);

  }

  if(m_invocationStepTimeHasBeenSet)
  {
   payload.WithString("invocationStepTime", m_invocationStepTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("payload", m_payload.Jsonize());

  }

  return payload.View().WriteReadable();
}




