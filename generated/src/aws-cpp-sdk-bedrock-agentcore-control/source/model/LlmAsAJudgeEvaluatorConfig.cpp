/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LlmAsAJudgeEvaluatorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LlmAsAJudgeEvaluatorConfig::LlmAsAJudgeEvaluatorConfig(JsonView jsonValue) { *this = jsonValue; }

LlmAsAJudgeEvaluatorConfig& LlmAsAJudgeEvaluatorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instructions")) {
    m_instructions = jsonValue.GetString("instructions");
    m_instructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ratingScale")) {
    m_ratingScale = jsonValue.GetObject("ratingScale");
    m_ratingScaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelConfig")) {
    m_modelConfig = jsonValue.GetObject("modelConfig");
    m_modelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue LlmAsAJudgeEvaluatorConfig::Jsonize() const {
  JsonValue payload;

  if (m_instructionsHasBeenSet) {
    payload.WithString("instructions", m_instructions);
  }

  if (m_ratingScaleHasBeenSet) {
    payload.WithObject("ratingScale", m_ratingScale.Jsonize());
  }

  if (m_modelConfigHasBeenSet) {
    payload.WithObject("modelConfig", m_modelConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
