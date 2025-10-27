/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StopRuntimeSessionRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String StopRuntimeSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopRuntimeSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_runtimeSessionIdHasBeenSet) {
    ss << m_runtimeSessionId;
    headers.emplace("x-amzn-bedrock-agentcore-runtime-session-id", ss.str());
    ss.str("");
  }

  return headers;
}

void StopRuntimeSessionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_qualifierHasBeenSet) {
    ss << m_qualifier;
    uri.AddQueryStringParameter("qualifier", ss.str());
    ss.str("");
  }
}
