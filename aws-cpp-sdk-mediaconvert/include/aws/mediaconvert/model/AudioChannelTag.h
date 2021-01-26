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
  enum class AudioChannelTag
  {
    NOT_SET,
    L,
    R,
    C,
    LFE,
    LS,
    RS,
    LC,
    RC,
    CS,
    LSD,
    RSD,
    TCS,
    VHL,
    VHC,
    VHR
  };

namespace AudioChannelTagMapper
{
AWS_MEDIACONVERT_API AudioChannelTag GetAudioChannelTagForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioChannelTag(AudioChannelTag value);
} // namespace AudioChannelTagMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
