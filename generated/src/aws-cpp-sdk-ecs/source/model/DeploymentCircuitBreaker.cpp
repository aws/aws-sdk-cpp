/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DeploymentCircuitBreaker.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DeploymentCircuitBreaker::DeploymentCircuitBreaker(JsonView jsonValue) { *this = jsonValue; }

DeploymentCircuitBreaker& DeploymentCircuitBreaker::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enable")) {
    m_enable = jsonValue.GetBool("enable");
    m_enableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rollback")) {
    m_rollback = jsonValue.GetBool("rollback");
    m_rollbackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resetOnHealthyTask")) {
    m_resetOnHealthyTask = jsonValue.GetBool("resetOnHealthyTask");
    m_resetOnHealthyTaskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("thresholdConfiguration")) {
    m_thresholdConfiguration = jsonValue.GetObject("thresholdConfiguration");
    m_thresholdConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentCircuitBreaker::Jsonize() const {
  JsonValue payload;

  if (m_enableHasBeenSet) {
    payload.WithBool("enable", m_enable);
  }

  if (m_rollbackHasBeenSet) {
    payload.WithBool("rollback", m_rollback);
  }

  if (m_resetOnHealthyTaskHasBeenSet) {
    payload.WithBool("resetOnHealthyTask", m_resetOnHealthyTask);
  }

  if (m_thresholdConfigurationHasBeenSet) {
    payload.WithObject("thresholdConfiguration", m_thresholdConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
