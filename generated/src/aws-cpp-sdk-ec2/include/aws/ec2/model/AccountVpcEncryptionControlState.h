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
enum class AccountVpcEncryptionControlState {
  NOT_SET,
  default_state,
  transitions_in_progress,
  transitions_partially_successful,
  transitions_successful,
  transitions_failed
};

namespace AccountVpcEncryptionControlStateMapper {
AWS_EC2_API AccountVpcEncryptionControlState GetAccountVpcEncryptionControlStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAccountVpcEncryptionControlState(AccountVpcEncryptionControlState value);
}  // namespace AccountVpcEncryptionControlStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
