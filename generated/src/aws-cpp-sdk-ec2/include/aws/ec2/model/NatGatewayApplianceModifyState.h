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
enum class NatGatewayApplianceModifyState { NOT_SET, modifying, completed, failed };

namespace NatGatewayApplianceModifyStateMapper {
AWS_EC2_API NatGatewayApplianceModifyState GetNatGatewayApplianceModifyStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNatGatewayApplianceModifyState(NatGatewayApplianceModifyState value);
}  // namespace NatGatewayApplianceModifyStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
