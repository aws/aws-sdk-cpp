/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SystemPromptConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SystemPromptConfig::SystemPromptConfig(JsonView jsonValue) { *this = jsonValue; }

SystemPromptConfig& SystemPromptConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationBundle")) {
    m_configurationBundle = jsonValue.GetObject("configurationBundle");
    m_configurationBundleHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemPromptConfig::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_configurationBundleHasBeenSet) {
    payload.WithObject("configurationBundle", m_configurationBundle.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
