/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class CapacityProviderType
  {
    NOT_SET,
    EC2_AUTOSCALING,
    MANAGED_INSTANCES,
    FARGATE,
    FARGATE_SPOT
  };

namespace CapacityProviderTypeMapper
{
AWS_ECS_API CapacityProviderType GetCapacityProviderTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityProviderType(CapacityProviderType value);
} // namespace CapacityProviderTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
