/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/ZeroCapacityStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace ZeroCapacityStrategyMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int SCALE_TO_AND_FROM_ZERO_HASH = HashingUtils::HashString("SCALE_TO_AND_FROM_ZERO");

ZeroCapacityStrategy GetZeroCapacityStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return ZeroCapacityStrategy::MANUAL;
  } else if (hashCode == SCALE_TO_AND_FROM_ZERO_HASH) {
    return ZeroCapacityStrategy::SCALE_TO_AND_FROM_ZERO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ZeroCapacityStrategy>(hashCode);
  }

  return ZeroCapacityStrategy::NOT_SET;
}

Aws::String GetNameForZeroCapacityStrategy(ZeroCapacityStrategy enumValue) {
  switch (enumValue) {
    case ZeroCapacityStrategy::NOT_SET:
      return {};
    case ZeroCapacityStrategy::MANUAL:
      return "MANUAL";
    case ZeroCapacityStrategy::SCALE_TO_AND_FROM_ZERO:
      return "SCALE_TO_AND_FROM_ZERO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ZeroCapacityStrategyMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
