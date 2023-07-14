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
  enum class AudioCodec
  {
    NOT_SET,
    AAC,
    MP2,
    MP3,
    WAV,
    AIFF,
    AC3,
    EAC3,
    EAC3_ATMOS,
    VORBIS,
    OPUS,
    PASSTHROUGH
  };

namespace AudioCodecMapper
{
AWS_MEDIACONVERT_API AudioCodec GetAudioCodecForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioCodec(AudioCodec value);
} // namespace AudioCodecMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
