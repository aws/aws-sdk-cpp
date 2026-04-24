/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SaveBrowserSessionProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SaveBrowserSessionProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_browserIdentifierHasBeenSet) {
    payload.WithString("browserIdentifier", m_browserIdentifier);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SaveBrowserSessionProfileRequest::GetRequestSpecificHeaders() const {
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
