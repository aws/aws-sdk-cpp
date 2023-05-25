/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class LaunchStatus
  {
    NOT_SET,
    CREATED,
    UPDATING,
    RUNNING,
    COMPLETED,
    CANCELLED
  };

namespace LaunchStatusMapper
{
AWS_CLOUDWATCHEVIDENTLY_API LaunchStatus GetLaunchStatusForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForLaunchStatus(LaunchStatus value);
} // namespace LaunchStatusMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
