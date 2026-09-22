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
enum class NotificationTargetType { NOT_SET, sns, slack, pagerduty };

namespace NotificationTargetTypeMapper {
AWS_CLOUDWATCHOMNI_API NotificationTargetType GetNotificationTargetTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForNotificationTargetType(NotificationTargetType value);
}  // namespace NotificationTargetTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
