/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolDescriptionRecommendationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ToolDescriptionRecommendationConfig::ToolDescriptionRecommendationConfig(JsonView jsonValue) { *this = jsonValue; }

ToolDescriptionRecommendationConfig& ToolDescriptionRecommendationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolDescription")) {
    m_toolDescription = jsonValue.GetObject("toolDescription");
    m_toolDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentTraces")) {
    m_agentTraces = jsonValue.GetObject("agentTraces");
    m_agentTracesHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolDescriptionRecommendationConfig::Jsonize() const {
  JsonValue payload;

  if (m_toolDescriptionHasBeenSet) {
    payload.WithObject("toolDescription", m_toolDescription.Jsonize());
  }

  if (m_agentTracesHasBeenSet) {
    payload.WithObject("agentTraces", m_agentTraces.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
