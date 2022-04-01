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
  enum class H264InterlaceMode
  {
    NOT_SET,
    PROGRESSIVE,
    TOP_FIELD,
    BOTTOM_FIELD,
    FOLLOW_TOP_FIELD,
    FOLLOW_BOTTOM_FIELD
  };

namespace H264InterlaceModeMapper
{
AWS_MEDIACONVERT_API H264InterlaceMode GetH264InterlaceModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264InterlaceMode(H264InterlaceMode value);
} // namespace H264InterlaceModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
