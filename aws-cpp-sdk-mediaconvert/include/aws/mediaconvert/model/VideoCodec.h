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
  enum class VideoCodec
  {
    NOT_SET,
    AV1,
    AVC_INTRA,
    FRAME_CAPTURE,
    H_264,
    H_265,
    MPEG2,
    PRORES,
    VC3,
    VP8,
    VP9
  };

namespace VideoCodecMapper
{
AWS_MEDIACONVERT_API VideoCodec GetVideoCodecForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoCodec(VideoCodec value);
} // namespace VideoCodecMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
