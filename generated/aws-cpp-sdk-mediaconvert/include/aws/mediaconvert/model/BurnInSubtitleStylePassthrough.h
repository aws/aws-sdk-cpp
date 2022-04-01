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
  enum class BurnInSubtitleStylePassthrough
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace BurnInSubtitleStylePassthroughMapper
{
AWS_MEDIACONVERT_API BurnInSubtitleStylePassthrough GetBurnInSubtitleStylePassthroughForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurnInSubtitleStylePassthrough(BurnInSubtitleStylePassthrough value);
} // namespace BurnInSubtitleStylePassthroughMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
