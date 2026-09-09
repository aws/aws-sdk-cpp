/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/SummaryGenerationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace SummaryGenerationModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

SummaryGenerationMode GetSummaryGenerationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return SummaryGenerationMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return SummaryGenerationMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SummaryGenerationMode>(hashCode);
  }

  return SummaryGenerationMode::NOT_SET;
}

Aws::String GetNameForSummaryGenerationMode(SummaryGenerationMode enumValue) {
  switch (enumValue) {
    case SummaryGenerationMode::NOT_SET:
      return {};
    case SummaryGenerationMode::ENABLED:
      return "ENABLED";
    case SummaryGenerationMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SummaryGenerationModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
