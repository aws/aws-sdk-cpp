/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NotebookExportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NotebookExportStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

NotebookExportStatus GetNotebookExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return NotebookExportStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return NotebookExportStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return NotebookExportStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotebookExportStatus>(hashCode);
  }

  return NotebookExportStatus::NOT_SET;
}

Aws::String GetNameForNotebookExportStatus(NotebookExportStatus enumValue) {
  switch (enumValue) {
    case NotebookExportStatus::NOT_SET:
      return {};
    case NotebookExportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case NotebookExportStatus::SUCCEEDED:
      return "SUCCEEDED";
    case NotebookExportStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotebookExportStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
