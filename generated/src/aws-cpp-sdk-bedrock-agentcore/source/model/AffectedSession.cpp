/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AffectedSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AffectedSession::AffectedSession(JsonView jsonValue) { *this = jsonValue; }

AffectedSession& AffectedSession::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("explanation")) {
    m_explanation = jsonValue.GetString("explanation");
    m_explanationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixType")) {
    m_fixType = jsonValue.GetString("fixType");
    m_fixTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendation")) {
    m_recommendation = jsonValue.GetString("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureSpans")) {
    Aws::Utils::Array<JsonView> failureSpansJsonList = jsonValue.GetArray("failureSpans");
    for (unsigned failureSpansIndex = 0; failureSpansIndex < failureSpansJsonList.GetLength(); ++failureSpansIndex) {
      m_failureSpans.push_back(failureSpansJsonList[failureSpansIndex].AsObject());
    }
    m_failureSpansHasBeenSet = true;
  }
  return *this;
}

JsonValue AffectedSession::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_explanationHasBeenSet) {
    payload.WithString("explanation", m_explanation);
  }

  if (m_fixTypeHasBeenSet) {
    payload.WithString("fixType", m_fixType);
  }

  if (m_recommendationHasBeenSet) {
    payload.WithString("recommendation", m_recommendation);
  }

  if (m_failureSpansHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureSpansJsonList(m_failureSpans.size());
    for (unsigned failureSpansIndex = 0; failureSpansIndex < failureSpansJsonList.GetLength(); ++failureSpansIndex) {
      failureSpansJsonList[failureSpansIndex].AsObject(m_failureSpans[failureSpansIndex].Jsonize());
    }
    payload.WithArray("failureSpans", std::move(failureSpansJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
