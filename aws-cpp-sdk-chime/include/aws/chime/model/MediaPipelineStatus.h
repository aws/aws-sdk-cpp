/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class MediaPipelineStatus
  {
    NOT_SET,
    Initializing,
    InProgress,
    Failed,
    Stopping,
    Stopped
  };

namespace MediaPipelineStatusMapper
{
AWS_CHIME_API MediaPipelineStatus GetMediaPipelineStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForMediaPipelineStatus(MediaPipelineStatus value);
} // namespace MediaPipelineStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
