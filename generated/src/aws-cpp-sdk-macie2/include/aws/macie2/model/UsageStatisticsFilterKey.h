/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class UsageStatisticsFilterKey
  {
    NOT_SET,
    accountId,
    serviceLimit,
    freeTrialStartDate,
    total
  };

namespace UsageStatisticsFilterKeyMapper
{
AWS_MACIE2_API UsageStatisticsFilterKey GetUsageStatisticsFilterKeyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUsageStatisticsFilterKey(UsageStatisticsFilterKey value);
} // namespace UsageStatisticsFilterKeyMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
