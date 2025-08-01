﻿/**
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
  enum class VolumeStatusName
  {
    NOT_SET,
    io_enabled,
    io_performance,
    initialization_state
  };

namespace VolumeStatusNameMapper
{
AWS_EC2_API VolumeStatusName GetVolumeStatusNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVolumeStatusName(VolumeStatusName value);
} // namespace VolumeStatusNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
