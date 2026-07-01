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
enum class AccountVpcEncryptionControlMode { NOT_SET, unmanaged, attempt_monitor, attempt_enforce };

namespace AccountVpcEncryptionControlModeMapper {
AWS_EC2_API AccountVpcEncryptionControlMode GetAccountVpcEncryptionControlModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAccountVpcEncryptionControlMode(AccountVpcEncryptionControlMode value);
}  // namespace AccountVpcEncryptionControlModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
