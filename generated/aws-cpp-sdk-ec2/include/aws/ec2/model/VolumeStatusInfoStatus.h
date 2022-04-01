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
  enum class VolumeStatusInfoStatus
  {
    NOT_SET,
    ok,
    impaired,
    insufficient_data
  };

namespace VolumeStatusInfoStatusMapper
{
AWS_EC2_API VolumeStatusInfoStatus GetVolumeStatusInfoStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVolumeStatusInfoStatus(VolumeStatusInfoStatus value);
} // namespace VolumeStatusInfoStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
