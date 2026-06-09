/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DeploymentLifecycleHookTimeoutConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DeploymentLifecycleHookTimeoutConfiguration::DeploymentLifecycleHookTimeoutConfiguration(JsonView jsonValue) { *this = jsonValue; }

DeploymentLifecycleHookTimeoutConfiguration& DeploymentLifecycleHookTimeoutConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeoutInMinutes")) {
    m_timeoutInMinutes = jsonValue.GetInteger("timeoutInMinutes");
    m_timeoutInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = DeploymentLifecycleHookActionMapper::GetDeploymentLifecycleHookActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentLifecycleHookTimeoutConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_timeoutInMinutesHasBeenSet) {
    payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", DeploymentLifecycleHookActionMapper::GetNameForDeploymentLifecycleHookAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
