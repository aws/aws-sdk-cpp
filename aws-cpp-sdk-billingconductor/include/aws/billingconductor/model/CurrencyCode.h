/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{
  enum class CurrencyCode
  {
    NOT_SET,
    USD,
    CNY
  };

namespace CurrencyCodeMapper
{
AWS_BILLINGCONDUCTOR_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
} // namespace CurrencyCodeMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
