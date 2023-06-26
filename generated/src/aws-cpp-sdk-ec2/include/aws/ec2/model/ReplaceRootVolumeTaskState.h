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
  enum class ReplaceRootVolumeTaskState
  {
    NOT_SET,
    pending,
    in_progress,
    failing,
    succeeded,
    failed,
    failed_detached
  };

namespace ReplaceRootVolumeTaskStateMapper
{
AWS_EC2_API ReplaceRootVolumeTaskState GetReplaceRootVolumeTaskStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReplaceRootVolumeTaskState(ReplaceRootVolumeTaskState value);
} // namespace ReplaceRootVolumeTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
