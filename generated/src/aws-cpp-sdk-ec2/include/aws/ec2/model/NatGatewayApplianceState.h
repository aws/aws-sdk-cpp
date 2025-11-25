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
enum class NatGatewayApplianceState { NOT_SET, attaching, attached, detaching, detached, attach_failed, detach_failed };

namespace NatGatewayApplianceStateMapper {
AWS_EC2_API NatGatewayApplianceState GetNatGatewayApplianceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNatGatewayApplianceState(NatGatewayApplianceState value);
}  // namespace NatGatewayApplianceStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
