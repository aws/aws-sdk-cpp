/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RecommendationConfig::RecommendationConfig(JsonView jsonValue) { *this = jsonValue; }

RecommendationConfig& RecommendationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemPromptRecommendationConfig")) {
    m_systemPromptRecommendationConfig = jsonValue.GetObject("systemPromptRecommendationConfig");
    m_systemPromptRecommendationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolDescriptionRecommendationConfig")) {
    m_toolDescriptionRecommendationConfig = jsonValue.GetObject("toolDescriptionRecommendationConfig");
    m_toolDescriptionRecommendationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationConfig::Jsonize() const {
  JsonValue payload;

  if (m_systemPromptRecommendationConfigHasBeenSet) {
    payload.WithObject("systemPromptRecommendationConfig", m_systemPromptRecommendationConfig.Jsonize());
  }

  if (m_toolDescriptionRecommendationConfigHasBeenSet) {
    payload.WithObject("toolDescriptionRecommendationConfig", m_toolDescriptionRecommendationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
