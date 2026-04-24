/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/LibraryIngestionJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace LibraryIngestionJobStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

LibraryIngestionJobStatus GetLibraryIngestionJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return LibraryIngestionJobStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return LibraryIngestionJobStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return LibraryIngestionJobStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return LibraryIngestionJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LibraryIngestionJobStatus>(hashCode);
  }

  return LibraryIngestionJobStatus::NOT_SET;
}

Aws::String GetNameForLibraryIngestionJobStatus(LibraryIngestionJobStatus enumValue) {
  switch (enumValue) {
    case LibraryIngestionJobStatus::NOT_SET:
      return {};
    case LibraryIngestionJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case LibraryIngestionJobStatus::COMPLETED:
      return "COMPLETED";
    case LibraryIngestionJobStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case LibraryIngestionJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LibraryIngestionJobStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
