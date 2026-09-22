/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class AlertSortOrder { NOT_SET, ASC, DESC };

namespace AlertSortOrderMapper {
AWS_CLOUDWATCHOMNI_API AlertSortOrder GetAlertSortOrderForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAlertSortOrder(AlertSortOrder value);
}  // namespace AlertSortOrderMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
