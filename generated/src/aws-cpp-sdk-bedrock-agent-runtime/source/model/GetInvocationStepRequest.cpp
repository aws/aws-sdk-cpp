/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetInvocationStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetInvocationStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invocationIdentifierHasBeenSet)
  {
   payload.WithString("invocationIdentifier", m_invocationIdentifier);

  }

  return payload.View().WriteReadable();
}




