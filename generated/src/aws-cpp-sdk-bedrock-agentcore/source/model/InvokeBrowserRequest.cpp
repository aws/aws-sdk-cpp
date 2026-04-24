/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeBrowserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeBrowserRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithObject("action", m_action.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeBrowserRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_sessionIdHasBeenSet) {
    ss << m_sessionId;
    headers.emplace("x-amzn-browser-session-id", ss.str());
    ss.str("");
  }

  return headers;
}
