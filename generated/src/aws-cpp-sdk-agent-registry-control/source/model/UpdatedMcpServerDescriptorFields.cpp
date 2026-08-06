/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedMcpServerDescriptorFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedMcpServerDescriptorFields::UpdatedMcpServerDescriptorFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedMcpServerDescriptorFields& UpdatedMcpServerDescriptorFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSchemaVersion")) {
    m_dataSchemaVersion = jsonValue.GetObject("dataSchemaVersion");
    m_dataSchemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalData")) {
    m_additionalData = jsonValue.GetObject("additionalData");
    m_additionalDataHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedMcpServerDescriptorFields::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithObject("data", m_data.Jsonize());
  }

  if (m_dataSchemaVersionHasBeenSet) {
    payload.WithObject("dataSchemaVersion", m_dataSchemaVersion.Jsonize());
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_additionalDataHasBeenSet) {
    payload.WithObject("additionalData", m_additionalData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
