/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StartCodeInterpreterSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCodeInterpreterSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sessionTimeoutSecondsHasBeenSet) {
    payload.WithInteger("sessionTimeoutSeconds", m_sessionTimeoutSeconds);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartCodeInterpreterSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_traceIdHasBeenSet) {
    ss << m_traceId;
    headers.emplace("x-amzn-trace-id", ss.str());
    ss.str("");
  }

  if (m_traceParentHasBeenSet) {
    ss << m_traceParent;
    headers.emplace("traceparent", ss.str());
    ss.str("");
  }

  return headers;
}
