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
  enum class MediaStreamType
  {
    NOT_SET,
    MixedAudio,
    IndividualAudio
  };

namespace MediaStreamTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamType GetMediaStreamTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaStreamType(MediaStreamType value);
} // namespace MediaStreamTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
