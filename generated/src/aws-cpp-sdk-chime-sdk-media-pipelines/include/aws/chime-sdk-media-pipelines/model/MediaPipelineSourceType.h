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
  enum class MediaPipelineSourceType
  {
    NOT_SET,
    ChimeSdkMeeting
  };

namespace MediaPipelineSourceTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaPipelineSourceType GetMediaPipelineSourceTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaPipelineSourceType(MediaPipelineSourceType value);
} // namespace MediaPipelineSourceTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
