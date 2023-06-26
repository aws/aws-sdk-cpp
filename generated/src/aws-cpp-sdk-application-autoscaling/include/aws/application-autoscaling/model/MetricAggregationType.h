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
  enum class MetricAggregationType
  {
    NOT_SET,
    Average,
    Minimum,
    Maximum
  };

namespace MetricAggregationTypeMapper
{
AWS_APPLICATIONAUTOSCALING_API MetricAggregationType GetMetricAggregationTypeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForMetricAggregationType(MetricAggregationType value);
} // namespace MetricAggregationTypeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
