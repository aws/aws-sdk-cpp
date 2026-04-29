/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RecommendationResult::RecommendationResult(JsonView jsonValue) { *this = jsonValue; }

RecommendationResult& RecommendationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemPromptRecommendationResult")) {
    m_systemPromptRecommendationResult = jsonValue.GetObject("systemPromptRecommendationResult");
    m_systemPromptRecommendationResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolDescriptionRecommendationResult")) {
    m_toolDescriptionRecommendationResult = jsonValue.GetObject("toolDescriptionRecommendationResult");
    m_toolDescriptionRecommendationResultHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationResult::Jsonize() const {
  JsonValue payload;

  if (m_systemPromptRecommendationResultHasBeenSet) {
    payload.WithObject("systemPromptRecommendationResult", m_systemPromptRecommendationResult.Jsonize());
  }

  if (m_toolDescriptionRecommendationResultHasBeenSet) {
    payload.WithObject("toolDescriptionRecommendationResult", m_toolDescriptionRecommendationResult.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
