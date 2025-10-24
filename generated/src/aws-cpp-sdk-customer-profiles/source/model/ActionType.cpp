/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/ActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace ActionTypeMapper {

static const int ADDED_PROFILE_KEY_HASH = HashingUtils::HashString("ADDED_PROFILE_KEY");
static const int DELETED_PROFILE_KEY_HASH = HashingUtils::HashString("DELETED_PROFILE_KEY");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
static const int INGESTED_HASH = HashingUtils::HashString("INGESTED");
static const int DELETED_BY_CUSTOMER_HASH = HashingUtils::HashString("DELETED_BY_CUSTOMER");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int MERGED_HASH = HashingUtils::HashString("MERGED");
static const int DELETED_BY_MERGE_HASH = HashingUtils::HashString("DELETED_BY_MERGE");

ActionType GetActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADDED_PROFILE_KEY_HASH) {
    return ActionType::ADDED_PROFILE_KEY;
  } else if (hashCode == DELETED_PROFILE_KEY_HASH) {
    return ActionType::DELETED_PROFILE_KEY;
  } else if (hashCode == CREATED_HASH) {
    return ActionType::CREATED;
  } else if (hashCode == UPDATED_HASH) {
    return ActionType::UPDATED;
  } else if (hashCode == INGESTED_HASH) {
    return ActionType::INGESTED;
  } else if (hashCode == DELETED_BY_CUSTOMER_HASH) {
    return ActionType::DELETED_BY_CUSTOMER;
  } else if (hashCode == EXPIRED_HASH) {
    return ActionType::EXPIRED;
  } else if (hashCode == MERGED_HASH) {
    return ActionType::MERGED;
  } else if (hashCode == DELETED_BY_MERGE_HASH) {
    return ActionType::DELETED_BY_MERGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionType>(hashCode);
  }

  return ActionType::NOT_SET;
}

Aws::String GetNameForActionType(ActionType enumValue) {
  switch (enumValue) {
    case ActionType::NOT_SET:
      return {};
    case ActionType::ADDED_PROFILE_KEY:
      return "ADDED_PROFILE_KEY";
    case ActionType::DELETED_PROFILE_KEY:
      return "DELETED_PROFILE_KEY";
    case ActionType::CREATED:
      return "CREATED";
    case ActionType::UPDATED:
      return "UPDATED";
    case ActionType::INGESTED:
      return "INGESTED";
    case ActionType::DELETED_BY_CUSTOMER:
      return "DELETED_BY_CUSTOMER";
    case ActionType::EXPIRED:
      return "EXPIRED";
    case ActionType::MERGED:
      return "MERGED";
    case ActionType::DELETED_BY_MERGE:
      return "DELETED_BY_MERGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
