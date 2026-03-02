/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RegionToRunIn.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace RegionToRunInMapper {

static const int activatingRegion_HASH = HashingUtils::HashString("activatingRegion");
static const int deactivatingRegion_HASH = HashingUtils::HashString("deactivatingRegion");
static const int activeRegion_HASH = HashingUtils::HashString("activeRegion");
static const int inactiveRegion_HASH = HashingUtils::HashString("inactiveRegion");

RegionToRunIn GetRegionToRunInForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == activatingRegion_HASH) {
    return RegionToRunIn::activatingRegion;
  } else if (hashCode == deactivatingRegion_HASH) {
    return RegionToRunIn::deactivatingRegion;
  } else if (hashCode == activeRegion_HASH) {
    return RegionToRunIn::activeRegion;
  } else if (hashCode == inactiveRegion_HASH) {
    return RegionToRunIn::inactiveRegion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegionToRunIn>(hashCode);
  }

  return RegionToRunIn::NOT_SET;
}

Aws::String GetNameForRegionToRunIn(RegionToRunIn enumValue) {
  switch (enumValue) {
    case RegionToRunIn::NOT_SET:
      return {};
    case RegionToRunIn::activatingRegion:
      return "activatingRegion";
    case RegionToRunIn::deactivatingRegion:
      return "deactivatingRegion";
    case RegionToRunIn::activeRegion:
      return "activeRegion";
    case RegionToRunIn::inactiveRegion:
      return "inactiveRegion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegionToRunInMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
