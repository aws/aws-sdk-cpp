/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityProviderStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace CapacityProviderStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

CapacityProviderStatus GetCapacityProviderStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return CapacityProviderStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return CapacityProviderStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return CapacityProviderStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return CapacityProviderStatus::UPDATE_FAILED;
  } else if (hashCode == READY_HASH) {
    return CapacityProviderStatus::READY;
  } else if (hashCode == DELETING_HASH) {
    return CapacityProviderStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return CapacityProviderStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderStatus>(hashCode);
  }

  return CapacityProviderStatus::NOT_SET;
}

Aws::String GetNameForCapacityProviderStatus(CapacityProviderStatus enumValue) {
  switch (enumValue) {
    case CapacityProviderStatus::NOT_SET:
      return {};
    case CapacityProviderStatus::CREATING:
      return "CREATING";
    case CapacityProviderStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case CapacityProviderStatus::UPDATING:
      return "UPDATING";
    case CapacityProviderStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case CapacityProviderStatus::READY:
      return "READY";
    case CapacityProviderStatus::DELETING:
      return "DELETING";
    case CapacityProviderStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
