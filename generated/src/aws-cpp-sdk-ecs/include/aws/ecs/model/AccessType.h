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
enum class AccessType { NOT_SET, PUBLIC_, PRIVATE_ };

namespace AccessTypeMapper {
AWS_ECS_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAccessType(AccessType value);
}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
