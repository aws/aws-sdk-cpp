/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeCodeInterpreterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", ToolNameMapper::GetNameForToolName(m_name));
  }

  if(m_argumentsHasBeenSet)
  {
   payload.WithObject("arguments", m_arguments.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeCodeInterpreterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_sessionIdHasBeenSet)
  {
    ss << m_sessionId;
    headers.emplace("x-amzn-code-interpreter-session-id",  ss.str());
    ss.str("");
  }

  return headers;

}




