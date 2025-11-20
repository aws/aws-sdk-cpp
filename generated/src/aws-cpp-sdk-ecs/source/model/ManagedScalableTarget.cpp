/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ManagedScalableTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ManagedScalableTarget::ManagedScalableTarget(JsonView jsonValue) { *this = jsonValue; }

ManagedScalableTarget& ManagedScalableTarget::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("minCapacity")) {
    m_minCapacity = jsonValue.GetInteger("minCapacity");
    m_minCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxCapacity")) {
    m_maxCapacity = jsonValue.GetInteger("maxCapacity");
    m_maxCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedScalableTarget::Jsonize() const {
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

  if (m_minCapacityHasBeenSet) {
    payload.WithInteger("minCapacity", m_minCapacity);
  }

  if (m_maxCapacityHasBeenSet) {
    payload.WithInteger("maxCapacity", m_maxCapacity);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
