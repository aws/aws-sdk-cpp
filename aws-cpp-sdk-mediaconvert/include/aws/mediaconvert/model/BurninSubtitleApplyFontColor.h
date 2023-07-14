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
  enum class BurninSubtitleApplyFontColor
  {
    NOT_SET,
    WHITE_TEXT_ONLY,
    ALL_TEXT
  };

namespace BurninSubtitleApplyFontColorMapper
{
AWS_MEDIACONVERT_API BurninSubtitleApplyFontColor GetBurninSubtitleApplyFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleApplyFontColor(BurninSubtitleApplyFontColor value);
} // namespace BurninSubtitleApplyFontColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
