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
  enum class LogGroupClass
  {
    NOT_SET,
    STANDARD,
    INFREQUENT_ACCESS
  };

namespace LogGroupClassMapper
{
AWS_CLOUDWATCHLOGS_API LogGroupClass GetLogGroupClassForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForLogGroupClass(LogGroupClass value);
} // namespace LogGroupClassMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
