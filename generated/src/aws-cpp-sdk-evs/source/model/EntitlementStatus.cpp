/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/EntitlementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace EntitlementStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int AT_RISK_HASH = HashingUtils::HashString("AT_RISK");
static const int ENTITLEMENT_REMOVED_HASH = HashingUtils::HashString("ENTITLEMENT_REMOVED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");

EntitlementStatus GetEntitlementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return EntitlementStatus::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return EntitlementStatus::CREATED;
  } else if (hashCode == DELETED_HASH) {
    return EntitlementStatus::DELETED;
  } else if (hashCode == AT_RISK_HASH) {
    return EntitlementStatus::AT_RISK;
  } else if (hashCode == ENTITLEMENT_REMOVED_HASH) {
    return EntitlementStatus::ENTITLEMENT_REMOVED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return EntitlementStatus::CREATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntitlementStatus>(hashCode);
  }

  return EntitlementStatus::NOT_SET;
}

Aws::String GetNameForEntitlementStatus(EntitlementStatus enumValue) {
  switch (enumValue) {
    case EntitlementStatus::NOT_SET:
      return {};
    case EntitlementStatus::CREATING:
      return "CREATING";
    case EntitlementStatus::CREATED:
      return "CREATED";
    case EntitlementStatus::DELETED:
      return "DELETED";
    case EntitlementStatus::AT_RISK:
      return "AT_RISK";
    case EntitlementStatus::ENTITLEMENT_REMOVED:
      return "ENTITLEMENT_REMOVED";
    case EntitlementStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntitlementStatusMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
