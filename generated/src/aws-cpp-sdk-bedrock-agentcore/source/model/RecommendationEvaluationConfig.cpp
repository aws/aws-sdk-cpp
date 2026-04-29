/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationEvaluationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RecommendationEvaluationConfig::RecommendationEvaluationConfig(JsonView jsonValue) { *this = jsonValue; }

RecommendationEvaluationConfig& RecommendationEvaluationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluators")) {
    Aws::Utils::Array<JsonView> evaluatorsJsonList = jsonValue.GetArray("evaluators");
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      m_evaluators.push_back(evaluatorsJsonList[evaluatorsIndex].AsObject());
    }
    m_evaluatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationEvaluationConfig::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorsJsonList(m_evaluators.size());
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      evaluatorsJsonList[evaluatorsIndex].AsObject(m_evaluators[evaluatorsIndex].Jsonize());
    }
    payload.WithArray("evaluators", std::move(evaluatorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
