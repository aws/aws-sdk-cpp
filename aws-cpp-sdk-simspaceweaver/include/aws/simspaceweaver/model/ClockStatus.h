/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{
  enum class ClockStatus
  {
    NOT_SET,
    UNKNOWN,
    STARTING,
    STARTED,
    STOPPING,
    STOPPED
  };

namespace ClockStatusMapper
{
AWS_SIMSPACEWEAVER_API ClockStatus GetClockStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForClockStatus(ClockStatus value);
} // namespace ClockStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
