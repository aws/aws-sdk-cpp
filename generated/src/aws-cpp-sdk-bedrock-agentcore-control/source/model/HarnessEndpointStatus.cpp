/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessEndpointStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace HarnessEndpointStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

HarnessEndpointStatus GetHarnessEndpointStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return HarnessEndpointStatus::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return HarnessEndpointStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return HarnessEndpointStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return HarnessEndpointStatus::UPDATE_FAILED;
  } else if (hashCode == READY_HASH) {
    return HarnessEndpointStatus::READY;
  } else if (hashCode == DELETING_HASH) {
    return HarnessEndpointStatus::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return HarnessEndpointStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessEndpointStatus>(hashCode);
  }

  return HarnessEndpointStatus::NOT_SET;
}

Aws::String GetNameForHarnessEndpointStatus(HarnessEndpointStatus enumValue) {
  switch (enumValue) {
    case HarnessEndpointStatus::NOT_SET:
      return {};
    case HarnessEndpointStatus::CREATING:
      return "CREATING";
    case HarnessEndpointStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case HarnessEndpointStatus::UPDATING:
      return "UPDATING";
    case HarnessEndpointStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case HarnessEndpointStatus::READY:
      return "READY";
    case HarnessEndpointStatus::DELETING:
      return "DELETING";
    case HarnessEndpointStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessEndpointStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
