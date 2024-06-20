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
  enum class RDSDBMetricStatistic
  {
    NOT_SET,
    Maximum,
    Minimum,
    Average
  };

namespace RDSDBMetricStatisticMapper
{
AWS_COMPUTEOPTIMIZER_API RDSDBMetricStatistic GetRDSDBMetricStatisticForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSDBMetricStatistic(RDSDBMetricStatistic value);
} // namespace RDSDBMetricStatisticMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
