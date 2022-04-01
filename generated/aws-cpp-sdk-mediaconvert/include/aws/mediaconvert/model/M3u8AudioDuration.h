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
  enum class M3u8AudioDuration
  {
    NOT_SET,
    DEFAULT_CODEC_DURATION,
    MATCH_VIDEO_DURATION
  };

namespace M3u8AudioDurationMapper
{
AWS_MEDIACONVERT_API M3u8AudioDuration GetM3u8AudioDurationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM3u8AudioDuration(M3u8AudioDuration value);
} // namespace M3u8AudioDurationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
