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
enum class IpamPrefixListResolverRuleType { NOT_SET, static_cidr, ipam_resource_cidr, ipam_pool_cidr };

namespace IpamPrefixListResolverRuleTypeMapper {
AWS_EC2_API IpamPrefixListResolverRuleType GetIpamPrefixListResolverRuleTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPrefixListResolverRuleType(IpamPrefixListResolverRuleType value);
}  // namespace IpamPrefixListResolverRuleTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
