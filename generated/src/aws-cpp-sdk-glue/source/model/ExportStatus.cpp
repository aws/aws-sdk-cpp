/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ExportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ExportStatusMapper {

static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ExportStatus GetExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLING_HASH) {
    return ExportStatus::ENABLING;
  } else if (hashCode == ENABLED_HASH) {
    return ExportStatus::ENABLED;
  } else if (hashCode == DISABLING_HASH) {
    return ExportStatus::DISABLING;
  } else if (hashCode == DISABLED_HASH) {
    return ExportStatus::DISABLED;
  } else if (hashCode == FAILED_HASH) {
    return ExportStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportStatus>(hashCode);
  }

  return ExportStatus::NOT_SET;
}

Aws::String GetNameForExportStatus(ExportStatus enumValue) {
  switch (enumValue) {
    case ExportStatus::NOT_SET:
      return {};
    case ExportStatus::ENABLING:
      return "ENABLING";
    case ExportStatus::ENABLED:
      return "ENABLED";
    case ExportStatus::DISABLING:
      return "DISABLING";
    case ExportStatus::DISABLED:
      return "DISABLED";
    case ExportStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
