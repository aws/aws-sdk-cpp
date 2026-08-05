/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ExportSetting.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ExportSettingMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ExportSetting GetExportSettingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ExportSetting::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ExportSetting::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportSetting>(hashCode);
  }

  return ExportSetting::NOT_SET;
}

Aws::String GetNameForExportSetting(ExportSetting enumValue) {
  switch (enumValue) {
    case ExportSetting::NOT_SET:
      return {};
    case ExportSetting::ENABLED:
      return "ENABLED";
    case ExportSetting::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportSettingMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
