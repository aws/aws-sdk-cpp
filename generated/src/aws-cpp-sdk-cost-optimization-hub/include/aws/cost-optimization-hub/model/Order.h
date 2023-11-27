/**
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
  enum class Order
  {
    NOT_SET,
    Asc,
    Desc
  };

namespace OrderMapper
{
AWS_COSTOPTIMIZATIONHUB_API Order GetOrderForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
