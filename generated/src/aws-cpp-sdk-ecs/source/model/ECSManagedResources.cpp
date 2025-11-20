/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ECSManagedResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ECSManagedResources::ECSManagedResources(JsonView jsonValue) { *this = jsonValue; }

ECSManagedResources& ECSManagedResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingressPaths")) {
    Aws::Utils::Array<JsonView> ingressPathsJsonList = jsonValue.GetArray("ingressPaths");
    for (unsigned ingressPathsIndex = 0; ingressPathsIndex < ingressPathsJsonList.GetLength(); ++ingressPathsIndex) {
      m_ingressPaths.push_back(ingressPathsJsonList[ingressPathsIndex].AsObject());
    }
    m_ingressPathsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoScaling")) {
    m_autoScaling = jsonValue.GetObject("autoScaling");
    m_autoScalingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metricAlarms")) {
    Aws::Utils::Array<JsonView> metricAlarmsJsonList = jsonValue.GetArray("metricAlarms");
    for (unsigned metricAlarmsIndex = 0; metricAlarmsIndex < metricAlarmsJsonList.GetLength(); ++metricAlarmsIndex) {
      m_metricAlarms.push_back(metricAlarmsJsonList[metricAlarmsIndex].AsObject());
    }
    m_metricAlarmsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceSecurityGroups")) {
    Aws::Utils::Array<JsonView> serviceSecurityGroupsJsonList = jsonValue.GetArray("serviceSecurityGroups");
    for (unsigned serviceSecurityGroupsIndex = 0; serviceSecurityGroupsIndex < serviceSecurityGroupsJsonList.GetLength();
         ++serviceSecurityGroupsIndex) {
      m_serviceSecurityGroups.push_back(serviceSecurityGroupsJsonList[serviceSecurityGroupsIndex].AsObject());
    }
    m_serviceSecurityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logGroups")) {
    Aws::Utils::Array<JsonView> logGroupsJsonList = jsonValue.GetArray("logGroups");
    for (unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex) {
      m_logGroups.push_back(logGroupsJsonList[logGroupsIndex].AsObject());
    }
    m_logGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue ECSManagedResources::Jsonize() const {
  JsonValue payload;

  if (m_ingressPathsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ingressPathsJsonList(m_ingressPaths.size());
    for (unsigned ingressPathsIndex = 0; ingressPathsIndex < ingressPathsJsonList.GetLength(); ++ingressPathsIndex) {
      ingressPathsJsonList[ingressPathsIndex].AsObject(m_ingressPaths[ingressPathsIndex].Jsonize());
    }
    payload.WithArray("ingressPaths", std::move(ingressPathsJsonList));
  }

  if (m_autoScalingHasBeenSet) {
    payload.WithObject("autoScaling", m_autoScaling.Jsonize());
  }

  if (m_metricAlarmsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricAlarmsJsonList(m_metricAlarms.size());
    for (unsigned metricAlarmsIndex = 0; metricAlarmsIndex < metricAlarmsJsonList.GetLength(); ++metricAlarmsIndex) {
      metricAlarmsJsonList[metricAlarmsIndex].AsObject(m_metricAlarms[metricAlarmsIndex].Jsonize());
    }
    payload.WithArray("metricAlarms", std::move(metricAlarmsJsonList));
  }

  if (m_serviceSecurityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> serviceSecurityGroupsJsonList(m_serviceSecurityGroups.size());
    for (unsigned serviceSecurityGroupsIndex = 0; serviceSecurityGroupsIndex < serviceSecurityGroupsJsonList.GetLength();
         ++serviceSecurityGroupsIndex) {
      serviceSecurityGroupsJsonList[serviceSecurityGroupsIndex].AsObject(m_serviceSecurityGroups[serviceSecurityGroupsIndex].Jsonize());
    }
    payload.WithArray("serviceSecurityGroups", std::move(serviceSecurityGroupsJsonList));
  }

  if (m_logGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupsJsonList(m_logGroups.size());
    for (unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex) {
      logGroupsJsonList[logGroupsIndex].AsObject(m_logGroups[logGroupsIndex].Jsonize());
    }
    payload.WithArray("logGroups", std::move(logGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
