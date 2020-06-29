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
  enum class H265GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace H265GopSizeUnitsMapper
{
AWS_MEDIACONVERT_API H265GopSizeUnits GetH265GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265GopSizeUnits(H265GopSizeUnits value);
} // namespace H265GopSizeUnitsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
