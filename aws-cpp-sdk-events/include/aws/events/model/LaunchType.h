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
  enum class LaunchType
  {
    NOT_SET,
    EC2,
    FARGATE
  };

namespace LaunchTypeMapper
{
AWS_CLOUDWATCHEVENTS_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForLaunchType(LaunchType value);
} // namespace LaunchTypeMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
