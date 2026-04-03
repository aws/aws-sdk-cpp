/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SelectiveGuardingMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace SelectiveGuardingModeMapper {

static const int SELECTIVE_HASH = HashingUtils::HashString("SELECTIVE");
static const int COMPREHENSIVE_HASH = HashingUtils::HashString("COMPREHENSIVE");

SelectiveGuardingMode GetSelectiveGuardingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELECTIVE_HASH) {
    return SelectiveGuardingMode::SELECTIVE;
  } else if (hashCode == COMPREHENSIVE_HASH) {
    return SelectiveGuardingMode::COMPREHENSIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelectiveGuardingMode>(hashCode);
  }

  return SelectiveGuardingMode::NOT_SET;
}

Aws::String GetNameForSelectiveGuardingMode(SelectiveGuardingMode enumValue) {
  switch (enumValue) {
    case SelectiveGuardingMode::NOT_SET:
      return {};
    case SelectiveGuardingMode::SELECTIVE:
      return "SELECTIVE";
    case SelectiveGuardingMode::COMPREHENSIVE:
      return "COMPREHENSIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelectiveGuardingModeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
