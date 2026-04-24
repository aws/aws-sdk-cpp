/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace EvaluatorStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

EvaluatorStatus GetEvaluatorStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EvaluatorStatus::ACTIVE;
  } else if (hashCode == CREATING_HASH) {
    return EvaluatorStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return EvaluatorStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return EvaluatorStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return EvaluatorStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return EvaluatorStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluatorStatus>(hashCode);
  }

  return EvaluatorStatus::NOT_SET;
}

Aws::String GetNameForEvaluatorStatus(EvaluatorStatus enumValue) {
  switch (enumValue) {
    case EvaluatorStatus::NOT_SET:
      return {};
    case EvaluatorStatus::ACTIVE:
      return "ACTIVE";
    case EvaluatorStatus::CREATING:
      return "CREATING";
    case EvaluatorStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case EvaluatorStatus::UPDATING:
      return "UPDATING";
    case EvaluatorStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case EvaluatorStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluatorStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
