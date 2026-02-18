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
enum class NotificationStatus { NOT_SET, READ, UNREAD, HIDDEN };

namespace NotificationStatusMapper {
AWS_CONNECT_API NotificationStatus GetNotificationStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationStatus(NotificationStatus value);
}  // namespace NotificationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
