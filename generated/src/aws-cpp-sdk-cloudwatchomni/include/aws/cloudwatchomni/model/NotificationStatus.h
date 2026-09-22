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
enum class NotificationStatus { NOT_SET, ENABLED, DISABLED };

namespace NotificationStatusMapper {
AWS_CLOUDWATCHOMNI_API NotificationStatus GetNotificationStatusForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForNotificationStatus(NotificationStatus value);
}  // namespace NotificationStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
