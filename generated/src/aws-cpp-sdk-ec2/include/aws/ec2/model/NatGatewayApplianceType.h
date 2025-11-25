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
enum class NatGatewayApplianceType { NOT_SET, network_firewall_proxy };

namespace NatGatewayApplianceTypeMapper {
AWS_EC2_API NatGatewayApplianceType GetNatGatewayApplianceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNatGatewayApplianceType(NatGatewayApplianceType value);
}  // namespace NatGatewayApplianceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
