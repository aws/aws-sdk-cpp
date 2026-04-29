/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ABTestStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ABTestStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ABTestStatus GetABTestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ABTestStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ABTestStatus::ACTIVE;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return ABTestStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return ABTestStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return ABTestStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return ABTestStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return ABTestStatus::DELETE_FAILED;
  } else if (hashCode == FAILED_HASH) {
    return ABTestStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ABTestStatus>(hashCode);
  }

  return ABTestStatus::NOT_SET;
}

Aws::String GetNameForABTestStatus(ABTestStatus enumValue) {
  switch (enumValue) {
    case ABTestStatus::NOT_SET:
      return {};
    case ABTestStatus::CREATING:
      return "CREATING";
    case ABTestStatus::ACTIVE:
      return "ACTIVE";
    case ABTestStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case ABTestStatus::UPDATING:
      return "UPDATING";
    case ABTestStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case ABTestStatus::DELETING:
      return "DELETING";
    case ABTestStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    case ABTestStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ABTestStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
