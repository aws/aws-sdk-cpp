/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationPriority.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NotificationPriorityMapper {

static const int URGENT_HASH = HashingUtils::HashString("URGENT");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int LOW_HASH = HashingUtils::HashString("LOW");

NotificationPriority GetNotificationPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == URGENT_HASH) {
    return NotificationPriority::URGENT;
  } else if (hashCode == HIGH_HASH) {
    return NotificationPriority::HIGH;
  } else if (hashCode == LOW_HASH) {
    return NotificationPriority::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotificationPriority>(hashCode);
  }

  return NotificationPriority::NOT_SET;
}

Aws::String GetNameForNotificationPriority(NotificationPriority enumValue) {
  switch (enumValue) {
    case NotificationPriority::NOT_SET:
      return {};
    case NotificationPriority::URGENT:
      return "URGENT";
    case NotificationPriority::HIGH:
      return "HIGH";
    case NotificationPriority::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotificationPriorityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
