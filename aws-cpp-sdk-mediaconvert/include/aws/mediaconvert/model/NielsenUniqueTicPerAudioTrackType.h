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
  enum class NielsenUniqueTicPerAudioTrackType
  {
    NOT_SET,
    RESERVE_UNIQUE_TICS_PER_TRACK,
    SAME_TICS_PER_TRACK
  };

namespace NielsenUniqueTicPerAudioTrackTypeMapper
{
AWS_MEDIACONVERT_API NielsenUniqueTicPerAudioTrackType GetNielsenUniqueTicPerAudioTrackTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNielsenUniqueTicPerAudioTrackType(NielsenUniqueTicPerAudioTrackType value);
} // namespace NielsenUniqueTicPerAudioTrackTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
