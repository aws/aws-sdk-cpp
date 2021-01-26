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
  enum class FilterName
  {
    NOT_SET,
    Finding,
    RecommendationSourceType
  };

namespace FilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API FilterName GetFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForFilterName(FilterName value);
} // namespace FilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
