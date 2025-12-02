/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/EcsClusterStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace EcsClusterStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int DEPROVISIONING_HASH = HashingUtils::HashString("DEPROVISIONING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

EcsClusterStatus GetEcsClusterStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EcsClusterStatus::ACTIVE;
  } else if (hashCode == PROVISIONING_HASH) {
    return EcsClusterStatus::PROVISIONING;
  } else if (hashCode == DEPROVISIONING_HASH) {
    return EcsClusterStatus::DEPROVISIONING;
  } else if (hashCode == FAILED_HASH) {
    return EcsClusterStatus::FAILED;
  } else if (hashCode == INACTIVE_HASH) {
    return EcsClusterStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EcsClusterStatus>(hashCode);
  }

  return EcsClusterStatus::NOT_SET;
}

Aws::String GetNameForEcsClusterStatus(EcsClusterStatus enumValue) {
  switch (enumValue) {
    case EcsClusterStatus::NOT_SET:
      return {};
    case EcsClusterStatus::ACTIVE:
      return "ACTIVE";
    case EcsClusterStatus::PROVISIONING:
      return "PROVISIONING";
    case EcsClusterStatus::DEPROVISIONING:
      return "DEPROVISIONING";
    case EcsClusterStatus::FAILED:
      return "FAILED";
    case EcsClusterStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EcsClusterStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
