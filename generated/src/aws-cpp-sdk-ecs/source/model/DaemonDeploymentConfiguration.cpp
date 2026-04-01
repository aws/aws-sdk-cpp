/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonDeploymentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonDeploymentConfiguration::DaemonDeploymentConfiguration(JsonView jsonValue) { *this = jsonValue; }

DaemonDeploymentConfiguration& DaemonDeploymentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("drainPercent")) {
    m_drainPercent = jsonValue.GetDouble("drainPercent");
    m_drainPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alarms")) {
    m_alarms = jsonValue.GetObject("alarms");
    m_alarmsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bakeTimeInMinutes")) {
    m_bakeTimeInMinutes = jsonValue.GetInteger("bakeTimeInMinutes");
    m_bakeTimeInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonDeploymentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_drainPercentHasBeenSet) {
    payload.WithDouble("drainPercent", m_drainPercent);
  }

  if (m_alarmsHasBeenSet) {
    payload.WithObject("alarms", m_alarms.Jsonize());
  }

  if (m_bakeTimeInMinutesHasBeenSet) {
    payload.WithInteger("bakeTimeInMinutes", m_bakeTimeInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
