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
  enum class DvbSubtitleOutlineColor
  {
    NOT_SET,
    BLACK,
    WHITE,
    YELLOW,
    RED,
    GREEN,
    BLUE
  };

namespace DvbSubtitleOutlineColorMapper
{
AWS_MEDIACONVERT_API DvbSubtitleOutlineColor GetDvbSubtitleOutlineColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleOutlineColor(DvbSubtitleOutlineColor value);
} // namespace DvbSubtitleOutlineColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
