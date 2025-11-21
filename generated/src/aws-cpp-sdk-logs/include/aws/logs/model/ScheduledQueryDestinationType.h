/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
enum class ScheduledQueryDestinationType { NOT_SET, S3 };

namespace ScheduledQueryDestinationTypeMapper {
AWS_CLOUDWATCHLOGS_API ScheduledQueryDestinationType GetScheduledQueryDestinationTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForScheduledQueryDestinationType(ScheduledQueryDestinationType value);
}  // namespace ScheduledQueryDestinationTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
