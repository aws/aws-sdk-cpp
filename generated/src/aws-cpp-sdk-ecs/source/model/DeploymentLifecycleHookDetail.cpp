/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DeploymentLifecycleHookDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DeploymentLifecycleHookDetail::DeploymentLifecycleHookDetail(JsonView jsonValue) { *this = jsonValue; }

DeploymentLifecycleHookDetail& DeploymentLifecycleHookDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hookId")) {
    m_hookId = jsonValue.GetString("hookId");
    m_hookIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetType")) {
    m_targetType = DeploymentLifecycleHookTargetTypeMapper::GetDeploymentLifecycleHookTargetTypeForName(jsonValue.GetString("targetType"));
    m_targetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetArn")) {
    m_targetArn = jsonValue.GetString("targetArn");
    m_targetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DeploymentLifecycleHookStatusMapper::GetDeploymentLifecycleHookStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutAction")) {
    m_timeoutAction = DeploymentLifecycleHookActionMapper::GetDeploymentLifecycleHookActionForName(jsonValue.GetString("timeoutAction"));
    m_timeoutActionHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentLifecycleHookDetail::Jsonize() const {
  JsonValue payload;

  if (m_hookIdHasBeenSet) {
    payload.WithString("hookId", m_hookId);
  }

  if (m_targetTypeHasBeenSet) {
    payload.WithString("targetType", DeploymentLifecycleHookTargetTypeMapper::GetNameForDeploymentLifecycleHookTargetType(m_targetType));
  }

  if (m_targetArnHasBeenSet) {
    payload.WithString("targetArn", m_targetArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DeploymentLifecycleHookStatusMapper::GetNameForDeploymentLifecycleHookStatus(m_status));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_timeoutActionHasBeenSet) {
    payload.WithString("timeoutAction", DeploymentLifecycleHookActionMapper::GetNameForDeploymentLifecycleHookAction(m_timeoutAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
