/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EpisodicOverrideReflectionConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EpisodicOverrideReflectionConfigurationInput::EpisodicOverrideReflectionConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

EpisodicOverrideReflectionConfigurationInput& EpisodicOverrideReflectionConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appendToPrompt")) {
    m_appendToPrompt = jsonValue.GetString("appendToPrompt");
    m_appendToPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespaces")) {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for (unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex) {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }
  return *this;
}

JsonValue EpisodicOverrideReflectionConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_appendToPromptHasBeenSet) {
    payload.WithString("appendToPrompt", m_appendToPrompt);
  }

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_namespacesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
    for (unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex) {
      namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
    }
    payload.WithArray("namespaces", std::move(namespacesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
