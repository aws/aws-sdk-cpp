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
enum class ResourceType { NOT_SET, GPU, InferenceAccelerator };

namespace ResourceTypeMapper {
AWS_ECS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
