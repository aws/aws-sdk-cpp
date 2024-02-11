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
  enum class ActiveSpeakerPosition
  {
    NOT_SET,
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight
  };

namespace ActiveSpeakerPositionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ActiveSpeakerPosition GetActiveSpeakerPositionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForActiveSpeakerPosition(ActiveSpeakerPosition value);
} // namespace ActiveSpeakerPositionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
