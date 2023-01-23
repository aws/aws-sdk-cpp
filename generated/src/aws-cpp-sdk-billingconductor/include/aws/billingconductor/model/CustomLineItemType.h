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
  enum class CustomLineItemType
  {
    NOT_SET,
    CREDIT,
    FEE
  };

namespace CustomLineItemTypeMapper
{
AWS_BILLINGCONDUCTOR_API CustomLineItemType GetCustomLineItemTypeForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForCustomLineItemType(CustomLineItemType value);
} // namespace CustomLineItemTypeMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
