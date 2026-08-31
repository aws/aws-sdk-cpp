/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AutoDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AutoDetection::AutoDetection(JsonView jsonValue) { *this = jsonValue; }

AutoDetection& AutoDetection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AutoDetectionStatusMapper::GetAutoDetectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoDetection::Jsonize() const {
  JsonValue payload;

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutoDetectionStatusMapper::GetNameForAutoDetectionStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
