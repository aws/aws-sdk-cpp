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
  enum class MediaPipelineElementStatus
  {
    NOT_SET,
    NotStarted,
    NotSupported,
    Initializing,
    InProgress,
    Failed,
    Stopping,
    Stopped,
    Paused
  };

namespace MediaPipelineElementStatusMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaPipelineElementStatus GetMediaPipelineElementStatusForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaPipelineElementStatus(MediaPipelineElementStatus value);
} // namespace MediaPipelineElementStatusMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
