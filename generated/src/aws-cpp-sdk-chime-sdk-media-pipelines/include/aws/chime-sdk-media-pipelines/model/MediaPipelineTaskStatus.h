﻿/**
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
  enum class MediaPipelineTaskStatus
  {
    NOT_SET,
    NotStarted,
    Initializing,
    InProgress,
    Failed,
    Stopping,
    Stopped
  };

namespace MediaPipelineTaskStatusMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaPipelineTaskStatus GetMediaPipelineTaskStatusForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaPipelineTaskStatus(MediaPipelineTaskStatus value);
} // namespace MediaPipelineTaskStatusMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
