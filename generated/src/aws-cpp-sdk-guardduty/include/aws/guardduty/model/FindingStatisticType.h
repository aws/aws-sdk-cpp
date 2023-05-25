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
  enum class FindingStatisticType
  {
    NOT_SET,
    COUNT_BY_SEVERITY
  };

namespace FindingStatisticTypeMapper
{
AWS_GUARDDUTY_API FindingStatisticType GetFindingStatisticTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFindingStatisticType(FindingStatisticType value);
} // namespace FindingStatisticTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
