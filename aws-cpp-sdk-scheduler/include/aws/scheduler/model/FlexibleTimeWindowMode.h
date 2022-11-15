/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class FlexibleTimeWindowMode
  {
    NOT_SET,
    OFF,
    FLEXIBLE
  };

namespace FlexibleTimeWindowModeMapper
{
AWS_SCHEDULER_API FlexibleTimeWindowMode GetFlexibleTimeWindowModeForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForFlexibleTimeWindowMode(FlexibleTimeWindowMode value);
} // namespace FlexibleTimeWindowModeMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
