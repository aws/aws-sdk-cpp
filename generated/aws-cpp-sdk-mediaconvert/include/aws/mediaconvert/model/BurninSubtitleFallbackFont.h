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
  enum class BurninSubtitleFallbackFont
  {
    NOT_SET,
    BEST_MATCH,
    MONOSPACED_SANSSERIF,
    MONOSPACED_SERIF,
    PROPORTIONAL_SANSSERIF,
    PROPORTIONAL_SERIF
  };

namespace BurninSubtitleFallbackFontMapper
{
AWS_MEDIACONVERT_API BurninSubtitleFallbackFont GetBurninSubtitleFallbackFontForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleFallbackFont(BurninSubtitleFallbackFont value);
} // namespace BurninSubtitleFallbackFontMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
