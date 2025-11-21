/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ManagedResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ManagedResourceStatusMapper {

static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DEPROVISIONING_HASH = HashingUtils::HashString("DEPROVISIONING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ManagedResourceStatus GetManagedResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONING_HASH) {
    return ManagedResourceStatus::PROVISIONING;
  } else if (hashCode == ACTIVE_HASH) {
    return ManagedResourceStatus::ACTIVE;
  } else if (hashCode == DEPROVISIONING_HASH) {
    return ManagedResourceStatus::DEPROVISIONING;
  } else if (hashCode == DELETED_HASH) {
    return ManagedResourceStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return ManagedResourceStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedResourceStatus>(hashCode);
  }

  return ManagedResourceStatus::NOT_SET;
}

Aws::String GetNameForManagedResourceStatus(ManagedResourceStatus enumValue) {
  switch (enumValue) {
    case ManagedResourceStatus::NOT_SET:
      return {};
    case ManagedResourceStatus::PROVISIONING:
      return "PROVISIONING";
    case ManagedResourceStatus::ACTIVE:
      return "ACTIVE";
    case ManagedResourceStatus::DEPROVISIONING:
      return "DEPROVISIONING";
    case ManagedResourceStatus::DELETED:
      return "DELETED";
    case ManagedResourceStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedResourceStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
