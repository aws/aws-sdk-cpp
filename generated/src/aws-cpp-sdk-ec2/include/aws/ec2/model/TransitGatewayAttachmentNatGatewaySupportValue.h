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
enum class TransitGatewayAttachmentNatGatewaySupportValue { NOT_SET, enable, disable };

namespace TransitGatewayAttachmentNatGatewaySupportValueMapper {
AWS_EC2_API TransitGatewayAttachmentNatGatewaySupportValue
GetTransitGatewayAttachmentNatGatewaySupportValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayAttachmentNatGatewaySupportValue(TransitGatewayAttachmentNatGatewaySupportValue value);
}  // namespace TransitGatewayAttachmentNatGatewaySupportValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
