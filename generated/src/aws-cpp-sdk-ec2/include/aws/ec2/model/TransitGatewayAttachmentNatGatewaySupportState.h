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
enum class TransitGatewayAttachmentNatGatewaySupportState { NOT_SET, enabled, disabled, enabling, disabling };

namespace TransitGatewayAttachmentNatGatewaySupportStateMapper {
AWS_EC2_API TransitGatewayAttachmentNatGatewaySupportState
GetTransitGatewayAttachmentNatGatewaySupportStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayAttachmentNatGatewaySupportState(TransitGatewayAttachmentNatGatewaySupportState value);
}  // namespace TransitGatewayAttachmentNatGatewaySupportStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
