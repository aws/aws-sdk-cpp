/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

GatewayStatus GetGatewayStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return GatewayStatus::ACTIVE;
  } else if (hashCode == UPDATE_IN_PROGRESS_HASH) {
    return GatewayStatus::UPDATE_IN_PROGRESS;
  } else if (hashCode == UPDATE_COMPLETE_HASH) {
    return GatewayStatus::UPDATE_COMPLETE;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return GatewayStatus::UPDATE_FAILED;
  } else if (hashCode == DELETED_HASH) {
    return GatewayStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayStatus>(hashCode);
  }

  return GatewayStatus::NOT_SET;
}

Aws::String GetNameForGatewayStatus(GatewayStatus enumValue) {
  switch (enumValue) {
    case GatewayStatus::NOT_SET:
      return {};
    case GatewayStatus::ACTIVE:
      return "ACTIVE";
    case GatewayStatus::UPDATE_IN_PROGRESS:
      return "UPDATE_IN_PROGRESS";
    case GatewayStatus::UPDATE_COMPLETE:
      return "UPDATE_COMPLETE";
    case GatewayStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case GatewayStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
