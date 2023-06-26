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
  enum class InstanceHealthCheckType
  {
    NOT_SET,
    CONTAINER_RUNTIME
  };

namespace InstanceHealthCheckTypeMapper
{
AWS_ECS_API InstanceHealthCheckType GetInstanceHealthCheckTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForInstanceHealthCheckType(InstanceHealthCheckType value);
} // namespace InstanceHealthCheckTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
