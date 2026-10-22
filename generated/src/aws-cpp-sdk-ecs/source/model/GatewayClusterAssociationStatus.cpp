/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayClusterAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayClusterAssociationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

GatewayClusterAssociationStatus GetGatewayClusterAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return GatewayClusterAssociationStatus::ACTIVE;
  } else if (hashCode == DISASSOCIATING_HASH) {
    return GatewayClusterAssociationStatus::DISASSOCIATING;
  } else if (hashCode == INACTIVE_HASH) {
    return GatewayClusterAssociationStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayClusterAssociationStatus>(hashCode);
  }

  return GatewayClusterAssociationStatus::NOT_SET;
}

Aws::String GetNameForGatewayClusterAssociationStatus(GatewayClusterAssociationStatus enumValue) {
  switch (enumValue) {
    case GatewayClusterAssociationStatus::NOT_SET:
      return {};
    case GatewayClusterAssociationStatus::ACTIVE:
      return "ACTIVE";
    case GatewayClusterAssociationStatus::DISASSOCIATING:
      return "DISASSOCIATING";
    case GatewayClusterAssociationStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayClusterAssociationStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
