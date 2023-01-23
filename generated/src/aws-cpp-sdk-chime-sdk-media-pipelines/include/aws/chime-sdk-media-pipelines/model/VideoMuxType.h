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
  enum class VideoMuxType
  {
    NOT_SET,
    VideoOnly
  };

namespace VideoMuxTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API VideoMuxType GetVideoMuxTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForVideoMuxType(VideoMuxType value);
} // namespace VideoMuxTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
