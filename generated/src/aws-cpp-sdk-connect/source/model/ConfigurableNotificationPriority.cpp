/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ConfigurableNotificationPriority.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ConfigurableNotificationPriorityMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int LOW_HASH = HashingUtils::HashString("LOW");

ConfigurableNotificationPriority GetConfigurableNotificationPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return ConfigurableNotificationPriority::HIGH;
  } else if (hashCode == LOW_HASH) {
    return ConfigurableNotificationPriority::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurableNotificationPriority>(hashCode);
  }

  return ConfigurableNotificationPriority::NOT_SET;
}

Aws::String GetNameForConfigurableNotificationPriority(ConfigurableNotificationPriority enumValue) {
  switch (enumValue) {
    case ConfigurableNotificationPriority::NOT_SET:
      return {};
    case ConfigurableNotificationPriority::HIGH:
      return "HIGH";
    case ConfigurableNotificationPriority::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurableNotificationPriorityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
