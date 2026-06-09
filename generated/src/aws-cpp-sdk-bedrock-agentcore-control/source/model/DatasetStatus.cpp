/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DatasetStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace DatasetStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

DatasetStatus GetDatasetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return DatasetStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return DatasetStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return DatasetStatus::DELETING;
  } else if (hashCode == ACTIVE_HASH) {
    return DatasetStatus::ACTIVE;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return DatasetStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return DatasetStatus::UPDATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return DatasetStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetStatus>(hashCode);
  }

  return DatasetStatus::NOT_SET;
}

Aws::String GetNameForDatasetStatus(DatasetStatus enumValue) {
  switch (enumValue) {
    case DatasetStatus::NOT_SET:
      return {};
    case DatasetStatus::CREATING:
      return "CREATING";
    case DatasetStatus::UPDATING:
      return "UPDATING";
    case DatasetStatus::DELETING:
      return "DELETING";
    case DatasetStatus::ACTIVE:
      return "ACTIVE";
    case DatasetStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case DatasetStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case DatasetStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
