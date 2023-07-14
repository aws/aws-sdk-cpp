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
  enum class ReservedInstanceState
  {
    NOT_SET,
    payment_pending,
    active,
    payment_failed,
    retired,
    queued,
    queued_deleted
  };

namespace ReservedInstanceStateMapper
{
AWS_EC2_API ReservedInstanceState GetReservedInstanceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReservedInstanceState(ReservedInstanceState value);
} // namespace ReservedInstanceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
