/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class AdjustmentType
  {
    NOT_SET,
    ChangeInCapacity,
    PercentChangeInCapacity,
    ExactCapacity
  };

namespace AdjustmentTypeMapper
{
AWS_APPLICATIONAUTOSCALING_API AdjustmentType GetAdjustmentTypeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForAdjustmentType(AdjustmentType value);
} // namespace AdjustmentTypeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
