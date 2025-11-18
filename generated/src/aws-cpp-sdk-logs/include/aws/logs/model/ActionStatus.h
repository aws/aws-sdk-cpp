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
enum class ActionStatus { NOT_SET, IN_PROGRESS, CLIENT_ERROR, FAILED, COMPLETE };

namespace ActionStatusMapper {
AWS_CLOUDWATCHLOGS_API ActionStatus GetActionStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForActionStatus(ActionStatus value);
}  // namespace ActionStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
