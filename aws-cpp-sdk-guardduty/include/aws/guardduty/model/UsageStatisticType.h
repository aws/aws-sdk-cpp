/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class UsageStatisticType
  {
    NOT_SET,
    SUM_BY_ACCOUNT,
    SUM_BY_DATA_SOURCE,
    SUM_BY_RESOURCE,
    TOP_RESOURCES
  };

namespace UsageStatisticTypeMapper
{
AWS_GUARDDUTY_API UsageStatisticType GetUsageStatisticTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForUsageStatisticType(UsageStatisticType value);
} // namespace UsageStatisticTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
