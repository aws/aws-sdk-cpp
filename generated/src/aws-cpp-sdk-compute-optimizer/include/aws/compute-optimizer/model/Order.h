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
  enum class Order
  {
    NOT_SET,
    Asc,
    Desc
  };

namespace OrderMapper
{
AWS_COMPUTEOPTIMIZER_API Order GetOrderForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
