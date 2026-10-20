/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayClusterAssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayClusterAssociationSummary::GatewayClusterAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

GatewayClusterAssociationSummary& GatewayClusterAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayClusterAssociationStatusMapper::GetGatewayClusterAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayClusterAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GatewayClusterAssociationStatusMapper::GetNameForGatewayClusterAssociationStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
