/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DeploymentEarlySuccessCriteria.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DeploymentEarlySuccessCriteria::DeploymentEarlySuccessCriteria(JsonView jsonValue) { *this = jsonValue; }

DeploymentEarlySuccessCriteria& DeploymentEarlySuccessCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enable")) {
    m_enable = jsonValue.GetBool("enable");
    m_enableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthyPercent")) {
    m_healthyPercent = jsonValue.GetInteger("healthyPercent");
    m_healthyPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceServiceRevisionCleanup")) {
    m_sourceServiceRevisionCleanup =
        ServiceRevisionCleanupMapper::GetServiceRevisionCleanupForName(jsonValue.GetString("sourceServiceRevisionCleanup"));
    m_sourceServiceRevisionCleanupHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentEarlySuccessCriteria::Jsonize() const {
  JsonValue payload;

  if (m_enableHasBeenSet) {
    payload.WithBool("enable", m_enable);
  }

  if (m_healthyPercentHasBeenSet) {
    payload.WithInteger("healthyPercent", m_healthyPercent);
  }

  if (m_sourceServiceRevisionCleanupHasBeenSet) {
    payload.WithString("sourceServiceRevisionCleanup",
                       ServiceRevisionCleanupMapper::GetNameForServiceRevisionCleanup(m_sourceServiceRevisionCleanup));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
