/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomMemoryStrategyInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CustomMemoryStrategyInput::CustomMemoryStrategyInput(JsonView jsonValue) { *this = jsonValue; }

CustomMemoryStrategyInput& CustomMemoryStrategyInput::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomMemoryStrategyInput::Jsonize() const {
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

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
