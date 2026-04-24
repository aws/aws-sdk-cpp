/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace RegistryStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

RegistryStatus GetRegistryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RegistryStatus::CREATING;
  } else if (hashCode == READY_HASH) {
    return RegistryStatus::READY;
  } else if (hashCode == UPDATING_HASH) {
    return RegistryStatus::UPDATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return RegistryStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return RegistryStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return RegistryStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return RegistryStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryStatus>(hashCode);
  }

  return RegistryStatus::NOT_SET;
}

Aws::String GetNameForRegistryStatus(RegistryStatus enumValue) {
  switch (enumValue) {
    case RegistryStatus::NOT_SET:
      return {};
    case RegistryStatus::CREATING:
      return "CREATING";
    case RegistryStatus::READY:
      return "READY";
    case RegistryStatus::UPDATING:
      return "UPDATING";
    case RegistryStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case RegistryStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case RegistryStatus::DELETING:
      return "DELETING";
    case RegistryStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
