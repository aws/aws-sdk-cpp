/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{
  enum class ArchiveState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    CREATING,
    UPDATING,
    CREATE_FAILED,
    UPDATE_FAILED
  };

namespace ArchiveStateMapper
{
AWS_CLOUDWATCHEVENTS_API ArchiveState GetArchiveStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForArchiveState(ArchiveState value);
} // namespace ArchiveStateMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
