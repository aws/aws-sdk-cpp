/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DatasetExportJobFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DatasetExportJobFilterMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DatasetExportJobFilter GetDatasetExportJobFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return DatasetExportJobFilter::ALL;
  } else if (hashCode == SUBMITTED_HASH) {
    return DatasetExportJobFilter::SUBMITTED;
  } else if (hashCode == RUNNING_HASH) {
    return DatasetExportJobFilter::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return DatasetExportJobFilter::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return DatasetExportJobFilter::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return DatasetExportJobFilter::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetExportJobFilter>(hashCode);
  }

  return DatasetExportJobFilter::NOT_SET;
}

Aws::String GetNameForDatasetExportJobFilter(DatasetExportJobFilter enumValue) {
  switch (enumValue) {
    case DatasetExportJobFilter::NOT_SET:
      return {};
    case DatasetExportJobFilter::ALL:
      return "ALL";
    case DatasetExportJobFilter::SUBMITTED:
      return "SUBMITTED";
    case DatasetExportJobFilter::RUNNING:
      return "RUNNING";
    case DatasetExportJobFilter::COMPLETED:
      return "COMPLETED";
    case DatasetExportJobFilter::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case DatasetExportJobFilter::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetExportJobFilterMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
