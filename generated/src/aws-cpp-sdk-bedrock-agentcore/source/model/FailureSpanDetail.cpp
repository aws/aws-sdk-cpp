/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FailureSpanDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

FailureSpanDetail::FailureSpanDetail(JsonView jsonValue) { *this = jsonValue; }

FailureSpanDetail& FailureSpanDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spanId")) {
    m_spanId = jsonValue.GetString("spanId");
    m_spanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceId")) {
    m_traceId = jsonValue.GetString("traceId");
    m_traceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signals")) {
    Aws::Utils::Array<JsonView> signalsJsonList = jsonValue.GetArray("signals");
    for (unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex) {
      m_signals.push_back(signalsJsonList[signalsIndex].AsObject());
    }
    m_signalsHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureSpanDetail::Jsonize() const {
  JsonValue payload;

  if (m_spanIdHasBeenSet) {
    payload.WithString("spanId", m_spanId);
  }

  if (m_traceIdHasBeenSet) {
    payload.WithString("traceId", m_traceId);
  }

  if (m_signalsHasBeenSet) {
    Aws::Utils::Array<JsonValue> signalsJsonList(m_signals.size());
    for (unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex) {
      signalsJsonList[signalsIndex].AsObject(m_signals[signalsIndex].Jsonize());
    }
    payload.WithArray("signals", std::move(signalsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
