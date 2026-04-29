/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SystemPromptRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SystemPromptRecommendationResult::SystemPromptRecommendationResult(JsonView jsonValue) { *this = jsonValue; }

SystemPromptRecommendationResult& SystemPromptRecommendationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendedSystemPrompt")) {
    m_recommendedSystemPrompt = jsonValue.GetString("recommendedSystemPrompt");
    m_recommendedSystemPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationBundle")) {
    m_configurationBundle = jsonValue.GetObject("configurationBundle");
    m_configurationBundleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemPromptRecommendationResult::Jsonize() const {
  JsonValue payload;

  if (m_recommendedSystemPromptHasBeenSet) {
    payload.WithString("recommendedSystemPrompt", m_recommendedSystemPrompt);
  }

  if (m_configurationBundleHasBeenSet) {
    payload.WithObject("configurationBundle", m_configurationBundle.Jsonize());
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
