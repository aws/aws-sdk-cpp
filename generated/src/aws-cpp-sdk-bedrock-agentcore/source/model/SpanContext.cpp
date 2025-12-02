/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SpanContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SpanContext::SpanContext(JsonView jsonValue) { *this = jsonValue; }

SpanContext& SpanContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceId")) {
    m_traceId = jsonValue.GetString("traceId");
    m_traceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spanId")) {
    m_spanId = jsonValue.GetString("spanId");
    m_spanIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanContext::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_traceIdHasBeenSet) {
    payload.WithString("traceId", m_traceId);
  }

  if (m_spanIdHasBeenSet) {
    payload.WithString("spanId", m_spanId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
