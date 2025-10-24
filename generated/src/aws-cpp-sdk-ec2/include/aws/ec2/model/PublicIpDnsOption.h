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
enum class PublicIpDnsOption { NOT_SET, public_dual_stack_dns_name, public_ipv4_dns_name, public_ipv6_dns_name };

namespace PublicIpDnsOptionMapper {
AWS_EC2_API PublicIpDnsOption GetPublicIpDnsOptionForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPublicIpDnsOption(PublicIpDnsOption value);
}  // namespace PublicIpDnsOptionMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
