/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class ImpairedZoneHealthCheckBehavior
  {
    NOT_SET,
    ReplaceUnhealthy,
    IgnoreUnhealthy
  };

namespace ImpairedZoneHealthCheckBehaviorMapper
{
AWS_AUTOSCALING_API ImpairedZoneHealthCheckBehavior GetImpairedZoneHealthCheckBehaviorForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForImpairedZoneHealthCheckBehavior(ImpairedZoneHealthCheckBehavior value);
} // namespace ImpairedZoneHealthCheckBehaviorMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
