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
  enum class FindingPublishingFrequency
  {
    NOT_SET,
    FIFTEEN_MINUTES,
    ONE_HOUR,
    SIX_HOURS
  };

namespace FindingPublishingFrequencyMapper
{
AWS_MACIE2_API FindingPublishingFrequency GetFindingPublishingFrequencyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForFindingPublishingFrequency(FindingPublishingFrequency value);
} // namespace FindingPublishingFrequencyMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
