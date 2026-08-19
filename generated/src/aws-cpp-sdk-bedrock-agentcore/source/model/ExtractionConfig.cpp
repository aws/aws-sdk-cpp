/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExtractionConfig::ExtractionConfig(JsonView jsonValue) { *this = jsonValue; }

ExtractionConfig& ExtractionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("namespaceVariables")) {
    Aws::Map<Aws::String, JsonView> namespaceVariablesJsonMap = jsonValue.GetObject("namespaceVariables").GetAllObjects();
    for (auto& namespaceVariablesItem : namespaceVariablesJsonMap) {
      m_namespaceVariables[namespaceVariablesItem.first] = namespaceVariablesItem.second.AsString();
    }
    m_namespaceVariablesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionConfig::Jsonize() const {
  JsonValue payload;

  if (m_namespaceVariablesHasBeenSet) {
    JsonValue namespaceVariablesJsonMap;
    for (auto& namespaceVariablesItem : m_namespaceVariables) {
      namespaceVariablesJsonMap.WithString(namespaceVariablesItem.first, namespaceVariablesItem.second);
    }
    payload.WithObject("namespaceVariables", std::move(namespaceVariablesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
