/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OpenResponsesEvaluatorModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OpenResponsesEvaluatorModelConfig::OpenResponsesEvaluatorModelConfig(JsonView jsonValue) { *this = jsonValue; }

OpenResponsesEvaluatorModelConfig& OpenResponsesEvaluatorModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxOutputTokens")) {
    m_maxOutputTokens = jsonValue.GetInteger("maxOutputTokens");
    m_maxOutputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("temperature")) {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topP")) {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasoning")) {
    m_reasoning = jsonValue.GetObject("reasoning");
    m_reasoningHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenResponsesEvaluatorModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_maxOutputTokensHasBeenSet) {
    payload.WithInteger("maxOutputTokens", m_maxOutputTokens);
  }

  if (m_temperatureHasBeenSet) {
    payload.WithDouble("temperature", m_temperature);
  }

  if (m_topPHasBeenSet) {
    payload.WithDouble("topP", m_topP);
  }

  if (m_reasoningHasBeenSet) {
    payload.WithObject("reasoning", m_reasoning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
