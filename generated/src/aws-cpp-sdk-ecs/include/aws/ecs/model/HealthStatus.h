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
  enum class HealthStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    UNKNOWN
  };

namespace HealthStatusMapper
{
AWS_ECS_API HealthStatus GetHealthStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForHealthStatus(HealthStatus value);
} // namespace HealthStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
