/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class AggregationPeriod
  {
    NOT_SET,
    PT5M,
    PT1H,
    P1D
  };

namespace AggregationPeriodMapper
{
AWS_CODEGURUPROFILER_API AggregationPeriod GetAggregationPeriodForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForAggregationPeriod(AggregationPeriod value);
} // namespace AggregationPeriodMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
