/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PolicyStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

PolicyStatus GetPolicyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return PolicyStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return PolicyStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return PolicyStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return PolicyStatus::DELETING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return PolicyStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return PolicyStatus::UPDATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PolicyStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyStatus>(hashCode);
  }

  return PolicyStatus::NOT_SET;
}

Aws::String GetNameForPolicyStatus(PolicyStatus enumValue) {
  switch (enumValue) {
    case PolicyStatus::NOT_SET:
      return {};
    case PolicyStatus::CREATING:
      return "CREATING";
    case PolicyStatus::ACTIVE:
      return "ACTIVE";
    case PolicyStatus::UPDATING:
      return "UPDATING";
    case PolicyStatus::DELETING:
      return "DELETING";
    case PolicyStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case PolicyStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case PolicyStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
