/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{
  enum class SavingsEstimationMode
  {
    NOT_SET,
    BeforeDiscounts,
    AfterDiscounts
  };

namespace SavingsEstimationModeMapper
{
AWS_COSTOPTIMIZATIONHUB_API SavingsEstimationMode GetSavingsEstimationModeForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForSavingsEstimationMode(SavingsEstimationMode value);
} // namespace SavingsEstimationModeMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
