/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/EventPersona.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace EventPersonaMapper {

static const int OPERATIONS_HASH = HashingUtils::HashString("OPERATIONS");
static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int BILLING_HASH = HashingUtils::HashString("BILLING");

EventPersona GetEventPersonaForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPERATIONS_HASH) {
    return EventPersona::OPERATIONS;
  } else if (hashCode == SECURITY_HASH) {
    return EventPersona::SECURITY;
  } else if (hashCode == BILLING_HASH) {
    return EventPersona::BILLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventPersona>(hashCode);
  }

  return EventPersona::NOT_SET;
}

Aws::String GetNameForEventPersona(EventPersona enumValue) {
  switch (enumValue) {
    case EventPersona::NOT_SET:
      return {};
    case EventPersona::OPERATIONS:
      return "OPERATIONS";
    case EventPersona::SECURITY:
      return "SECURITY";
    case EventPersona::BILLING:
      return "BILLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventPersonaMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
