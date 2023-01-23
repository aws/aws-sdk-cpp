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
  enum class PaymentOption
  {
    NOT_SET,
    NO_UPFRONT,
    PARTIAL_UPFRONT,
    ALL_UPFRONT,
    LIGHT_UTILIZATION,
    MEDIUM_UTILIZATION,
    HEAVY_UTILIZATION
  };

namespace PaymentOptionMapper
{
AWS_COSTEXPLORER_API PaymentOption GetPaymentOptionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForPaymentOption(PaymentOption value);
} // namespace PaymentOptionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
