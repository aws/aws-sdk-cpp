/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationSource.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NotificationSourceMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int RULES_HASH = HashingUtils::HashString("RULES");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");

NotificationSource GetNotificationSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return NotificationSource::CUSTOMER;
  } else if (hashCode == RULES_HASH) {
    return NotificationSource::RULES;
  } else if (hashCode == SYSTEM_HASH) {
    return NotificationSource::SYSTEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotificationSource>(hashCode);
  }

  return NotificationSource::NOT_SET;
}

Aws::String GetNameForNotificationSource(NotificationSource enumValue) {
  switch (enumValue) {
    case NotificationSource::NOT_SET:
      return {};
    case NotificationSource::CUSTOMER:
      return "CUSTOMER";
    case NotificationSource::RULES:
      return "RULES";
    case NotificationSource::SYSTEM:
      return "SYSTEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotificationSourceMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
