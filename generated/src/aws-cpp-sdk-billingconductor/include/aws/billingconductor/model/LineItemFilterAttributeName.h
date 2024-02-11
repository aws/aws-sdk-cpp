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
  enum class LineItemFilterAttributeName
  {
    NOT_SET,
    LINE_ITEM_TYPE
  };

namespace LineItemFilterAttributeNameMapper
{
AWS_BILLINGCONDUCTOR_API LineItemFilterAttributeName GetLineItemFilterAttributeNameForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForLineItemFilterAttributeName(LineItemFilterAttributeName value);
} // namespace LineItemFilterAttributeNameMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
