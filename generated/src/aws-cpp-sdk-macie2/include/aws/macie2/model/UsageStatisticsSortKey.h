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
  enum class UsageStatisticsSortKey
  {
    NOT_SET,
    accountId,
    total,
    serviceLimitValue,
    freeTrialStartDate
  };

namespace UsageStatisticsSortKeyMapper
{
AWS_MACIE2_API UsageStatisticsSortKey GetUsageStatisticsSortKeyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUsageStatisticsSortKey(UsageStatisticsSortKey value);
} // namespace UsageStatisticsSortKeyMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
