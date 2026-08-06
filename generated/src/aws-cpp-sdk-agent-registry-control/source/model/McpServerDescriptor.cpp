/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/McpServerDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

McpServerDescriptor::McpServerDescriptor(JsonView jsonValue) { *this = jsonValue; }

McpServerDescriptor& McpServerDescriptor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSchemaVersion")) {
    m_dataSchemaVersion = jsonValue.GetString("dataSchemaVersion");
    m_dataSchemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalData")) {
    m_additionalData = jsonValue.GetObject("additionalData");
    m_additionalDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue McpServerDescriptor::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithString("data", m_data);
  }

  if (m_dataSchemaVersionHasBeenSet) {
    payload.WithString("dataSchemaVersion", m_dataSchemaVersion);
  }

  if (m_additionalDataHasBeenSet) {
    payload.WithObject("additionalData", m_additionalData.Jsonize());
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
