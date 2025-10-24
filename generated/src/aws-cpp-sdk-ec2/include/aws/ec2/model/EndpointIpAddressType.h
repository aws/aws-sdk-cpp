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
enum class EndpointIpAddressType { NOT_SET, ipv4, ipv6, dual_stack };

namespace EndpointIpAddressTypeMapper {
AWS_EC2_API EndpointIpAddressType GetEndpointIpAddressTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEndpointIpAddressType(EndpointIpAddressType value);
}  // namespace EndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
