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
enum class IpamResourceType { NOT_SET, vpc, subnet, eip, public_ipv4_pool, ipv6_pool, eni, anycast_ip_list };

namespace IpamResourceTypeMapper {
AWS_EC2_API IpamResourceType GetIpamResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamResourceType(IpamResourceType value);
}  // namespace IpamResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
