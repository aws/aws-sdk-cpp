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
  enum class BurninSubtitleTeletextSpacing
  {
    NOT_SET,
    FIXED_GRID,
    PROPORTIONAL
  };

namespace BurninSubtitleTeletextSpacingMapper
{
AWS_MEDIACONVERT_API BurninSubtitleTeletextSpacing GetBurninSubtitleTeletextSpacingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleTeletextSpacing(BurninSubtitleTeletextSpacing value);
} // namespace BurninSubtitleTeletextSpacingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
