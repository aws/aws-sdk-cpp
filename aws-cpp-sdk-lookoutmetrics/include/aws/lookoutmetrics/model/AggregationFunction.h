/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class AggregationFunction
  {
    NOT_SET,
    AVG,
    SUM
  };

namespace AggregationFunctionMapper
{
AWS_LOOKOUTMETRICS_API AggregationFunction GetAggregationFunctionForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAggregationFunction(AggregationFunction value);
} // namespace AggregationFunctionMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
