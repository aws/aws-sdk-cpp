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
  enum class BurninSubtitleFontColor
  {
    NOT_SET,
    WHITE,
    BLACK,
    YELLOW,
    RED,
    GREEN,
    BLUE
  };

namespace BurninSubtitleFontColorMapper
{
AWS_MEDIACONVERT_API BurninSubtitleFontColor GetBurninSubtitleFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleFontColor(BurninSubtitleFontColor value);
} // namespace BurninSubtitleFontColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
