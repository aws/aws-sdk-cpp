/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/CapacityOptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace CapacityOptionTypeMapper {

static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
static const int SPOT_HASH = HashingUtils::HashString("SPOT");

CapacityOptionType GetCapacityOptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_DEMAND_HASH) {
    return CapacityOptionType::ON_DEMAND;
  } else if (hashCode == SPOT_HASH) {
    return CapacityOptionType::SPOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityOptionType>(hashCode);
  }

  return CapacityOptionType::NOT_SET;
}

Aws::String GetNameForCapacityOptionType(CapacityOptionType enumValue) {
  switch (enumValue) {
    case CapacityOptionType::NOT_SET:
      return {};
    case CapacityOptionType::ON_DEMAND:
      return "ON_DEMAND";
    case CapacityOptionType::SPOT:
      return "SPOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityOptionTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
