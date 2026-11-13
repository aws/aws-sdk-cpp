/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ActionPriority.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ActionPriorityMapper {

static const int IMMEDIATE_HASH = HashingUtils::HashString("IMMEDIATE");
static const int SHORT_TERM_HASH = HashingUtils::HashString("SHORT_TERM");
static const int STRATEGIC_HASH = HashingUtils::HashString("STRATEGIC");

ActionPriority GetActionPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IMMEDIATE_HASH) {
    return ActionPriority::IMMEDIATE;
  } else if (hashCode == SHORT_TERM_HASH) {
    return ActionPriority::SHORT_TERM;
  } else if (hashCode == STRATEGIC_HASH) {
    return ActionPriority::STRATEGIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionPriority>(hashCode);
  }

  return ActionPriority::NOT_SET;
}

Aws::String GetNameForActionPriority(ActionPriority enumValue) {
  switch (enumValue) {
    case ActionPriority::NOT_SET:
      return {};
    case ActionPriority::IMMEDIATE:
      return "IMMEDIATE";
    case ActionPriority::SHORT_TERM:
      return "SHORT_TERM";
    case ActionPriority::STRATEGIC:
      return "STRATEGIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionPriorityMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
