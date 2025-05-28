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
  enum class PaymentOption
  {
    NOT_SET,
    AllUpfront,
    PartialUpfront,
    NoUpfront
  };

namespace PaymentOptionMapper
{
AWS_COSTOPTIMIZATIONHUB_API PaymentOption GetPaymentOptionForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForPaymentOption(PaymentOption value);
} // namespace PaymentOptionMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
