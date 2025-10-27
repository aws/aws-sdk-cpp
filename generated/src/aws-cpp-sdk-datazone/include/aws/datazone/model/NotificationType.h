/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotificationType { NOT_SET, TASK, EVENT };

namespace NotificationTypeMapper {
AWS_DATAZONE_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotificationType(NotificationType value);
}  // namespace NotificationTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
