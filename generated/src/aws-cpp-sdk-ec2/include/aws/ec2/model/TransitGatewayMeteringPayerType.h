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
enum class TransitGatewayMeteringPayerType { NOT_SET, source_attachment_owner, destination_attachment_owner, transit_gateway_owner };

namespace TransitGatewayMeteringPayerTypeMapper {
AWS_EC2_API TransitGatewayMeteringPayerType GetTransitGatewayMeteringPayerTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayMeteringPayerType(TransitGatewayMeteringPayerType value);
}  // namespace TransitGatewayMeteringPayerTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
