/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String InvokeAgentRuntimeCommandRequest::SerializePayload() const {
  JsonValue payload;

  if (m_requestBodyHasBeenSet) {
    payload.WithObject("body", m_requestBody.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeAgentRuntimeCommandRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_contentTypeHasBeenSet) {
    ss << m_contentType;
    headers.emplace("content-type", ss.str());
    ss.str("");
  }

  if (m_acceptHasBeenSet) {
    ss << m_accept;
    headers.emplace("accept", ss.str());
    ss.str("");
  }

  if (m_runtimeSessionIdHasBeenSet) {
    ss << m_runtimeSessionId;
    headers.emplace("x-amzn-bedrock-agentcore-runtime-session-id", ss.str());
    ss.str("");
  }

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

  if (m_traceStateHasBeenSet) {
    ss << m_traceState;
    headers.emplace("tracestate", ss.str());
    ss.str("");
  }

  if (m_baggageHasBeenSet) {
    ss << m_baggage;
    headers.emplace("baggage", ss.str());
    ss.str("");
  }

  return headers;
}

void InvokeAgentRuntimeCommandRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_qualifierHasBeenSet) {
    ss << m_qualifier;
    uri.AddQueryStringParameter("qualifier", ss.str());
    ss.str("");
  }

  if (m_accountIdHasBeenSet) {
    ss << m_accountId;
    uri.AddQueryStringParameter("accountId", ss.str());
    ss.str("");
  }
}
