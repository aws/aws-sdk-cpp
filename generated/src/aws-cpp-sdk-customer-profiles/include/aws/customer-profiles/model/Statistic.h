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
  enum class Statistic
  {
    NOT_SET,
    FIRST_OCCURRENCE,
    LAST_OCCURRENCE,
    COUNT,
    SUM,
    MINIMUM,
    MAXIMUM,
    AVERAGE,
    MAX_OCCURRENCE
  };

namespace StatisticMapper
{
AWS_CUSTOMERPROFILES_API Statistic GetStatisticForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStatistic(Statistic value);
} // namespace StatisticMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
