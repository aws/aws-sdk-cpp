/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerGrafanaConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerGrafanaConfiguration::MCPServerGrafanaConfiguration(JsonView jsonValue) { *this = jsonValue; }

MCPServerGrafanaConfiguration& MCPServerGrafanaConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tools")) {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      m_tools.push_back(toolsJsonList[toolsIndex].AsString());
    }
    m_toolsHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerGrafanaConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_organizationIdHasBeenSet) {
    payload.WithString("organizationId", m_organizationId);
  }

  if (m_toolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      toolsJsonList[toolsIndex].AsString(m_tools[toolsIndex]);
    }
    payload.WithArray("tools", std::move(toolsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
