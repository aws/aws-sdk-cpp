/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluatorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluatorSummary::EvaluatorSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluatorSummary& EvaluatorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorId")) {
    m_evaluatorId = jsonValue.GetString("evaluatorId");
    m_evaluatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statistics")) {
    m_statistics = jsonValue.GetObject("statistics");
    m_statisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalEvaluated")) {
    m_totalEvaluated = jsonValue.GetInteger("totalEvaluated");
    m_totalEvaluatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFailed")) {
    m_totalFailed = jsonValue.GetInteger("totalFailed");
    m_totalFailedHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorSummary::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorIdHasBeenSet) {
    payload.WithString("evaluatorId", m_evaluatorId);
  }

  if (m_statisticsHasBeenSet) {
    payload.WithObject("statistics", m_statistics.Jsonize());
  }

  if (m_totalEvaluatedHasBeenSet) {
    payload.WithInteger("totalEvaluated", m_totalEvaluated);
  }

  if (m_totalFailedHasBeenSet) {
    payload.WithInteger("totalFailed", m_totalFailed);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
