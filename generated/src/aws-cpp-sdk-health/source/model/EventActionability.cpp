/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/EventActionability.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace EventActionabilityMapper {

static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");
static const int ACTION_MAY_BE_REQUIRED_HASH = HashingUtils::HashString("ACTION_MAY_BE_REQUIRED");
static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");

EventActionability GetEventActionabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTION_REQUIRED_HASH) {
    return EventActionability::ACTION_REQUIRED;
  } else if (hashCode == ACTION_MAY_BE_REQUIRED_HASH) {
    return EventActionability::ACTION_MAY_BE_REQUIRED;
  } else if (hashCode == INFORMATIONAL_HASH) {
    return EventActionability::INFORMATIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventActionability>(hashCode);
  }

  return EventActionability::NOT_SET;
}

Aws::String GetNameForEventActionability(EventActionability enumValue) {
  switch (enumValue) {
    case EventActionability::NOT_SET:
      return {};
    case EventActionability::ACTION_REQUIRED:
      return "ACTION_REQUIRED";
    case EventActionability::ACTION_MAY_BE_REQUIRED:
      return "ACTION_MAY_BE_REQUIRED";
    case EventActionability::INFORMATIONAL:
      return "INFORMATIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventActionabilityMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
