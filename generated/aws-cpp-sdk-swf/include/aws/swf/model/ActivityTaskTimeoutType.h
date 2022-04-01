/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class ActivityTaskTimeoutType
  {
    NOT_SET,
    START_TO_CLOSE,
    SCHEDULE_TO_START,
    SCHEDULE_TO_CLOSE,
    HEARTBEAT
  };

namespace ActivityTaskTimeoutTypeMapper
{
AWS_SWF_API ActivityTaskTimeoutType GetActivityTaskTimeoutTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForActivityTaskTimeoutType(ActivityTaskTimeoutType value);
} // namespace ActivityTaskTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
