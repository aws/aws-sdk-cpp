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
enum class LaunchType { NOT_SET, EC2, FARGATE, EXTERNAL, MANAGED_INSTANCES };

namespace LaunchTypeMapper {
AWS_ECS_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForLaunchType(LaunchType value);
}  // namespace LaunchTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
