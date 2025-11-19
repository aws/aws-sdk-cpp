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
enum class FlowLogsResourceType { NOT_SET, VPC, Subnet, NetworkInterface, TransitGateway, TransitGatewayAttachment, RegionalNatGateway };

namespace FlowLogsResourceTypeMapper {
AWS_EC2_API FlowLogsResourceType GetFlowLogsResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFlowLogsResourceType(FlowLogsResourceType value);
}  // namespace FlowLogsResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
