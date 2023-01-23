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
  enum class AllocationState
  {
    NOT_SET,
    available,
    under_assessment,
    permanent_failure,
    released,
    released_permanent_failure,
    pending
  };

namespace AllocationStateMapper
{
AWS_EC2_API AllocationState GetAllocationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAllocationState(AllocationState value);
} // namespace AllocationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
