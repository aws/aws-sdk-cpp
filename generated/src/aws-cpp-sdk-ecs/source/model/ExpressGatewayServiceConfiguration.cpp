/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayServiceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayServiceConfiguration::ExpressGatewayServiceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayServiceConfiguration& ExpressGatewayServiceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceRevisionArn")) {
    m_serviceRevisionArn = jsonValue.GetString("serviceRevisionArn");
    m_serviceRevisionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskRoleArn")) {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");
    m_taskRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpu")) {
    m_cpu = jsonValue.GetString("cpu");
    m_cpuHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetString("memory");
    m_memoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkConfiguration")) {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckPath")) {
    m_healthCheckPath = jsonValue.GetString("healthCheckPath");
    m_healthCheckPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryContainer")) {
    m_primaryContainer = jsonValue.GetObject("primaryContainer");
    m_primaryContainerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scalingTarget")) {
    m_scalingTarget = jsonValue.GetObject("scalingTarget");
    m_scalingTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingressPaths")) {
    Aws::Utils::Array<JsonView> ingressPathsJsonList = jsonValue.GetArray("ingressPaths");
    for (unsigned ingressPathsIndex = 0; ingressPathsIndex < ingressPathsJsonList.GetLength(); ++ingressPathsIndex) {
      m_ingressPaths.push_back(ingressPathsJsonList[ingressPathsIndex].AsObject());
    }
    m_ingressPathsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayServiceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serviceRevisionArnHasBeenSet) {
    payload.WithString("serviceRevisionArn", m_serviceRevisionArn);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_taskRoleArnHasBeenSet) {
    payload.WithString("taskRoleArn", m_taskRoleArn);
  }

  if (m_cpuHasBeenSet) {
    payload.WithString("cpu", m_cpu);
  }

  if (m_memoryHasBeenSet) {
    payload.WithString("memory", m_memory);
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_healthCheckPathHasBeenSet) {
    payload.WithString("healthCheckPath", m_healthCheckPath);
  }

  if (m_primaryContainerHasBeenSet) {
    payload.WithObject("primaryContainer", m_primaryContainer.Jsonize());
  }

  if (m_scalingTargetHasBeenSet) {
    payload.WithObject("scalingTarget", m_scalingTarget.Jsonize());
  }

  if (m_ingressPathsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ingressPathsJsonList(m_ingressPaths.size());
    for (unsigned ingressPathsIndex = 0; ingressPathsIndex < ingressPathsJsonList.GetLength(); ++ingressPathsIndex) {
      ingressPathsJsonList[ingressPathsIndex].AsObject(m_ingressPaths[ingressPathsIndex].Jsonize());
    }
    payload.WithArray("ingressPaths", std::move(ingressPathsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
