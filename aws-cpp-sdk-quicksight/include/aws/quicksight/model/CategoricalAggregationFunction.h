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
  enum class CategoricalAggregationFunction
  {
    NOT_SET,
    COUNT,
    DISTINCT_COUNT
  };

namespace CategoricalAggregationFunctionMapper
{
AWS_QUICKSIGHT_API CategoricalAggregationFunction GetCategoricalAggregationFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCategoricalAggregationFunction(CategoricalAggregationFunction value);
} // namespace CategoricalAggregationFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
