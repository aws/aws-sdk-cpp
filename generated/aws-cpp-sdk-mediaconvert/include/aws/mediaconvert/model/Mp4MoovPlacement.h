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
  enum class Mp4MoovPlacement
  {
    NOT_SET,
    PROGRESSIVE_DOWNLOAD,
    NORMAL
  };

namespace Mp4MoovPlacementMapper
{
AWS_MEDIACONVERT_API Mp4MoovPlacement GetMp4MoovPlacementForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp4MoovPlacement(Mp4MoovPlacement value);
} // namespace Mp4MoovPlacementMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
