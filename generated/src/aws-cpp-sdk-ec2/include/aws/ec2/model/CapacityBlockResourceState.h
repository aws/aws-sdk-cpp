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
  enum class CapacityBlockResourceState
  {
    NOT_SET,
    active,
    expired,
    unavailable,
    cancelled,
    failed,
    scheduled,
    payment_pending,
    payment_failed
  };

namespace CapacityBlockResourceStateMapper
{
AWS_EC2_API CapacityBlockResourceState GetCapacityBlockResourceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityBlockResourceState(CapacityBlockResourceState value);
} // namespace CapacityBlockResourceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
