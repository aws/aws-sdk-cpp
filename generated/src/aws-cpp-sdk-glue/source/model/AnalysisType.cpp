/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/AnalysisType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace AnalysisTypeMapper {

static const int AUTO_UPGRADE_HASH = HashingUtils::HashString("AUTO_UPGRADE");

AnalysisType GetAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_UPGRADE_HASH) {
    return AnalysisType::AUTO_UPGRADE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisType>(hashCode);
  }

  return AnalysisType::NOT_SET;
}

Aws::String GetNameForAnalysisType(AnalysisType enumValue) {
  switch (enumValue) {
    case AnalysisType::NOT_SET:
      return {};
    case AnalysisType::AUTO_UPGRADE:
      return "AUTO_UPGRADE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
