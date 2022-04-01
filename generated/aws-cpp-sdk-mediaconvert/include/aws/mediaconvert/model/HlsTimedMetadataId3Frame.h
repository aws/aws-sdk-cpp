/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class HlsTimedMetadataId3Frame
  {
    NOT_SET,
    NONE,
    PRIV,
    TDRL
  };

namespace HlsTimedMetadataId3FrameMapper
{
AWS_MEDIACONVERT_API HlsTimedMetadataId3Frame GetHlsTimedMetadataId3FrameForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsTimedMetadataId3Frame(HlsTimedMetadataId3Frame value);
} // namespace HlsTimedMetadataId3FrameMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
