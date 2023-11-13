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
  enum class OutputFormat
  {
    NOT_SET,
    json,
    plain,
    w3c,
    raw,
    parquet
  };

namespace OutputFormatMapper
{
AWS_CLOUDWATCHLOGS_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
