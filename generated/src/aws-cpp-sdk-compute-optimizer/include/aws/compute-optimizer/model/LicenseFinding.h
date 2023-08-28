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
  enum class LicenseFinding
  {
    NOT_SET,
    InsufficientMetrics,
    Optimized,
    NotOptimized
  };

namespace LicenseFindingMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseFinding GetLicenseFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseFinding(LicenseFinding value);
} // namespace LicenseFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
