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
  enum class Currency
  {
    NOT_SET,
    USD,
    CNY
  };

namespace CurrencyMapper
{
AWS_COMPUTEOPTIMIZER_API Currency GetCurrencyForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCurrency(Currency value);
} // namespace CurrencyMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
