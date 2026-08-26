/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerSigV4Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerSigV4Configuration::MCPServerSigV4Configuration(JsonView jsonValue) { *this = jsonValue; }

MCPServerSigV4Configuration& MCPServerSigV4Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tools")) {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      m_tools.push_back(toolsJsonList[toolsIndex].AsString());
    }
    m_toolsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolDetails")) {
    Aws::Utils::Array<JsonView> toolDetailsJsonList = jsonValue.GetArray("toolDetails");
    for (unsigned toolDetailsIndex = 0; toolDetailsIndex < toolDetailsJsonList.GetLength(); ++toolDetailsIndex) {
      m_toolDetails.push_back(toolDetailsJsonList[toolDetailsIndex].AsObject());
    }
    m_toolDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerSigV4Configuration::Jsonize() const {
  JsonValue payload;

  if (m_toolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      toolsJsonList[toolsIndex].AsString(m_tools[toolsIndex]);
    }
    payload.WithArray("tools", std::move(toolsJsonList));
  }

  if (m_toolDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolDetailsJsonList(m_toolDetails.size());
    for (unsigned toolDetailsIndex = 0; toolDetailsIndex < toolDetailsJsonList.GetLength(); ++toolDetailsIndex) {
      toolDetailsJsonList[toolDetailsIndex].AsObject(m_toolDetails[toolDetailsIndex].Jsonize());
    }
    payload.WithArray("toolDetails", std::move(toolDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
