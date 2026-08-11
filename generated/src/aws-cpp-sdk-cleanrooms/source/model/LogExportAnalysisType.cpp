/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/LogExportAnalysisType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace LogExportAnalysisTypeMapper {

static const int PROTECTED_QUERY_HASH = HashingUtils::HashString("PROTECTED_QUERY");

LogExportAnalysisType GetLogExportAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROTECTED_QUERY_HASH) {
    return LogExportAnalysisType::PROTECTED_QUERY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogExportAnalysisType>(hashCode);
  }

  return LogExportAnalysisType::NOT_SET;
}

Aws::String GetNameForLogExportAnalysisType(LogExportAnalysisType enumValue) {
  switch (enumValue) {
    case LogExportAnalysisType::NOT_SET:
      return {};
    case LogExportAnalysisType::PROTECTED_QUERY:
      return "PROTECTED_QUERY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogExportAnalysisTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
