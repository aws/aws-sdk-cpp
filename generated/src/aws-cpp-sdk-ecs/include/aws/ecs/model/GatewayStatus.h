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
enum class GatewayStatus { NOT_SET, ACTIVE, UPDATE_IN_PROGRESS, UPDATE_COMPLETE, UPDATE_FAILED, DELETED };

namespace GatewayStatusMapper {
AWS_ECS_API GatewayStatus GetGatewayStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGatewayStatus(GatewayStatus value);
}  // namespace GatewayStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
