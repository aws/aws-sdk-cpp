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
enum class FlexCostAllocationReportingGranularity { NOT_SET, eni, ec2, subnet, vpc, account, peering_id, cidr };

namespace FlexCostAllocationReportingGranularityMapper {
AWS_EC2_API FlexCostAllocationReportingGranularity GetFlexCostAllocationReportingGranularityForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFlexCostAllocationReportingGranularity(FlexCostAllocationReportingGranularity value);
}  // namespace FlexCostAllocationReportingGranularityMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
