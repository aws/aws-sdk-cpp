/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DataSourceStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace DataSourceStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_UNSUCCESSFUL_HASH = HashingUtils::HashString("DELETE_UNSUCCESSFUL");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DataSourceStatus GetDataSourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return DataSourceStatus::AVAILABLE;
  } else if (hashCode == DELETING_HASH) {
    return DataSourceStatus::DELETING;
  } else if (hashCode == DELETE_UNSUCCESSFUL_HASH) {
    return DataSourceStatus::DELETE_UNSUCCESSFUL;
  } else if (hashCode == CREATING_HASH) {
    return DataSourceStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return DataSourceStatus::UPDATING;
  } else if (hashCode == FAILED_HASH) {
    return DataSourceStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSourceStatus>(hashCode);
  }

  return DataSourceStatus::NOT_SET;
}

Aws::String GetNameForDataSourceStatus(DataSourceStatus enumValue) {
  switch (enumValue) {
    case DataSourceStatus::NOT_SET:
      return {};
    case DataSourceStatus::AVAILABLE:
      return "AVAILABLE";
    case DataSourceStatus::DELETING:
      return "DELETING";
    case DataSourceStatus::DELETE_UNSUCCESSFUL:
      return "DELETE_UNSUCCESSFUL";
    case DataSourceStatus::CREATING:
      return "CREATING";
    case DataSourceStatus::UPDATING:
      return "UPDATING";
    case DataSourceStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSourceStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
