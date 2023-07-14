/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class UsageLimitPeriod
  {
    NOT_SET,
    daily,
    weekly,
    monthly
  };

namespace UsageLimitPeriodMapper
{
AWS_REDSHIFT_API UsageLimitPeriod GetUsageLimitPeriodForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForUsageLimitPeriod(UsageLimitPeriod value);
} // namespace UsageLimitPeriodMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
