/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisLogExportStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace AnalysisLogExportStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AnalysisLogExportStatus GetAnalysisLogExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return AnalysisLogExportStatus::IN_PROGRESS;
  } else if (hashCode == SUCCESS_HASH) {
    return AnalysisLogExportStatus::SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return AnalysisLogExportStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisLogExportStatus>(hashCode);
  }

  return AnalysisLogExportStatus::NOT_SET;
}

Aws::String GetNameForAnalysisLogExportStatus(AnalysisLogExportStatus enumValue) {
  switch (enumValue) {
    case AnalysisLogExportStatus::NOT_SET:
      return {};
    case AnalysisLogExportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AnalysisLogExportStatus::SUCCESS:
      return "SUCCESS";
    case AnalysisLogExportStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisLogExportStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
