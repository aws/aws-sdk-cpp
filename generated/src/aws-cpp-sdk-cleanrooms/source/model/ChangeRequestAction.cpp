/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeRequestAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace ChangeRequestActionMapper {

static const int APPROVE_HASH = HashingUtils::HashString("APPROVE");
static const int DENY_HASH = HashingUtils::HashString("DENY");
static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");
static const int COMMIT_HASH = HashingUtils::HashString("COMMIT");

ChangeRequestAction GetChangeRequestActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVE_HASH) {
    return ChangeRequestAction::APPROVE;
  } else if (hashCode == DENY_HASH) {
    return ChangeRequestAction::DENY;
  } else if (hashCode == CANCEL_HASH) {
    return ChangeRequestAction::CANCEL;
  } else if (hashCode == COMMIT_HASH) {
    return ChangeRequestAction::COMMIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeRequestAction>(hashCode);
  }

  return ChangeRequestAction::NOT_SET;
}

Aws::String GetNameForChangeRequestAction(ChangeRequestAction enumValue) {
  switch (enumValue) {
    case ChangeRequestAction::NOT_SET:
      return {};
    case ChangeRequestAction::APPROVE:
      return "APPROVE";
    case ChangeRequestAction::DENY:
      return "DENY";
    case ChangeRequestAction::CANCEL:
      return "CANCEL";
    case ChangeRequestAction::COMMIT:
      return "COMMIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeRequestActionMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
