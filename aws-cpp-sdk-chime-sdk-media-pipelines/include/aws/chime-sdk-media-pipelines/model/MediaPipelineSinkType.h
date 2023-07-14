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
  enum class MediaPipelineSinkType
  {
    NOT_SET,
    S3Bucket
  };

namespace MediaPipelineSinkTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaPipelineSinkType GetMediaPipelineSinkTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaPipelineSinkType(MediaPipelineSinkType value);
} // namespace MediaPipelineSinkTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
