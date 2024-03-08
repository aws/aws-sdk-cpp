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
  enum class MediaStreamPipelineSinkType
  {
    NOT_SET,
    KinesisVideoStreamPool
  };

namespace MediaStreamPipelineSinkTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamPipelineSinkType GetMediaStreamPipelineSinkTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaStreamPipelineSinkType(MediaStreamPipelineSinkType value);
} // namespace MediaStreamPipelineSinkTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
