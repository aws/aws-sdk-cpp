/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class FlexCostAllocationCostDimension { NOT_SET, data_transfer, data_processing };

namespace FlexCostAllocationCostDimensionMapper {
AWS_EC2_API FlexCostAllocationCostDimension GetFlexCostAllocationCostDimensionForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFlexCostAllocationCostDimension(FlexCostAllocationCostDimension value);
}  // namespace FlexCostAllocationCostDimensionMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
