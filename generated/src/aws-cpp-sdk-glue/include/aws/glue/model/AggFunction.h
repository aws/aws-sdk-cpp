/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class AggFunction
  {
    NOT_SET,
    avg,
    countDistinct,
    count,
    first,
    last,
    kurtosis,
    max,
    min,
    skewness,
    stddev_samp,
    stddev_pop,
    sum,
    sumDistinct,
    var_samp,
    var_pop
  };

namespace AggFunctionMapper
{
AWS_GLUE_API AggFunction GetAggFunctionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAggFunction(AggFunction value);
} // namespace AggFunctionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
