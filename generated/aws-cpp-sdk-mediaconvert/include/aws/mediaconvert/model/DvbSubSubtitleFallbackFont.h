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
  enum class DvbSubSubtitleFallbackFont
  {
    NOT_SET,
    BEST_MATCH,
    MONOSPACED_SANSSERIF,
    MONOSPACED_SERIF,
    PROPORTIONAL_SANSSERIF,
    PROPORTIONAL_SERIF
  };

namespace DvbSubSubtitleFallbackFontMapper
{
AWS_MEDIACONVERT_API DvbSubSubtitleFallbackFont GetDvbSubSubtitleFallbackFontForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubSubtitleFallbackFont(DvbSubSubtitleFallbackFont value);
} // namespace DvbSubSubtitleFallbackFontMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
