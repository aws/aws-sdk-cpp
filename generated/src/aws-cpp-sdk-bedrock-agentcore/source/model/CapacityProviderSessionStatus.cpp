/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CapacityProviderSessionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace CapacityProviderSessionStatusMapper {

static const int Provisioning_HASH = HashingUtils::HashString("Provisioning");
static const int Deprovisioning_HASH = HashingUtils::HashString("Deprovisioning");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int Deleted_HASH = HashingUtils::HashString("Deleted");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

CapacityProviderSessionStatus GetCapacityProviderSessionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Provisioning_HASH) {
    return CapacityProviderSessionStatus::Provisioning;
  } else if (hashCode == Deprovisioning_HASH) {
    return CapacityProviderSessionStatus::Deprovisioning;
  } else if (hashCode == Active_HASH) {
    return CapacityProviderSessionStatus::Active;
  } else if (hashCode == Deleting_HASH) {
    return CapacityProviderSessionStatus::Deleting;
  } else if (hashCode == Deleted_HASH) {
    return CapacityProviderSessionStatus::Deleted;
  } else if (hashCode == Stopped_HASH) {
    return CapacityProviderSessionStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderSessionStatus>(hashCode);
  }

  return CapacityProviderSessionStatus::NOT_SET;
}

Aws::String GetNameForCapacityProviderSessionStatus(CapacityProviderSessionStatus enumValue) {
  switch (enumValue) {
    case CapacityProviderSessionStatus::NOT_SET:
      return {};
    case CapacityProviderSessionStatus::Provisioning:
      return "Provisioning";
    case CapacityProviderSessionStatus::Deprovisioning:
      return "Deprovisioning";
    case CapacityProviderSessionStatus::Active:
      return "Active";
    case CapacityProviderSessionStatus::Deleting:
      return "Deleting";
    case CapacityProviderSessionStatus::Deleted:
      return "Deleted";
    case CapacityProviderSessionStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderSessionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
