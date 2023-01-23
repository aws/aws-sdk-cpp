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
  enum class ExportTaskStatusCode
  {
    NOT_SET,
    CANCELLED,
    COMPLETED,
    FAILED,
    PENDING,
    PENDING_CANCEL,
    RUNNING
  };

namespace ExportTaskStatusCodeMapper
{
AWS_CLOUDWATCHLOGS_API ExportTaskStatusCode GetExportTaskStatusCodeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForExportTaskStatusCode(ExportTaskStatusCode value);
} // namespace ExportTaskStatusCodeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
