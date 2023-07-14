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
  enum class AutoPlacement
  {
    NOT_SET,
    on,
    off
  };

namespace AutoPlacementMapper
{
AWS_EC2_API AutoPlacement GetAutoPlacementForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAutoPlacement(AutoPlacement value);
} // namespace AutoPlacementMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
