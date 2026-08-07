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
enum class IpamRoutingPolicyRegistrationState {
  NOT_SET,
  pending_activate,
  activate_failed,
  create_in_progress,
  create_complete,
  update_in_progress,
  update_complete,
  delete_in_progress,
  delete_complete
};

namespace IpamRoutingPolicyRegistrationStateMapper {
AWS_EC2_API IpamRoutingPolicyRegistrationState GetIpamRoutingPolicyRegistrationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamRoutingPolicyRegistrationState(IpamRoutingPolicyRegistrationState value);
}  // namespace IpamRoutingPolicyRegistrationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
