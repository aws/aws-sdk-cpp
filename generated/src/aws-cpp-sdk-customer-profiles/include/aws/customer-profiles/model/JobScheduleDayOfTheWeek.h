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
  enum class JobScheduleDayOfTheWeek
  {
    NOT_SET,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

namespace JobScheduleDayOfTheWeekMapper
{
AWS_CUSTOMERPROFILES_API JobScheduleDayOfTheWeek GetJobScheduleDayOfTheWeekForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForJobScheduleDayOfTheWeek(JobScheduleDayOfTheWeek value);
} // namespace JobScheduleDayOfTheWeekMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
