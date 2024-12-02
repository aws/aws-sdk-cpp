/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class PeriodUnit
  {
    NOT_SET,
    HOURS,
    DAYS,
    WEEKS,
    MONTHS
  };

namespace PeriodUnitMapper
{
AWS_CUSTOMERPROFILES_API PeriodUnit GetPeriodUnitForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForPeriodUnit(PeriodUnit value);
} // namespace PeriodUnitMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
