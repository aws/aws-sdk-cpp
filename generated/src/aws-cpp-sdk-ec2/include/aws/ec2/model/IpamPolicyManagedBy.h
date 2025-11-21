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
enum class IpamPolicyManagedBy { NOT_SET, account, delegated_administrator_for_ipam };

namespace IpamPolicyManagedByMapper {
AWS_EC2_API IpamPolicyManagedBy GetIpamPolicyManagedByForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPolicyManagedBy(IpamPolicyManagedBy value);
}  // namespace IpamPolicyManagedByMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
