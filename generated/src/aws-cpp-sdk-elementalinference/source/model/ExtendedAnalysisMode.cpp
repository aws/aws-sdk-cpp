/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/ExtendedAnalysisMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace ExtendedAnalysisModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ExtendedAnalysisMode GetExtendedAnalysisModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ExtendedAnalysisMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ExtendedAnalysisMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtendedAnalysisMode>(hashCode);
  }

  return ExtendedAnalysisMode::NOT_SET;
}

Aws::String GetNameForExtendedAnalysisMode(ExtendedAnalysisMode enumValue) {
  switch (enumValue) {
    case ExtendedAnalysisMode::NOT_SET:
      return {};
    case ExtendedAnalysisMode::ENABLED:
      return "ENABLED";
    case ExtendedAnalysisMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtendedAnalysisModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
