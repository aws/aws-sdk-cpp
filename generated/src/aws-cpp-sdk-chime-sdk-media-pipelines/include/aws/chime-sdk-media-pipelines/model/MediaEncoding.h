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
  enum class MediaEncoding
  {
    NOT_SET,
    pcm
  };

namespace MediaEncodingMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaEncoding GetMediaEncodingForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaEncoding(MediaEncoding value);
} // namespace MediaEncodingMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
