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
enum class AutoRepairActionsStatus { NOT_SET, ENABLED, DISABLED };

namespace AutoRepairActionsStatusMapper {
AWS_ECS_API AutoRepairActionsStatus GetAutoRepairActionsStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAutoRepairActionsStatus(AutoRepairActionsStatus value);
}  // namespace AutoRepairActionsStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
