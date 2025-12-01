/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CapabilityStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CapabilityStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");

CapabilityStatus GetCapabilityStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return CapabilityStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return CapabilityStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return CapabilityStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return CapabilityStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return CapabilityStatus::DELETE_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return CapabilityStatus::ACTIVE;
  } else if (hashCode == DEGRADED_HASH) {
    return CapabilityStatus::DEGRADED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityStatus>(hashCode);
  }

  return CapabilityStatus::NOT_SET;
}

Aws::String GetNameForCapabilityStatus(CapabilityStatus enumValue) {
  switch (enumValue) {
    case CapabilityStatus::NOT_SET:
      return {};
    case CapabilityStatus::CREATING:
      return "CREATING";
    case CapabilityStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case CapabilityStatus::UPDATING:
      return "UPDATING";
    case CapabilityStatus::DELETING:
      return "DELETING";
    case CapabilityStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    case CapabilityStatus::ACTIVE:
      return "ACTIVE";
    case CapabilityStatus::DEGRADED:
      return "DEGRADED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
