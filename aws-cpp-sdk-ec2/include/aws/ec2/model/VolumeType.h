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
  enum class VolumeType
  {
    NOT_SET,
    standard,
    io1,
    io2,
    gp2,
    sc1,
    st1
  };

namespace VolumeTypeMapper
{
AWS_EC2_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
