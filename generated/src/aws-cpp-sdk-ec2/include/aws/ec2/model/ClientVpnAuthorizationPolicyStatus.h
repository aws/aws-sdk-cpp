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
enum class ClientVpnAuthorizationPolicyStatus { NOT_SET, creating, updating, active, failed, deleting };

namespace ClientVpnAuthorizationPolicyStatusMapper {
AWS_EC2_API ClientVpnAuthorizationPolicyStatus GetClientVpnAuthorizationPolicyStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForClientVpnAuthorizationPolicyStatus(ClientVpnAuthorizationPolicyStatus value);
}  // namespace ClientVpnAuthorizationPolicyStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
