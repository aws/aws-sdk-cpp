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
  enum class IndexSource
  {
    NOT_SET,
    ACCOUNT,
    LOG_GROUP
  };

namespace IndexSourceMapper
{
AWS_CLOUDWATCHLOGS_API IndexSource GetIndexSourceForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForIndexSource(IndexSource value);
} // namespace IndexSourceMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
