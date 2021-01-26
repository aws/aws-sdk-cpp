/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class AudioOnlyHlsSegmentType
  {
    NOT_SET,
    AAC,
    FMP4
  };

namespace AudioOnlyHlsSegmentTypeMapper
{
AWS_MEDIALIVE_API AudioOnlyHlsSegmentType GetAudioOnlyHlsSegmentTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioOnlyHlsSegmentType(AudioOnlyHlsSegmentType value);
} // namespace AudioOnlyHlsSegmentTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
