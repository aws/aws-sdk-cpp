/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class BillingMode
  {
    NOT_SET,
    EXTENDABLE_RETENTION_PRICING,
    FIXED_RETENTION_PRICING
  };

namespace BillingModeMapper
{
AWS_CLOUDTRAIL_API BillingMode GetBillingModeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForBillingMode(BillingMode value);
} // namespace BillingModeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
