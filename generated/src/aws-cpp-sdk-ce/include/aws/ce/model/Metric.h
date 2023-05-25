/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class Metric
  {
    NOT_SET,
    BLENDED_COST,
    UNBLENDED_COST,
    AMORTIZED_COST,
    NET_UNBLENDED_COST,
    NET_AMORTIZED_COST,
    USAGE_QUANTITY,
    NORMALIZED_USAGE_AMOUNT
  };

namespace MetricMapper
{
AWS_COSTEXPLORER_API Metric GetMetricForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForMetric(Metric value);
} // namespace MetricMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
