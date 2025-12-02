/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OnlineEvaluationConfigStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

OnlineEvaluationConfigStatus GetOnlineEvaluationConfigStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return OnlineEvaluationConfigStatus::ACTIVE;
  } else if (hashCode == CREATING_HASH) {
    return OnlineEvaluationConfigStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return OnlineEvaluationConfigStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return OnlineEvaluationConfigStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return OnlineEvaluationConfigStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return OnlineEvaluationConfigStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnlineEvaluationConfigStatus>(hashCode);
  }

  return OnlineEvaluationConfigStatus::NOT_SET;
}

Aws::String GetNameForOnlineEvaluationConfigStatus(OnlineEvaluationConfigStatus enumValue) {
  switch (enumValue) {
    case OnlineEvaluationConfigStatus::NOT_SET:
      return {};
    case OnlineEvaluationConfigStatus::ACTIVE:
      return "ACTIVE";
    case OnlineEvaluationConfigStatus::CREATING:
      return "CREATING";
    case OnlineEvaluationConfigStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case OnlineEvaluationConfigStatus::UPDATING:
      return "UPDATING";
    case OnlineEvaluationConfigStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case OnlineEvaluationConfigStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnlineEvaluationConfigStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
