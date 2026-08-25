/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ReservedCapacityFallbackMarketType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ReservedCapacityFallbackMarketTypeMapper {

static const int on_demand_HASH = HashingUtils::HashString("on-demand");

ReservedCapacityFallbackMarketType GetReservedCapacityFallbackMarketTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == on_demand_HASH) {
    return ReservedCapacityFallbackMarketType::on_demand;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReservedCapacityFallbackMarketType>(hashCode);
  }

  return ReservedCapacityFallbackMarketType::NOT_SET;
}

Aws::String GetNameForReservedCapacityFallbackMarketType(ReservedCapacityFallbackMarketType enumValue) {
  switch (enumValue) {
    case ReservedCapacityFallbackMarketType::NOT_SET:
      return {};
    case ReservedCapacityFallbackMarketType::on_demand:
      return "on-demand";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReservedCapacityFallbackMarketTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
