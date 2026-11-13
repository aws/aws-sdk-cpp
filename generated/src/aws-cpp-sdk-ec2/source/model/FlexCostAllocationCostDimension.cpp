/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FlexCostAllocationCostDimension.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FlexCostAllocationCostDimensionMapper {

static const int data_transfer_HASH = HashingUtils::HashString("data-transfer");
static const int data_processing_HASH = HashingUtils::HashString("data-processing");

FlexCostAllocationCostDimension GetFlexCostAllocationCostDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == data_transfer_HASH) {
    return FlexCostAllocationCostDimension::data_transfer;
  } else if (hashCode == data_processing_HASH) {
    return FlexCostAllocationCostDimension::data_processing;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlexCostAllocationCostDimension>(hashCode);
  }

  return FlexCostAllocationCostDimension::NOT_SET;
}

Aws::String GetNameForFlexCostAllocationCostDimension(FlexCostAllocationCostDimension enumValue) {
  switch (enumValue) {
    case FlexCostAllocationCostDimension::NOT_SET:
      return {};
    case FlexCostAllocationCostDimension::data_transfer:
      return "data-transfer";
    case FlexCostAllocationCostDimension::data_processing:
      return "data-processing";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlexCostAllocationCostDimensionMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
