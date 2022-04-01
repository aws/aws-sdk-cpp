/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudWatchLogs
{
namespace CloudWatchLogsEndpoint
{
AWS_CLOUDWATCHLOGS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudWatchLogsEndpoint
} // namespace CloudWatchLogs
} // namespace Aws
