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
  enum class PredefinedMetricPairType
  {
    NOT_SET,
    ASGCPUUtilization,
    ASGNetworkIn,
    ASGNetworkOut,
    ALBRequestCount
  };

namespace PredefinedMetricPairTypeMapper
{
AWS_AUTOSCALING_API PredefinedMetricPairType GetPredefinedMetricPairTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForPredefinedMetricPairType(PredefinedMetricPairType value);
} // namespace PredefinedMetricPairTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
