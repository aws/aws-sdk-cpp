/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace ChangeTypeMapper {

static const int ADD_MEMBER_HASH = HashingUtils::HashString("ADD_MEMBER");
static const int GRANT_RECEIVE_RESULTS_ABILITY_HASH = HashingUtils::HashString("GRANT_RECEIVE_RESULTS_ABILITY");
static const int REVOKE_RECEIVE_RESULTS_ABILITY_HASH = HashingUtils::HashString("REVOKE_RECEIVE_RESULTS_ABILITY");
static const int EDIT_AUTO_APPROVED_CHANGE_TYPES_HASH = HashingUtils::HashString("EDIT_AUTO_APPROVED_CHANGE_TYPES");

ChangeType GetChangeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADD_MEMBER_HASH) {
    return ChangeType::ADD_MEMBER;
  } else if (hashCode == GRANT_RECEIVE_RESULTS_ABILITY_HASH) {
    return ChangeType::GRANT_RECEIVE_RESULTS_ABILITY;
  } else if (hashCode == REVOKE_RECEIVE_RESULTS_ABILITY_HASH) {
    return ChangeType::REVOKE_RECEIVE_RESULTS_ABILITY;
  } else if (hashCode == EDIT_AUTO_APPROVED_CHANGE_TYPES_HASH) {
    return ChangeType::EDIT_AUTO_APPROVED_CHANGE_TYPES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeType>(hashCode);
  }

  return ChangeType::NOT_SET;
}

Aws::String GetNameForChangeType(ChangeType enumValue) {
  switch (enumValue) {
    case ChangeType::NOT_SET:
      return {};
    case ChangeType::ADD_MEMBER:
      return "ADD_MEMBER";
    case ChangeType::GRANT_RECEIVE_RESULTS_ABILITY:
      return "GRANT_RECEIVE_RESULTS_ABILITY";
    case ChangeType::REVOKE_RECEIVE_RESULTS_ABILITY:
      return "REVOKE_RECEIVE_RESULTS_ABILITY";
    case ChangeType::EDIT_AUTO_APPROVED_CHANGE_TYPES:
      return "EDIT_AUTO_APPROVED_CHANGE_TYPES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
