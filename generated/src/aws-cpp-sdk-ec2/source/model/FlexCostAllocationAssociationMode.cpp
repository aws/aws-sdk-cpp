/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FlexCostAllocationAssociationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FlexCostAllocationAssociationModeMapper {

static const int direct_HASH = HashingUtils::HashString("direct");
static const int scope_HASH = HashingUtils::HashString("scope");

FlexCostAllocationAssociationMode GetFlexCostAllocationAssociationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == direct_HASH) {
    return FlexCostAllocationAssociationMode::direct;
  } else if (hashCode == scope_HASH) {
    return FlexCostAllocationAssociationMode::scope;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlexCostAllocationAssociationMode>(hashCode);
  }

  return FlexCostAllocationAssociationMode::NOT_SET;
}

Aws::String GetNameForFlexCostAllocationAssociationMode(FlexCostAllocationAssociationMode enumValue) {
  switch (enumValue) {
    case FlexCostAllocationAssociationMode::NOT_SET:
      return {};
    case FlexCostAllocationAssociationMode::direct:
      return "direct";
    case FlexCostAllocationAssociationMode::scope:
      return "scope";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlexCostAllocationAssociationModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
