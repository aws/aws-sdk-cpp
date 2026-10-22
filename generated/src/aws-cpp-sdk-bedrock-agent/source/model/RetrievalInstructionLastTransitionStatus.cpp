/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionLastTransitionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace RetrievalInstructionLastTransitionStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int CREATE_SUCCESSFUL_HASH = HashingUtils::HashString("CREATE_SUCCESSFUL");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_SUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_SUCCESSFUL");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");

RetrievalInstructionLastTransitionStatus GetRetrievalInstructionLastTransitionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RetrievalInstructionLastTransitionStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return RetrievalInstructionLastTransitionStatus::UPDATING;
  } else if (hashCode == CREATE_SUCCESSFUL_HASH) {
    return RetrievalInstructionLastTransitionStatus::CREATE_SUCCESSFUL;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return RetrievalInstructionLastTransitionStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_SUCCESSFUL_HASH) {
    return RetrievalInstructionLastTransitionStatus::UPDATE_SUCCESSFUL;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return RetrievalInstructionLastTransitionStatus::UPDATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetrievalInstructionLastTransitionStatus>(hashCode);
  }

  return RetrievalInstructionLastTransitionStatus::NOT_SET;
}

Aws::String GetNameForRetrievalInstructionLastTransitionStatus(RetrievalInstructionLastTransitionStatus enumValue) {
  switch (enumValue) {
    case RetrievalInstructionLastTransitionStatus::NOT_SET:
      return {};
    case RetrievalInstructionLastTransitionStatus::CREATING:
      return "CREATING";
    case RetrievalInstructionLastTransitionStatus::UPDATING:
      return "UPDATING";
    case RetrievalInstructionLastTransitionStatus::CREATE_SUCCESSFUL:
      return "CREATE_SUCCESSFUL";
    case RetrievalInstructionLastTransitionStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case RetrievalInstructionLastTransitionStatus::UPDATE_SUCCESSFUL:
      return "UPDATE_SUCCESSFUL";
    case RetrievalInstructionLastTransitionStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetrievalInstructionLastTransitionStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
