/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandInitialResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InvokeAgentRuntimeCommandInitialResponse::InvokeAgentRuntimeCommandInitialResponse(JsonView jsonValue) { *this = jsonValue; }

InvokeAgentRuntimeCommandInitialResponse& InvokeAgentRuntimeCommandInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeAgentRuntimeCommandInitialResponse::InvokeAgentRuntimeCommandInitialResponse(const Http::HeaderValueCollection& headers)
    : InvokeAgentRuntimeCommandInitialResponse() {
  const auto& runtimeSessionIdIter = headers.find("x-amzn-bedrock-agentcore-runtime-session-id");
  if (runtimeSessionIdIter != headers.end()) {
    m_runtimeSessionId = runtimeSessionIdIter->second;
    m_runtimeSessionIdHasBeenSet = true;
  }

  const auto& traceIdIter = headers.find("x-amzn-trace-id");
  if (traceIdIter != headers.end()) {
    m_traceId = traceIdIter->second;
    m_traceIdHasBeenSet = true;
  }

  const auto& traceParentIter = headers.find("traceparent");
  if (traceParentIter != headers.end()) {
    m_traceParent = traceParentIter->second;
    m_traceParentHasBeenSet = true;
  }

  const auto& traceStateIter = headers.find("tracestate");
  if (traceStateIter != headers.end()) {
    m_traceState = traceStateIter->second;
    m_traceStateHasBeenSet = true;
  }

  const auto& baggageIter = headers.find("baggage");
  if (baggageIter != headers.end()) {
    m_baggage = baggageIter->second;
    m_baggageHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if (contentTypeIter != headers.end()) {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }
}

JsonValue InvokeAgentRuntimeCommandInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
