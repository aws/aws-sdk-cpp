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
enum class IpamPolicyResourceType { NOT_SET, alb, eip, rds, rnat };

namespace IpamPolicyResourceTypeMapper {
AWS_EC2_API IpamPolicyResourceType GetIpamPolicyResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPolicyResourceType(IpamPolicyResourceType value);
}  // namespace IpamPolicyResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
