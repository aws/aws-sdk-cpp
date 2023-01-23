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
  enum class AssignPublicIp
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AssignPublicIpMapper
{
AWS_CLOUDWATCHEVENTS_API AssignPublicIp GetAssignPublicIpForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForAssignPublicIp(AssignPublicIp value);
} // namespace AssignPublicIpMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
