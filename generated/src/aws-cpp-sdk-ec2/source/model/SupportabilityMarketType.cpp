/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SupportabilityMarketType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SupportabilityMarketTypeMapper {

static const int on_demand_HASH = HashingUtils::HashString("on-demand");
static const int spot_HASH = HashingUtils::HashString("spot");

SupportabilityMarketType GetSupportabilityMarketTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == on_demand_HASH) {
    return SupportabilityMarketType::on_demand;
  } else if (hashCode == spot_HASH) {
    return SupportabilityMarketType::spot;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupportabilityMarketType>(hashCode);
  }

  return SupportabilityMarketType::NOT_SET;
}

Aws::String GetNameForSupportabilityMarketType(SupportabilityMarketType enumValue) {
  switch (enumValue) {
    case SupportabilityMarketType::NOT_SET:
      return {};
    case SupportabilityMarketType::on_demand:
      return "on-demand";
    case SupportabilityMarketType::spot:
      return "spot";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupportabilityMarketTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
