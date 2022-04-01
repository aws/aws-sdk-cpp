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
  enum class AudioMuxType
  {
    NOT_SET,
    AudioOnly,
    AudioWithActiveSpeakerVideo,
    AudioWithCompositedVideo
  };

namespace AudioMuxTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API AudioMuxType GetAudioMuxTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForAudioMuxType(AudioMuxType value);
} // namespace AudioMuxTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
