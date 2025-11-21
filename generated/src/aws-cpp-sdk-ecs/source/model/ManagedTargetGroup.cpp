/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ManagedTargetGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ManagedTargetGroup::ManagedTargetGroup(JsonView jsonValue) { *this = jsonValue; }

ManagedTargetGroup& ManagedTargetGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ManagedResourceStatusMapper::GetManagedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckPath")) {
    m_healthCheckPath = jsonValue.GetString("healthCheckPath");
    m_healthCheckPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckPort")) {
    m_healthCheckPort = jsonValue.GetInteger("healthCheckPort");
    m_healthCheckPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedTargetGroup::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ManagedResourceStatusMapper::GetNameForManagedResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_healthCheckPathHasBeenSet) {
    payload.WithString("healthCheckPath", m_healthCheckPath);
  }

  if (m_healthCheckPortHasBeenSet) {
    payload.WithInteger("healthCheckPort", m_healthCheckPort);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
