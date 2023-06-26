/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ScalingAdjustmentType
  {
    NOT_SET,
    ChangeInCapacity,
    ExactCapacity,
    PercentChangeInCapacity
  };

namespace ScalingAdjustmentTypeMapper
{
AWS_GAMELIFT_API ScalingAdjustmentType GetScalingAdjustmentTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForScalingAdjustmentType(ScalingAdjustmentType value);
} // namespace ScalingAdjustmentTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
