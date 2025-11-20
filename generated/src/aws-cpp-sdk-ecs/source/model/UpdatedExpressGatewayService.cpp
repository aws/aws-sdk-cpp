/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/UpdatedExpressGatewayService.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

UpdatedExpressGatewayService::UpdatedExpressGatewayService(JsonView jsonValue) { *this = jsonValue; }

UpdatedExpressGatewayService& UpdatedExpressGatewayService::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cluster")) {
    m_cluster = jsonValue.GetString("cluster");
    m_clusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceName")) {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetConfiguration")) {
    m_targetConfiguration = jsonValue.GetObject("targetConfiguration");
    m_targetConfigurationHasBeenSet = true;
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

JsonValue UpdatedExpressGatewayService::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_clusterHasBeenSet) {
    payload.WithString("cluster", m_cluster);
  }

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_targetConfigurationHasBeenSet) {
    payload.WithObject("targetConfiguration", m_targetConfiguration.Jsonize());
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
