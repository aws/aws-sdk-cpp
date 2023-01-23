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
  enum class SpotInstanceType
  {
    NOT_SET,
    one_time,
    persistent
  };

namespace SpotInstanceTypeMapper
{
AWS_EC2_API SpotInstanceType GetSpotInstanceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSpotInstanceType(SpotInstanceType value);
} // namespace SpotInstanceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
