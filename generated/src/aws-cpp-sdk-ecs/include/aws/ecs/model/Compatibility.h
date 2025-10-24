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
enum class Compatibility { NOT_SET, EC2, FARGATE, EXTERNAL, MANAGED_INSTANCES };

namespace CompatibilityMapper {
AWS_ECS_API Compatibility GetCompatibilityForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCompatibility(Compatibility value);
}  // namespace CompatibilityMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
