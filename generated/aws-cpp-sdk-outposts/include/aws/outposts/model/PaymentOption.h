/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class PaymentOption
  {
    NOT_SET,
    ALL_UPFRONT,
    NO_UPFRONT,
    PARTIAL_UPFRONT
  };

namespace PaymentOptionMapper
{
AWS_OUTPOSTS_API PaymentOption GetPaymentOptionForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPaymentOption(PaymentOption value);
} // namespace PaymentOptionMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
