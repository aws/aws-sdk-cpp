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
  enum class VolumeState
  {
    NOT_SET,
    creating,
    available,
    in_use,
    deleting,
    deleted,
    error
  };

namespace VolumeStateMapper
{
AWS_EC2_API VolumeState GetVolumeStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVolumeState(VolumeState value);
} // namespace VolumeStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
