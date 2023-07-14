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
  enum class OrderBy
  {
    NOT_SET,
    LogStreamName,
    LastEventTime
  };

namespace OrderByMapper
{
AWS_CLOUDWATCHLOGS_API OrderBy GetOrderByForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForOrderBy(OrderBy value);
} // namespace OrderByMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
