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
  enum class Ac3DynamicRangeCompressionLine
  {
    NOT_SET,
    FILM_STANDARD,
    FILM_LIGHT,
    MUSIC_STANDARD,
    MUSIC_LIGHT,
    SPEECH,
    NONE
  };

namespace Ac3DynamicRangeCompressionLineMapper
{
AWS_MEDIACONVERT_API Ac3DynamicRangeCompressionLine GetAc3DynamicRangeCompressionLineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3DynamicRangeCompressionLine(Ac3DynamicRangeCompressionLine value);
} // namespace Ac3DynamicRangeCompressionLineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
