/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ExportDataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ExportDataTypeMapper {

static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");
static const int TELEMETRY_HASH = HashingUtils::HashString("TELEMETRY");
static const int ANNOTATION_HASH = HashingUtils::HashString("ANNOTATION");

ExportDataType GetExportDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VIDEO_HASH) {
    return ExportDataType::VIDEO;
  } else if (hashCode == TELEMETRY_HASH) {
    return ExportDataType::TELEMETRY;
  } else if (hashCode == ANNOTATION_HASH) {
    return ExportDataType::ANNOTATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportDataType>(hashCode);
  }

  return ExportDataType::NOT_SET;
}

Aws::String GetNameForExportDataType(ExportDataType enumValue) {
  switch (enumValue) {
    case ExportDataType::NOT_SET:
      return {};
    case ExportDataType::VIDEO:
      return "VIDEO";
    case ExportDataType::TELEMETRY:
      return "TELEMETRY";
    case ExportDataType::ANNOTATION:
      return "ANNOTATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportDataTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
