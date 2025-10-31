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
enum class IpamPrefixListResolverRuleConditionOperation { NOT_SET, equals, not_equals, subnet_of };

namespace IpamPrefixListResolverRuleConditionOperationMapper {
AWS_EC2_API IpamPrefixListResolverRuleConditionOperation GetIpamPrefixListResolverRuleConditionOperationForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPrefixListResolverRuleConditionOperation(IpamPrefixListResolverRuleConditionOperation value);
}  // namespace IpamPrefixListResolverRuleConditionOperationMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
