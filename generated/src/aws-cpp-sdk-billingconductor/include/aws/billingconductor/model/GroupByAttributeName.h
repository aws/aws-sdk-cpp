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
  enum class GroupByAttributeName
  {
    NOT_SET,
    PRODUCT_NAME,
    BILLING_PERIOD
  };

namespace GroupByAttributeNameMapper
{
AWS_BILLINGCONDUCTOR_API GroupByAttributeName GetGroupByAttributeNameForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForGroupByAttributeName(GroupByAttributeName value);
} // namespace GroupByAttributeNameMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
