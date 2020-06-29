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
  enum class FindingPublishingFrequency
  {
    NOT_SET,
    FIFTEEN_MINUTES,
    ONE_HOUR,
    SIX_HOURS
  };

namespace FindingPublishingFrequencyMapper
{
AWS_GUARDDUTY_API FindingPublishingFrequency GetFindingPublishingFrequencyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFindingPublishingFrequency(FindingPublishingFrequency value);
} // namespace FindingPublishingFrequencyMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
