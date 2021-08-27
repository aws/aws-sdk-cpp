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
  enum class DvbSubtitleFontColor
  {
    NOT_SET,
    WHITE,
    BLACK,
    YELLOW,
    RED,
    GREEN,
    BLUE
  };

namespace DvbSubtitleFontColorMapper
{
AWS_MEDIACONVERT_API DvbSubtitleFontColor GetDvbSubtitleFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleFontColor(DvbSubtitleFontColor value);
} // namespace DvbSubtitleFontColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
