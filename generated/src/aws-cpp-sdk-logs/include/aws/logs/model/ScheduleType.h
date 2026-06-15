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
enum class ScheduleType { NOT_SET, CUSTOMER_MANAGED, AWS_MANAGED };

namespace ScheduleTypeMapper {
AWS_CLOUDWATCHLOGS_API ScheduleType GetScheduleTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForScheduleType(ScheduleType value);
}  // namespace ScheduleTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
