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
  enum class H264GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace H264GopSizeUnitsMapper
{
AWS_MEDIACONVERT_API H264GopSizeUnits GetH264GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264GopSizeUnits(H264GopSizeUnits value);
} // namespace H264GopSizeUnitsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
