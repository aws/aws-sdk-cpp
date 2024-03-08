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
  enum class CustomizableMetricName
  {
    NOT_SET,
    CpuUtilization
  };

namespace CustomizableMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API CustomizableMetricName GetCustomizableMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCustomizableMetricName(CustomizableMetricName value);
} // namespace CustomizableMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
