﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class InstanceGeneration { NOT_SET, current, previous };

namespace InstanceGenerationMapper {
AWS_ECS_API InstanceGeneration GetInstanceGenerationForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForInstanceGeneration(InstanceGeneration value);
}  // namespace InstanceGenerationMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
