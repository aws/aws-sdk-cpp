/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluatorStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluatorStatistics::EvaluatorStatistics(JsonView jsonValue) { *this = jsonValue; }

EvaluatorStatistics& EvaluatorStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("averageScore")) {
    m_averageScore = jsonValue.GetDouble("averageScore");
    m_averageScoreHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorStatistics::Jsonize() const {
  JsonValue payload;

  if (m_averageScoreHasBeenSet) {
    payload.WithDouble("averageScore", m_averageScore);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
