/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DatasetGenerationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace DatasetGenerationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

DatasetGenerationStatus GetDatasetGenerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return DatasetGenerationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return DatasetGenerationStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return DatasetGenerationStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return DatasetGenerationStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return DatasetGenerationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetGenerationStatus>(hashCode);
  }

  return DatasetGenerationStatus::NOT_SET;
}

Aws::String GetNameForDatasetGenerationStatus(DatasetGenerationStatus enumValue) {
  switch (enumValue) {
    case DatasetGenerationStatus::NOT_SET:
      return {};
    case DatasetGenerationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DatasetGenerationStatus::COMPLETED:
      return "COMPLETED";
    case DatasetGenerationStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case DatasetGenerationStatus::FAILED:
      return "FAILED";
    case DatasetGenerationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetGenerationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
