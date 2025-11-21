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
enum class ResourceManagementType { NOT_SET, CUSTOMER, ECS };

namespace ResourceManagementTypeMapper {
AWS_ECS_API ResourceManagementType GetResourceManagementTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForResourceManagementType(ResourceManagementType value);
}  // namespace ResourceManagementTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
