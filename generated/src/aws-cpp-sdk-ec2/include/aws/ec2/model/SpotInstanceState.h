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
  enum class SpotInstanceState
  {
    NOT_SET,
    open,
    active,
    closed,
    cancelled,
    failed,
    disabled
  };

namespace SpotInstanceStateMapper
{
AWS_EC2_API SpotInstanceState GetSpotInstanceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSpotInstanceState(SpotInstanceState value);
} // namespace SpotInstanceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
