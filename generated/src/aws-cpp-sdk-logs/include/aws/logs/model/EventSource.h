/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class EventSource
  {
    NOT_SET,
    CloudTrail,
    Route53Resolver,
    VPCFlow,
    EKSAudit,
    AWSWAF
  };

namespace EventSourceMapper
{
AWS_CLOUDWATCHLOGS_API EventSource GetEventSourceForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForEventSource(EventSource value);
} // namespace EventSourceMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
