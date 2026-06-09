/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessLiteLlmModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessLiteLlmModelConfig::HarnessLiteLlmModelConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessLiteLlmModelConfig& HarnessLiteLlmModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeyArn")) {
    m_apiKeyArn = jsonValue.GetString("apiKeyArn");
    m_apiKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiBase")) {
    m_apiBase = jsonValue.GetString("apiBase");
    m_apiBaseHasBeenSet = true;
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
  if (jsonValue.ValueExists("additionalParams")) {
    m_additionalParams = jsonValue.GetObject("additionalParams");
    m_additionalParamsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessLiteLlmModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_apiKeyArnHasBeenSet) {
    payload.WithString("apiKeyArn", m_apiKeyArn);
  }

  if (m_apiBaseHasBeenSet) {
    payload.WithString("apiBase", m_apiBase);
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

  if (m_additionalParamsHasBeenSet) {
    if (!m_additionalParams.View().IsNull()) {
      payload.WithObject("additionalParams", JsonValue(m_additionalParams.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
