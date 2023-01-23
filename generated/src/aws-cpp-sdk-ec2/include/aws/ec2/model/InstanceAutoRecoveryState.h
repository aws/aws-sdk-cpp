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
  enum class InstanceAutoRecoveryState
  {
    NOT_SET,
    disabled,
    default_
  };

namespace InstanceAutoRecoveryStateMapper
{
AWS_EC2_API InstanceAutoRecoveryState GetInstanceAutoRecoveryStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceAutoRecoveryState(InstanceAutoRecoveryState value);
} // namespace InstanceAutoRecoveryStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
