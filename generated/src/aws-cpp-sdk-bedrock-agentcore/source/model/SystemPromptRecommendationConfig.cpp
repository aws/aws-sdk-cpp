/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SystemPromptRecommendationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SystemPromptRecommendationConfig::SystemPromptRecommendationConfig(JsonView jsonValue) { *this = jsonValue; }

SystemPromptRecommendationConfig& SystemPromptRecommendationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemPrompt")) {
    m_systemPrompt = jsonValue.GetObject("systemPrompt");
    m_systemPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentTraces")) {
    m_agentTraces = jsonValue.GetObject("agentTraces");
    m_agentTracesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationConfig")) {
    m_evaluationConfig = jsonValue.GetObject("evaluationConfig");
    m_evaluationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemPromptRecommendationConfig::Jsonize() const {
  JsonValue payload;

  if (m_systemPromptHasBeenSet) {
    payload.WithObject("systemPrompt", m_systemPrompt.Jsonize());
  }

  if (m_agentTracesHasBeenSet) {
    payload.WithObject("agentTraces", m_agentTraces.Jsonize());
  }

  if (m_evaluationConfigHasBeenSet) {
    payload.WithObject("evaluationConfig", m_evaluationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
