/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/EventBridgeDeliveryMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace EventBridgeDeliveryModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EventBridgeDeliveryMode GetEventBridgeDeliveryModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EventBridgeDeliveryMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return EventBridgeDeliveryMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventBridgeDeliveryMode>(hashCode);
  }

  return EventBridgeDeliveryMode::NOT_SET;
}

Aws::String GetNameForEventBridgeDeliveryMode(EventBridgeDeliveryMode enumValue) {
  switch (enumValue) {
    case EventBridgeDeliveryMode::NOT_SET:
      return {};
    case EventBridgeDeliveryMode::ENABLED:
      return "ENABLED";
    case EventBridgeDeliveryMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventBridgeDeliveryModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
