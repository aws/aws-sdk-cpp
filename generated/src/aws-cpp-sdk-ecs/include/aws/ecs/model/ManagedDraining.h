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
enum class ManagedDraining { NOT_SET, ENABLED, DISABLED };

namespace ManagedDrainingMapper {
AWS_ECS_API ManagedDraining GetManagedDrainingForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForManagedDraining(ManagedDraining value);
}  // namespace ManagedDrainingMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
