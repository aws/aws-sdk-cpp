/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/NotificationTargetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace NotificationTargetTypeMapper {

static const int sns_HASH = HashingUtils::HashString("sns");
static const int slack_HASH = HashingUtils::HashString("slack");
static const int pagerduty_HASH = HashingUtils::HashString("pagerduty");

NotificationTargetType GetNotificationTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == sns_HASH) {
    return NotificationTargetType::sns;
  } else if (hashCode == slack_HASH) {
    return NotificationTargetType::slack;
  } else if (hashCode == pagerduty_HASH) {
    return NotificationTargetType::pagerduty;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotificationTargetType>(hashCode);
  }

  return NotificationTargetType::NOT_SET;
}

Aws::String GetNameForNotificationTargetType(NotificationTargetType enumValue) {
  switch (enumValue) {
    case NotificationTargetType::NOT_SET:
      return {};
    case NotificationTargetType::sns:
      return "sns";
    case NotificationTargetType::slack:
      return "slack";
    case NotificationTargetType::pagerduty:
      return "pagerduty";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotificationTargetTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
