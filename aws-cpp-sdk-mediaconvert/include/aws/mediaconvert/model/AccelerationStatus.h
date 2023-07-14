/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class AccelerationStatus
  {
    NOT_SET,
    NOT_APPLICABLE,
    IN_PROGRESS,
    ACCELERATED,
    NOT_ACCELERATED
  };

namespace AccelerationStatusMapper
{
AWS_MEDIACONVERT_API AccelerationStatus GetAccelerationStatusForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAccelerationStatus(AccelerationStatus value);
} // namespace AccelerationStatusMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
