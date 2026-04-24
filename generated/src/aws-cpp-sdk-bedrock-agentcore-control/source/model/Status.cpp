/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Status.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace StatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

Status GetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return Status::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return Status::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return Status::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return Status::UPDATE_FAILED;
  } else if (hashCode == READY_HASH) {
    return Status::READY;
  } else if (hashCode == DELETING_HASH) {
    return Status::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return Status::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Status>(hashCode);
  }

  return Status::NOT_SET;
}

Aws::String GetNameForStatus(Status enumValue) {
  switch (enumValue) {
    case Status::NOT_SET:
      return {};
    case Status::CREATING:
      return "CREATING";
    case Status::CREATE_FAILED:
      return "CREATE_FAILED";
    case Status::UPDATING:
      return "UPDATING";
    case Status::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case Status::READY:
      return "READY";
    case Status::DELETING:
      return "DELETING";
    case Status::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
