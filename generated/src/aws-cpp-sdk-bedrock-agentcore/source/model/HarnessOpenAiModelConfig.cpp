/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessOpenAiModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessOpenAiModelConfig::HarnessOpenAiModelConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessOpenAiModelConfig& HarnessOpenAiModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeyArn")) {
    m_apiKeyArn = jsonValue.GetString("apiKeyArn");
    m_apiKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTokens")) {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("temperature")) {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topP")) {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessOpenAiModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_apiKeyArnHasBeenSet) {
    payload.WithString("apiKeyArn", m_apiKeyArn);
  }

  if (m_maxTokensHasBeenSet) {
    payload.WithInteger("maxTokens", m_maxTokens);
  }

  if (m_temperatureHasBeenSet) {
    payload.WithDouble("temperature", m_temperature);
  }

  if (m_topPHasBeenSet) {
    payload.WithDouble("topP", m_topP);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
