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
  enum class LookBackPeriodPreference
  {
    NOT_SET,
    DAYS_14,
    DAYS_32,
    DAYS_93
  };

namespace LookBackPeriodPreferenceMapper
{
AWS_COMPUTEOPTIMIZER_API LookBackPeriodPreference GetLookBackPeriodPreferenceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLookBackPeriodPreference(LookBackPeriodPreference value);
} // namespace LookBackPeriodPreferenceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
