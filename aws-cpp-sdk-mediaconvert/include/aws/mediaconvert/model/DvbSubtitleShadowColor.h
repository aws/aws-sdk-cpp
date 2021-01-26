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
  enum class DvbSubtitleShadowColor
  {
    NOT_SET,
    NONE,
    BLACK,
    WHITE
  };

namespace DvbSubtitleShadowColorMapper
{
AWS_MEDIACONVERT_API DvbSubtitleShadowColor GetDvbSubtitleShadowColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleShadowColor(DvbSubtitleShadowColor value);
} // namespace DvbSubtitleShadowColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
