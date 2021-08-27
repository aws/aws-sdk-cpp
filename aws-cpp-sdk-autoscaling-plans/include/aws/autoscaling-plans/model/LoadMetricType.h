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
  enum class LoadMetricType
  {
    NOT_SET,
    ASGTotalCPUUtilization,
    ASGTotalNetworkIn,
    ASGTotalNetworkOut,
    ALBTargetGroupRequestCount
  };

namespace LoadMetricTypeMapper
{
AWS_AUTOSCALINGPLANS_API LoadMetricType GetLoadMetricTypeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForLoadMetricType(LoadMetricType value);
} // namespace LoadMetricTypeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
