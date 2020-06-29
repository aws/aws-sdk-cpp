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
  enum class BurninSubtitleBackgroundColor
  {
    NOT_SET,
    NONE,
    BLACK,
    WHITE
  };

namespace BurninSubtitleBackgroundColorMapper
{
AWS_MEDIACONVERT_API BurninSubtitleBackgroundColor GetBurninSubtitleBackgroundColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleBackgroundColor(BurninSubtitleBackgroundColor value);
} // namespace BurninSubtitleBackgroundColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
