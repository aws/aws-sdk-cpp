/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class AudioChannelsOption
  {
    NOT_SET,
    Stereo,
    Mono
  };

namespace AudioChannelsOptionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API AudioChannelsOption GetAudioChannelsOptionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForAudioChannelsOption(AudioChannelsOption value);
} // namespace AudioChannelsOptionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
