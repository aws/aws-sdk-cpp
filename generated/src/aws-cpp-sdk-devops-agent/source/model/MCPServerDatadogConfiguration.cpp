/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerDatadogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerDatadogConfiguration::MCPServerDatadogConfiguration(JsonView jsonValue) { *this = jsonValue; }

MCPServerDatadogConfiguration& MCPServerDatadogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabledElevatedTools")) {
    Aws::Utils::Array<JsonView> enabledElevatedToolsJsonList = jsonValue.GetArray("enabledElevatedTools");
    for (unsigned enabledElevatedToolsIndex = 0; enabledElevatedToolsIndex < enabledElevatedToolsJsonList.GetLength();
         ++enabledElevatedToolsIndex) {
      m_enabledElevatedTools.push_back(enabledElevatedToolsJsonList[enabledElevatedToolsIndex].AsObject());
    }
    m_enabledElevatedToolsHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerDatadogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledElevatedToolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledElevatedToolsJsonList(m_enabledElevatedTools.size());
    for (unsigned enabledElevatedToolsIndex = 0; enabledElevatedToolsIndex < enabledElevatedToolsJsonList.GetLength();
         ++enabledElevatedToolsIndex) {
      enabledElevatedToolsJsonList[enabledElevatedToolsIndex].AsObject(m_enabledElevatedTools[enabledElevatedToolsIndex].Jsonize());
    }
    payload.WithArray("enabledElevatedTools", std::move(enabledElevatedToolsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
