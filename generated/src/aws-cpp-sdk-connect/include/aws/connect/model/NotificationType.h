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
enum class NotificationType { NOT_SET, WIDGET_VIEW, WIDGET_ACTION };

namespace NotificationTypeMapper {
AWS_CONNECT_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationType(NotificationType value);
}  // namespace NotificationTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
