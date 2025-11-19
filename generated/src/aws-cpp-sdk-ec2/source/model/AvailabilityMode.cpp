/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AvailabilityMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AvailabilityModeMapper {

static const int zonal_HASH = HashingUtils::HashString("zonal");
static const int regional_HASH = HashingUtils::HashString("regional");

AvailabilityMode GetAvailabilityModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == zonal_HASH) {
    return AvailabilityMode::zonal;
  } else if (hashCode == regional_HASH) {
    return AvailabilityMode::regional;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AvailabilityMode>(hashCode);
  }

  return AvailabilityMode::NOT_SET;
}

Aws::String GetNameForAvailabilityMode(AvailabilityMode enumValue) {
  switch (enumValue) {
    case AvailabilityMode::NOT_SET:
      return {};
    case AvailabilityMode::zonal:
      return "zonal";
    case AvailabilityMode::regional:
      return "regional";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AvailabilityModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
