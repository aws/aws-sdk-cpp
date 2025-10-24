﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SummaryMemoryStrategyInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SummaryMemoryStrategyInput::SummaryMemoryStrategyInput(JsonView jsonValue) { *this = jsonValue; }

SummaryMemoryStrategyInput& SummaryMemoryStrategyInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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

JsonValue SummaryMemoryStrategyInput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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
