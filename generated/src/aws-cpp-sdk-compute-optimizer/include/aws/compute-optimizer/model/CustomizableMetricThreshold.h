/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class CustomizableMetricThreshold
  {
    NOT_SET,
    P90,
    P95,
    P99_5
  };

namespace CustomizableMetricThresholdMapper
{
AWS_COMPUTEOPTIMIZER_API CustomizableMetricThreshold GetCustomizableMetricThresholdForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCustomizableMetricThreshold(CustomizableMetricThreshold value);
} // namespace CustomizableMetricThresholdMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
