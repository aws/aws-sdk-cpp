/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class Frequency
  {
    NOT_SET,
    ONCE,
    HOURLY,
    DAILY,
    WEEKLY,
    MONTHLY,
    EVENT
  };

namespace FrequencyMapper
{
AWS_PINPOINT_API Frequency GetFrequencyForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForFrequency(Frequency value);
} // namespace FrequencyMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
