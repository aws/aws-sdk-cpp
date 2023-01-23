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
  enum class LiveConnectorMuxType
  {
    NOT_SET,
    AudioWithCompositedVideo,
    AudioWithActiveSpeakerVideo
  };

namespace LiveConnectorMuxTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorMuxType GetLiveConnectorMuxTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForLiveConnectorMuxType(LiveConnectorMuxType value);
} // namespace LiveConnectorMuxTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
