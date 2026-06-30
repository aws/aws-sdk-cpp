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
enum class ThresholdType { NOT_SET, COUNT, BOUNDED_PERCENT, UNBOUNDED_PERCENT };

namespace ThresholdTypeMapper {
AWS_ECS_API ThresholdType GetThresholdTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForThresholdType(ThresholdType value);
}  // namespace ThresholdTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
