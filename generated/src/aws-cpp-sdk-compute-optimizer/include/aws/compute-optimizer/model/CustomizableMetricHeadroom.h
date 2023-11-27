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
  enum class CustomizableMetricHeadroom
  {
    NOT_SET,
    PERCENT_30,
    PERCENT_20,
    PERCENT_0
  };

namespace CustomizableMetricHeadroomMapper
{
AWS_COMPUTEOPTIMIZER_API CustomizableMetricHeadroom GetCustomizableMetricHeadroomForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCustomizableMetricHeadroom(CustomizableMetricHeadroom value);
} // namespace CustomizableMetricHeadroomMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
