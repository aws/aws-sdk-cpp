/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ManagedApplicationAutoScalingPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ManagedApplicationAutoScalingPolicy::ManagedApplicationAutoScalingPolicy(JsonView jsonValue) { *this = jsonValue; }

ManagedApplicationAutoScalingPolicy& ManagedApplicationAutoScalingPolicy::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("policyType")) {
    m_policyType = jsonValue.GetString("policyType");
    m_policyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetValue")) {
    m_targetValue = jsonValue.GetDouble("targetValue");
    m_targetValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metric")) {
    m_metric = jsonValue.GetString("metric");
    m_metricHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedApplicationAutoScalingPolicy::Jsonize() const {
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

  if (m_policyTypeHasBeenSet) {
    payload.WithString("policyType", m_policyType);
  }

  if (m_targetValueHasBeenSet) {
    payload.WithDouble("targetValue", m_targetValue);
  }

  if (m_metricHasBeenSet) {
    payload.WithString("metric", m_metric);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
