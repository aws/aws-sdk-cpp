/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{
  enum class MetricName
  {
    NOT_SET,
    AmortizedCost,
    BlendedCost,
    NetAmortizedCost,
    NetUnblendedCost,
    NormalizedUsageAmount,
    UnblendedCost,
    UsageQuantity,
    SpendCoveredBySavingsPlans,
    Hour,
    Unit,
    Cost
  };

namespace MetricNameMapper
{
AWS_BCMDASHBOARDS_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
