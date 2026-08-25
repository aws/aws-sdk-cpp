/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AutoScaling {
namespace Model {
enum class TargetCapacityType { NOT_SET, on_demand_capacity_reservation, capacity_block, interruptible_capacity_reservation, on_demand };

namespace TargetCapacityTypeMapper {
AWS_AUTOSCALING_API TargetCapacityType GetTargetCapacityTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForTargetCapacityType(TargetCapacityType value);
}  // namespace TargetCapacityTypeMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
