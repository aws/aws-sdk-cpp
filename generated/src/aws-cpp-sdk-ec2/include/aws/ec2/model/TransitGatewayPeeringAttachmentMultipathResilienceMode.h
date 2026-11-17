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
enum class TransitGatewayPeeringAttachmentMultipathResilienceMode { NOT_SET, always_on };

namespace TransitGatewayPeeringAttachmentMultipathResilienceModeMapper {
AWS_EC2_API TransitGatewayPeeringAttachmentMultipathResilienceMode
GetTransitGatewayPeeringAttachmentMultipathResilienceModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(
    TransitGatewayPeeringAttachmentMultipathResilienceMode value);
}  // namespace TransitGatewayPeeringAttachmentMultipathResilienceModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
