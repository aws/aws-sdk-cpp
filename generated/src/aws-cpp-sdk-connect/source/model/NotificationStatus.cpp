/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NotificationStatusMapper {

static const int READ_HASH = HashingUtils::HashString("READ");
static const int UNREAD_HASH = HashingUtils::HashString("UNREAD");
static const int HIDDEN_HASH = HashingUtils::HashString("HIDDEN");

NotificationStatus GetNotificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_HASH) {
    return NotificationStatus::READ;
  } else if (hashCode == UNREAD_HASH) {
    return NotificationStatus::UNREAD;
  } else if (hashCode == HIDDEN_HASH) {
    return NotificationStatus::HIDDEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotificationStatus>(hashCode);
  }

  return NotificationStatus::NOT_SET;
}

Aws::String GetNameForNotificationStatus(NotificationStatus enumValue) {
  switch (enumValue) {
    case NotificationStatus::NOT_SET:
      return {};
    case NotificationStatus::READ:
      return "READ";
    case NotificationStatus::UNREAD:
      return "UNREAD";
    case NotificationStatus::HIDDEN:
      return "HIDDEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotificationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
