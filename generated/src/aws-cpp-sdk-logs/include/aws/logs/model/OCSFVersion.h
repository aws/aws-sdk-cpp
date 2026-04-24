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
enum class OCSFVersion { NOT_SET, V1_1, V1_5 };

namespace OCSFVersionMapper {
AWS_CLOUDWATCHLOGS_API OCSFVersion GetOCSFVersionForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForOCSFVersion(OCSFVersion value);
}  // namespace OCSFVersionMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
