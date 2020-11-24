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
  enum class M2tsAudioDuration
  {
    NOT_SET,
    DEFAULT_CODEC_DURATION,
    MATCH_VIDEO_DURATION
  };

namespace M2tsAudioDurationMapper
{
AWS_MEDIACONVERT_API M2tsAudioDuration GetM2tsAudioDurationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsAudioDuration(M2tsAudioDuration value);
} // namespace M2tsAudioDurationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
