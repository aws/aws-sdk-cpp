/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/EventTypePersona.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace EventTypePersonaMapper {

static const int OPERATIONS_HASH = HashingUtils::HashString("OPERATIONS");
static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int BILLING_HASH = HashingUtils::HashString("BILLING");

EventTypePersona GetEventTypePersonaForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPERATIONS_HASH) {
    return EventTypePersona::OPERATIONS;
  } else if (hashCode == SECURITY_HASH) {
    return EventTypePersona::SECURITY;
  } else if (hashCode == BILLING_HASH) {
    return EventTypePersona::BILLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventTypePersona>(hashCode);
  }

  return EventTypePersona::NOT_SET;
}

Aws::String GetNameForEventTypePersona(EventTypePersona enumValue) {
  switch (enumValue) {
    case EventTypePersona::NOT_SET:
      return {};
    case EventTypePersona::OPERATIONS:
      return "OPERATIONS";
    case EventTypePersona::SECURITY:
      return "SECURITY";
    case EventTypePersona::BILLING:
      return "BILLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventTypePersonaMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
