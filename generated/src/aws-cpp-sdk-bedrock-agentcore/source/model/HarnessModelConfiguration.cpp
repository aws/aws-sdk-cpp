/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessModelConfiguration::HarnessModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessModelConfiguration& HarnessModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrockModelConfig")) {
    m_bedrockModelConfig = jsonValue.GetObject("bedrockModelConfig");
    m_bedrockModelConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openAiModelConfig")) {
    m_openAiModelConfig = jsonValue.GetObject("openAiModelConfig");
    m_openAiModelConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("geminiModelConfig")) {
    m_geminiModelConfig = jsonValue.GetObject("geminiModelConfig");
    m_geminiModelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bedrockModelConfigHasBeenSet) {
    payload.WithObject("bedrockModelConfig", m_bedrockModelConfig.Jsonize());
  }

  if (m_openAiModelConfigHasBeenSet) {
    payload.WithObject("openAiModelConfig", m_openAiModelConfig.Jsonize());
  }

  if (m_geminiModelConfigHasBeenSet) {
    payload.WithObject("geminiModelConfig", m_geminiModelConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
