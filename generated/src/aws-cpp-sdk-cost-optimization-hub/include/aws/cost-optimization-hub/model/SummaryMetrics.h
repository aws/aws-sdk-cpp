﻿/**
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
  enum class SummaryMetrics
  {
    NOT_SET,
    SavingsPercentage
  };

namespace SummaryMetricsMapper
{
AWS_COSTOPTIMIZATIONHUB_API SummaryMetrics GetSummaryMetricsForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForSummaryMetrics(SummaryMetrics value);
} // namespace SummaryMetricsMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
