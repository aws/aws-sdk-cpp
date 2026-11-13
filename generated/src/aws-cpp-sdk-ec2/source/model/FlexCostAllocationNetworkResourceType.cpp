/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FlexCostAllocationNetworkResourceTypeMapper {

static const int natgw_HASH = HashingUtils::HashString("natgw");
static const int pcx_HASH = HashingUtils::HashString("pcx");
static const int ec2_HASH = HashingUtils::HashString("ec2");

FlexCostAllocationNetworkResourceType GetFlexCostAllocationNetworkResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == natgw_HASH) {
    return FlexCostAllocationNetworkResourceType::natgw;
  } else if (hashCode == pcx_HASH) {
    return FlexCostAllocationNetworkResourceType::pcx;
  } else if (hashCode == ec2_HASH) {
    return FlexCostAllocationNetworkResourceType::ec2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlexCostAllocationNetworkResourceType>(hashCode);
  }

  return FlexCostAllocationNetworkResourceType::NOT_SET;
}

Aws::String GetNameForFlexCostAllocationNetworkResourceType(FlexCostAllocationNetworkResourceType enumValue) {
  switch (enumValue) {
    case FlexCostAllocationNetworkResourceType::NOT_SET:
      return {};
    case FlexCostAllocationNetworkResourceType::natgw:
      return "natgw";
    case FlexCostAllocationNetworkResourceType::pcx:
      return "pcx";
    case FlexCostAllocationNetworkResourceType::ec2:
      return "ec2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlexCostAllocationNetworkResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
