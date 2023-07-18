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
  enum class CmafPtsOffsetHandlingForBFrames
  {
    NOT_SET,
    ZERO_BASED,
    MATCH_INITIAL_PTS
  };

namespace CmafPtsOffsetHandlingForBFramesMapper
{
AWS_MEDIACONVERT_API CmafPtsOffsetHandlingForBFrames GetCmafPtsOffsetHandlingForBFramesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames value);
} // namespace CmafPtsOffsetHandlingForBFramesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
