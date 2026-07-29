/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DatasetExportJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DatasetExportJobStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DatasetExportJobStatus GetDatasetExportJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return DatasetExportJobStatus::SUBMITTED;
  } else if (hashCode == RUNNING_HASH) {
    return DatasetExportJobStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return DatasetExportJobStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return DatasetExportJobStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return DatasetExportJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetExportJobStatus>(hashCode);
  }

  return DatasetExportJobStatus::NOT_SET;
}

Aws::String GetNameForDatasetExportJobStatus(DatasetExportJobStatus enumValue) {
  switch (enumValue) {
    case DatasetExportJobStatus::NOT_SET:
      return {};
    case DatasetExportJobStatus::SUBMITTED:
      return "SUBMITTED";
    case DatasetExportJobStatus::RUNNING:
      return "RUNNING";
    case DatasetExportJobStatus::COMPLETED:
      return "COMPLETED";
    case DatasetExportJobStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case DatasetExportJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetExportJobStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
