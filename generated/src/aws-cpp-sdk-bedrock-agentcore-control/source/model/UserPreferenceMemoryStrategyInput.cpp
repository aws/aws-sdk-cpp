/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UserPreferenceMemoryStrategyInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UserPreferenceMemoryStrategyInput::UserPreferenceMemoryStrategyInput(JsonView jsonValue) { *this = jsonValue; }

UserPreferenceMemoryStrategyInput& UserPreferenceMemoryStrategyInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespaceTemplates")) {
    Aws::Utils::Array<JsonView> namespaceTemplatesJsonList = jsonValue.GetArray("namespaceTemplates");
    for (unsigned namespaceTemplatesIndex = 0; namespaceTemplatesIndex < namespaceTemplatesJsonList.GetLength();
         ++namespaceTemplatesIndex) {
      m_namespaceTemplates.push_back(namespaceTemplatesJsonList[namespaceTemplatesIndex].AsString());
    }
    m_namespaceTemplatesHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPreferenceMemoryStrategyInput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_namespaceTemplatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namespaceTemplatesJsonList(m_namespaceTemplates.size());
    for (unsigned namespaceTemplatesIndex = 0; namespaceTemplatesIndex < namespaceTemplatesJsonList.GetLength();
         ++namespaceTemplatesIndex) {
      namespaceTemplatesJsonList[namespaceTemplatesIndex].AsString(m_namespaceTemplates[namespaceTemplatesIndex]);
    }
    payload.WithArray("namespaceTemplates", std::move(namespaceTemplatesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
