/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ECSExpressGatewayService.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ECSExpressGatewayService::ECSExpressGatewayService(JsonView jsonValue) { *this = jsonValue; }

ECSExpressGatewayService& ECSExpressGatewayService::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cluster")) {
    m_cluster = jsonValue.GetString("cluster");
    m_clusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceName")) {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("infrastructureRoleArn")) {
    m_infrastructureRoleArn = jsonValue.GetString("infrastructureRoleArn");
    m_infrastructureRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentDeployment")) {
    m_currentDeployment = jsonValue.GetString("currentDeployment");
    m_currentDeploymentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activeConfigurations")) {
    Aws::Utils::Array<JsonView> activeConfigurationsJsonList = jsonValue.GetArray("activeConfigurations");
    for (unsigned activeConfigurationsIndex = 0; activeConfigurationsIndex < activeConfigurationsJsonList.GetLength();
         ++activeConfigurationsIndex) {
      m_activeConfigurations.push_back(activeConfigurationsJsonList[activeConfigurationsIndex].AsObject());
    }
    m_activeConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ECSExpressGatewayService::Jsonize() const {
  JsonValue payload;

  if (m_clusterHasBeenSet) {
    payload.WithString("cluster", m_cluster);
  }

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_infrastructureRoleArnHasBeenSet) {
    payload.WithString("infrastructureRoleArn", m_infrastructureRoleArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_currentDeploymentHasBeenSet) {
    payload.WithString("currentDeployment", m_currentDeployment);
  }

  if (m_activeConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> activeConfigurationsJsonList(m_activeConfigurations.size());
    for (unsigned activeConfigurationsIndex = 0; activeConfigurationsIndex < activeConfigurationsJsonList.GetLength();
         ++activeConfigurationsIndex) {
      activeConfigurationsJsonList[activeConfigurationsIndex].AsObject(m_activeConfigurations[activeConfigurationsIndex].Jsonize());
    }
    payload.WithArray("activeConfigurations", std::move(activeConfigurationsJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
