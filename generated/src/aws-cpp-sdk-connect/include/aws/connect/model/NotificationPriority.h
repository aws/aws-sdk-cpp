/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class NotificationPriority { NOT_SET, URGENT, HIGH, LOW };

namespace NotificationPriorityMapper {
AWS_CONNECT_API NotificationPriority GetNotificationPriorityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationPriority(NotificationPriority value);
}  // namespace NotificationPriorityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
