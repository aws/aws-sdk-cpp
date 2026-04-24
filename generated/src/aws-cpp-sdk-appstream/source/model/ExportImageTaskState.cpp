/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ExportImageTaskState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ExportImageTaskStateMapper {

static const int EXPORTING_HASH = HashingUtils::HashString("EXPORTING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ExportImageTaskState GetExportImageTaskStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXPORTING_HASH) {
    return ExportImageTaskState::EXPORTING;
  } else if (hashCode == COMPLETED_HASH) {
    return ExportImageTaskState::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ExportImageTaskState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportImageTaskState>(hashCode);
  }

  return ExportImageTaskState::NOT_SET;
}

Aws::String GetNameForExportImageTaskState(ExportImageTaskState enumValue) {
  switch (enumValue) {
    case ExportImageTaskState::NOT_SET:
      return {};
    case ExportImageTaskState::EXPORTING:
      return "EXPORTING";
    case ExportImageTaskState::COMPLETED:
      return "COMPLETED";
    case ExportImageTaskState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportImageTaskStateMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
