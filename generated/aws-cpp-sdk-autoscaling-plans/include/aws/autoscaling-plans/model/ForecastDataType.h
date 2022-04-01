/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{
  enum class ForecastDataType
  {
    NOT_SET,
    CapacityForecast,
    LoadForecast,
    ScheduledActionMinCapacity,
    ScheduledActionMaxCapacity
  };

namespace ForecastDataTypeMapper
{
AWS_AUTOSCALINGPLANS_API ForecastDataType GetForecastDataTypeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForForecastDataType(ForecastDataType value);
} // namespace ForecastDataTypeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
