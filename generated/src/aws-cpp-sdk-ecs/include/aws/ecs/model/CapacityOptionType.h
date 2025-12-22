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
enum class CapacityOptionType { NOT_SET, ON_DEMAND, SPOT };

namespace CapacityOptionTypeMapper {
AWS_ECS_API CapacityOptionType GetCapacityOptionTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityOptionType(CapacityOptionType value);
}  // namespace CapacityOptionTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
