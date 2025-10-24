﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class TransitGatewayAttachmentResourceType {
  NOT_SET,
  vpc,
  vpn,
  direct_connect_gateway,
  connect,
  peering,
  tgw_peering,
  network_function
};

namespace TransitGatewayAttachmentResourceTypeMapper {
AWS_EC2_API TransitGatewayAttachmentResourceType GetTransitGatewayAttachmentResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayAttachmentResourceType(TransitGatewayAttachmentResourceType value);
}  // namespace TransitGatewayAttachmentResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
