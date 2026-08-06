/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/McpToolsDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

McpToolsDescriptor::McpToolsDescriptor(JsonView jsonValue) { *this = jsonValue; }

McpToolsDescriptor& McpToolsDescriptor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSchemaVersion")) {
    m_dataSchemaVersion = jsonValue.GetString("dataSchemaVersion");
    m_dataSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue McpToolsDescriptor::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithString("data", m_data);
  }

  if (m_dataSchemaVersionHasBeenSet) {
    payload.WithString("dataSchemaVersion", m_dataSchemaVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
