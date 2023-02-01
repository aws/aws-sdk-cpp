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
  enum class AudioArtifactsConcatenationState
  {
    NOT_SET,
    Enabled
  };

namespace AudioArtifactsConcatenationStateMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API AudioArtifactsConcatenationState GetAudioArtifactsConcatenationStateForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForAudioArtifactsConcatenationState(AudioArtifactsConcatenationState value);
} // namespace AudioArtifactsConcatenationStateMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
