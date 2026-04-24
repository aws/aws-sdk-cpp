/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/EventTypeActionability.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace EventTypeActionabilityMapper {

static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");
static const int ACTION_MAY_BE_REQUIRED_HASH = HashingUtils::HashString("ACTION_MAY_BE_REQUIRED");
static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");

EventTypeActionability GetEventTypeActionabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTION_REQUIRED_HASH) {
    return EventTypeActionability::ACTION_REQUIRED;
  } else if (hashCode == ACTION_MAY_BE_REQUIRED_HASH) {
    return EventTypeActionability::ACTION_MAY_BE_REQUIRED;
  } else if (hashCode == INFORMATIONAL_HASH) {
    return EventTypeActionability::INFORMATIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventTypeActionability>(hashCode);
  }

  return EventTypeActionability::NOT_SET;
}

Aws::String GetNameForEventTypeActionability(EventTypeActionability enumValue) {
  switch (enumValue) {
    case EventTypeActionability::NOT_SET:
      return {};
    case EventTypeActionability::ACTION_REQUIRED:
      return "ACTION_REQUIRED";
    case EventTypeActionability::ACTION_MAY_BE_REQUIRED:
      return "ACTION_MAY_BE_REQUIRED";
    case EventTypeActionability::INFORMATIONAL:
      return "INFORMATIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventTypeActionabilityMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
