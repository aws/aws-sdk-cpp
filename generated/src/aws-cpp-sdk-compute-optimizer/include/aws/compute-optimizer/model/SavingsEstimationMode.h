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
  enum class SavingsEstimationMode
  {
    NOT_SET,
    AfterDiscounts,
    BeforeDiscounts
  };

namespace SavingsEstimationModeMapper
{
AWS_COMPUTEOPTIMIZER_API SavingsEstimationMode GetSavingsEstimationModeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForSavingsEstimationMode(SavingsEstimationMode value);
} // namespace SavingsEstimationModeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
