/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class HlsAudioTrackType
  {
    NOT_SET,
    ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT,
    ALTERNATE_AUDIO_AUTO_SELECT,
    ALTERNATE_AUDIO_NOT_AUTO_SELECT,
    AUDIO_ONLY_VARIANT_STREAM
  };

namespace HlsAudioTrackTypeMapper
{
AWS_MEDIACONVERT_API HlsAudioTrackType GetHlsAudioTrackTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsAudioTrackType(HlsAudioTrackType value);
} // namespace HlsAudioTrackTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
