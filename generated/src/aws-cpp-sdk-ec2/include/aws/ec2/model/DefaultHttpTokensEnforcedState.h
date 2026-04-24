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
enum class DefaultHttpTokensEnforcedState { NOT_SET, disabled, enabled, no_preference };

namespace DefaultHttpTokensEnforcedStateMapper {
AWS_EC2_API DefaultHttpTokensEnforcedState GetDefaultHttpTokensEnforcedStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDefaultHttpTokensEnforcedState(DefaultHttpTokensEnforcedState value);
}  // namespace DefaultHttpTokensEnforcedStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
