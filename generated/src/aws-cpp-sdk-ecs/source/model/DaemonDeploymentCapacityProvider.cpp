/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonDeploymentCapacityProvider.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonDeploymentCapacityProvider::DaemonDeploymentCapacityProvider(JsonView jsonValue) { *this = jsonValue; }

DaemonDeploymentCapacityProvider& DaemonDeploymentCapacityProvider::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runningInstanceCount")) {
    m_runningInstanceCount = jsonValue.GetInteger("runningInstanceCount");
    m_runningInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("drainingInstanceCount")) {
    m_drainingInstanceCount = jsonValue.GetInteger("drainingInstanceCount");
    m_drainingInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonDeploymentCapacityProvider::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_runningInstanceCountHasBeenSet) {
    payload.WithInteger("runningInstanceCount", m_runningInstanceCount);
  }

  if (m_drainingInstanceCountHasBeenSet) {
    payload.WithInteger("drainingInstanceCount", m_drainingInstanceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
