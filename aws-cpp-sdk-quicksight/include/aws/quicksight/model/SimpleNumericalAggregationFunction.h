/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class SimpleNumericalAggregationFunction
  {
    NOT_SET,
    SUM,
    AVERAGE,
    MIN,
    MAX,
    COUNT,
    DISTINCT_COUNT,
    VAR,
    VARP,
    STDEV,
    STDEVP,
    MEDIAN
  };

namespace SimpleNumericalAggregationFunctionMapper
{
AWS_QUICKSIGHT_API SimpleNumericalAggregationFunction GetSimpleNumericalAggregationFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSimpleNumericalAggregationFunction(SimpleNumericalAggregationFunction value);
} // namespace SimpleNumericalAggregationFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
