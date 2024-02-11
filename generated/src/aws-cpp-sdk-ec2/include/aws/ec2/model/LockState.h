/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class LockState
  {
    NOT_SET,
    compliance,
    governance,
    compliance_cooloff,
    expired
  };

namespace LockStateMapper
{
AWS_EC2_API LockState GetLockStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLockState(LockState value);
} // namespace LockStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
