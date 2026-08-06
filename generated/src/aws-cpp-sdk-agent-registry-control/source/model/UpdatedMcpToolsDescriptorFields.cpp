/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedMcpToolsDescriptorFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedMcpToolsDescriptorFields::UpdatedMcpToolsDescriptorFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedMcpToolsDescriptorFields& UpdatedMcpToolsDescriptorFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSchemaVersion")) {
    m_dataSchemaVersion = jsonValue.GetObject("dataSchemaVersion");
    m_dataSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedMcpToolsDescriptorFields::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithObject("data", m_data.Jsonize());
  }

  if (m_dataSchemaVersionHasBeenSet) {
    payload.WithObject("dataSchemaVersion", m_dataSchemaVersion.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
