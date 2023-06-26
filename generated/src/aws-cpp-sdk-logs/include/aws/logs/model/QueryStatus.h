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
  enum class QueryStatus
  {
    NOT_SET,
    Scheduled,
    Running,
    Complete,
    Failed,
    Cancelled,
    Timeout,
    Unknown
  };

namespace QueryStatusMapper
{
AWS_CLOUDWATCHLOGS_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForQueryStatus(QueryStatus value);
} // namespace QueryStatusMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
