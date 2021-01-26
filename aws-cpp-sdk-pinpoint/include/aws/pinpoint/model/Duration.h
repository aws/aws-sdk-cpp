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
  enum class Duration
  {
    NOT_SET,
    HR_24,
    DAY_7,
    DAY_14,
    DAY_30
  };

namespace DurationMapper
{
AWS_PINPOINT_API Duration GetDurationForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForDuration(Duration value);
} // namespace DurationMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
