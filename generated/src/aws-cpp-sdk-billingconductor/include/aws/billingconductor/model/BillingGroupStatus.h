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
  enum class BillingGroupStatus
  {
    NOT_SET,
    ACTIVE,
    PRIMARY_ACCOUNT_MISSING
  };

namespace BillingGroupStatusMapper
{
AWS_BILLINGCONDUCTOR_API BillingGroupStatus GetBillingGroupStatusForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForBillingGroupStatus(BillingGroupStatus value);
} // namespace BillingGroupStatusMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
