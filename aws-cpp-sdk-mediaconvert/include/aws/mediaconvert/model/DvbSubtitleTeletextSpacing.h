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
  enum class DvbSubtitleTeletextSpacing
  {
    NOT_SET,
    FIXED_GRID,
    PROPORTIONAL
  };

namespace DvbSubtitleTeletextSpacingMapper
{
AWS_MEDIACONVERT_API DvbSubtitleTeletextSpacing GetDvbSubtitleTeletextSpacingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleTeletextSpacing(DvbSubtitleTeletextSpacing value);
} // namespace DvbSubtitleTeletextSpacingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
