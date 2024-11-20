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
  enum class AvailabilityZoneRebalancing
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AvailabilityZoneRebalancingMapper
{
AWS_ECS_API AvailabilityZoneRebalancing GetAvailabilityZoneRebalancingForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAvailabilityZoneRebalancing(AvailabilityZoneRebalancing value);
} // namespace AvailabilityZoneRebalancingMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
