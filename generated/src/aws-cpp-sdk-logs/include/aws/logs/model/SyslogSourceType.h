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
enum class SyslogSourceType { NOT_SET, VPCE };

namespace SyslogSourceTypeMapper {
AWS_CLOUDWATCHLOGS_API SyslogSourceType GetSyslogSourceTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForSyslogSourceType(SyslogSourceType value);
}  // namespace SyslogSourceTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
