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
  enum class Eac3DynamicRangeCompressionLine
  {
    NOT_SET,
    NONE,
    FILM_STANDARD,
    FILM_LIGHT,
    MUSIC_STANDARD,
    MUSIC_LIGHT,
    SPEECH
  };

namespace Eac3DynamicRangeCompressionLineMapper
{
AWS_MEDIACONVERT_API Eac3DynamicRangeCompressionLine GetEac3DynamicRangeCompressionLineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3DynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine value);
} // namespace Eac3DynamicRangeCompressionLineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
