/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NotificationTypeMapper {

static const int WIDGET_VIEW_HASH = HashingUtils::HashString("WIDGET_VIEW");
static const int WIDGET_ACTION_HASH = HashingUtils::HashString("WIDGET_ACTION");

NotificationType GetNotificationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WIDGET_VIEW_HASH) {
    return NotificationType::WIDGET_VIEW;
  } else if (hashCode == WIDGET_ACTION_HASH) {
    return NotificationType::WIDGET_ACTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotificationType>(hashCode);
  }

  return NotificationType::NOT_SET;
}

Aws::String GetNameForNotificationType(NotificationType enumValue) {
  switch (enumValue) {
    case NotificationType::NOT_SET:
      return {};
    case NotificationType::WIDGET_VIEW:
      return "WIDGET_VIEW";
    case NotificationType::WIDGET_ACTION:
      return "WIDGET_ACTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotificationTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
