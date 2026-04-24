/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyEngineStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PolicyEngineStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

PolicyEngineStatus GetPolicyEngineStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return PolicyEngineStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return PolicyEngineStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return PolicyEngineStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return PolicyEngineStatus::DELETING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return PolicyEngineStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return PolicyEngineStatus::UPDATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PolicyEngineStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyEngineStatus>(hashCode);
  }

  return PolicyEngineStatus::NOT_SET;
}

Aws::String GetNameForPolicyEngineStatus(PolicyEngineStatus enumValue) {
  switch (enumValue) {
    case PolicyEngineStatus::NOT_SET:
      return {};
    case PolicyEngineStatus::CREATING:
      return "CREATING";
    case PolicyEngineStatus::ACTIVE:
      return "ACTIVE";
    case PolicyEngineStatus::UPDATING:
      return "UPDATING";
    case PolicyEngineStatus::DELETING:
      return "DELETING";
    case PolicyEngineStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case PolicyEngineStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case PolicyEngineStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyEngineStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
