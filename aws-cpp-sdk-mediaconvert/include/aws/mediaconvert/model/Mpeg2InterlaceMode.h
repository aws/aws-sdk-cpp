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
  enum class Mpeg2InterlaceMode
  {
    NOT_SET,
    PROGRESSIVE,
    TOP_FIELD,
    BOTTOM_FIELD,
    FOLLOW_TOP_FIELD,
    FOLLOW_BOTTOM_FIELD
  };

namespace Mpeg2InterlaceModeMapper
{
AWS_MEDIACONVERT_API Mpeg2InterlaceMode GetMpeg2InterlaceModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2InterlaceMode(Mpeg2InterlaceMode value);
} // namespace Mpeg2InterlaceModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
