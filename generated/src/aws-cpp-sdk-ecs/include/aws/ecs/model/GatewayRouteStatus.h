/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class GatewayRouteStatus {
  NOT_SET,
  ACTIVE,
  CREATE_IN_PROGRESS,
  CREATE_FAILED,
  UPDATE_IN_PROGRESS,
  UPDATE_FAILED,
  DELETE_IN_PROGRESS,
  DELETE_FAILED
};

namespace GatewayRouteStatusMapper {
AWS_ECS_API GatewayRouteStatus GetGatewayRouteStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGatewayRouteStatus(GatewayRouteStatus value);
}  // namespace GatewayRouteStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
