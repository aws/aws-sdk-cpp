/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationTarget::EvaluationTarget(JsonView jsonValue) { *this = jsonValue; }

EvaluationTarget& EvaluationTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spanIds")) {
    Aws::Utils::Array<JsonView> spanIdsJsonList = jsonValue.GetArray("spanIds");
    for (unsigned spanIdsIndex = 0; spanIdsIndex < spanIdsJsonList.GetLength(); ++spanIdsIndex) {
      m_spanIds.push_back(spanIdsJsonList[spanIdsIndex].AsString());
    }
    m_spanIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceIds")) {
    Aws::Utils::Array<JsonView> traceIdsJsonList = jsonValue.GetArray("traceIds");
    for (unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex) {
      m_traceIds.push_back(traceIdsJsonList[traceIdsIndex].AsString());
    }
    m_traceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationTarget::Jsonize() const {
  JsonValue payload;

  if (m_spanIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> spanIdsJsonList(m_spanIds.size());
    for (unsigned spanIdsIndex = 0; spanIdsIndex < spanIdsJsonList.GetLength(); ++spanIdsIndex) {
      spanIdsJsonList[spanIdsIndex].AsString(m_spanIds[spanIdsIndex]);
    }
    payload.WithArray("spanIds", std::move(spanIdsJsonList));
  }

  if (m_traceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> traceIdsJsonList(m_traceIds.size());
    for (unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex) {
      traceIdsJsonList[traceIdsIndex].AsString(m_traceIds[traceIdsIndex]);
    }
    payload.WithArray("traceIds", std::move(traceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
