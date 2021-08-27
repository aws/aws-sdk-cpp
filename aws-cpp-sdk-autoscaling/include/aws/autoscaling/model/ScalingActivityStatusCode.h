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
  enum class ScalingActivityStatusCode
  {
    NOT_SET,
    PendingSpotBidPlacement,
    WaitingForSpotInstanceRequestId,
    WaitingForSpotInstanceId,
    WaitingForInstanceId,
    PreInService,
    InProgress,
    WaitingForELBConnectionDraining,
    MidLifecycleAction,
    WaitingForInstanceWarmup,
    Successful,
    Failed,
    Cancelled
  };

namespace ScalingActivityStatusCodeMapper
{
AWS_AUTOSCALING_API ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForScalingActivityStatusCode(ScalingActivityStatusCode value);
} // namespace ScalingActivityStatusCodeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
