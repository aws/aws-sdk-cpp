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
  enum class UsageStatisticsFilterComparator
  {
    NOT_SET,
    GT,
    GTE,
    LT,
    LTE,
    EQ,
    NE,
    CONTAINS
  };

namespace UsageStatisticsFilterComparatorMapper
{
AWS_MACIE2_API UsageStatisticsFilterComparator GetUsageStatisticsFilterComparatorForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUsageStatisticsFilterComparator(UsageStatisticsFilterComparator value);
} // namespace UsageStatisticsFilterComparatorMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
