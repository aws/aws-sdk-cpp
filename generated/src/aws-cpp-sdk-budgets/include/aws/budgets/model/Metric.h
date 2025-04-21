/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class Metric
  {
    NOT_SET,
    BlendedCost,
    UnblendedCost,
    AmortizedCost,
    NetUnblendedCost,
    NetAmortizedCost,
    UsageQuantity,
    NormalizedUsageAmount,
    Hours
  };

namespace MetricMapper
{
AWS_BUDGETS_API Metric GetMetricForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForMetric(Metric value);
} // namespace MetricMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
