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
  enum class InstanceHealthCheckState
  {
    NOT_SET,
    OK,
    IMPAIRED,
    INSUFFICIENT_DATA,
    INITIALIZING
  };

namespace InstanceHealthCheckStateMapper
{
AWS_ECS_API InstanceHealthCheckState GetInstanceHealthCheckStateForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForInstanceHealthCheckState(InstanceHealthCheckState value);
} // namespace InstanceHealthCheckStateMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
