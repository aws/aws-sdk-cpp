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
enum class AlertSortField { NOT_SET, NAME, STATE };

namespace AlertSortFieldMapper {
AWS_CLOUDWATCHOMNI_API AlertSortField GetAlertSortFieldForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAlertSortField(AlertSortField value);
}  // namespace AlertSortFieldMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
