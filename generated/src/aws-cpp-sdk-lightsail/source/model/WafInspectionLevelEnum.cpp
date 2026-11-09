/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/WafInspectionLevelEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace WafInspectionLevelEnumMapper {

static const int COMMON_HASH = HashingUtils::HashString("COMMON");
static const int TARGETED_HASH = HashingUtils::HashString("TARGETED");

WafInspectionLevelEnum GetWafInspectionLevelEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMMON_HASH) {
    return WafInspectionLevelEnum::COMMON;
  } else if (hashCode == TARGETED_HASH) {
    return WafInspectionLevelEnum::TARGETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WafInspectionLevelEnum>(hashCode);
  }

  return WafInspectionLevelEnum::NOT_SET;
}

Aws::String GetNameForWafInspectionLevelEnum(WafInspectionLevelEnum enumValue) {
  switch (enumValue) {
    case WafInspectionLevelEnum::NOT_SET:
      return {};
    case WafInspectionLevelEnum::COMMON:
      return "COMMON";
    case WafInspectionLevelEnum::TARGETED:
      return "TARGETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WafInspectionLevelEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
