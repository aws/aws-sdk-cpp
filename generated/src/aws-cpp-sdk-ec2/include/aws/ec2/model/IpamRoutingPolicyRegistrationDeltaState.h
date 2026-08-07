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
enum class IpamRoutingPolicyRegistrationDeltaState { NOT_SET, pending, published, failed };

namespace IpamRoutingPolicyRegistrationDeltaStateMapper {
AWS_EC2_API IpamRoutingPolicyRegistrationDeltaState GetIpamRoutingPolicyRegistrationDeltaStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamRoutingPolicyRegistrationDeltaState(IpamRoutingPolicyRegistrationDeltaState value);
}  // namespace IpamRoutingPolicyRegistrationDeltaStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
