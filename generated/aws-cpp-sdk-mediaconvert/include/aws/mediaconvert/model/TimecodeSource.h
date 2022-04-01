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
  enum class TimecodeSource
  {
    NOT_SET,
    EMBEDDED,
    ZEROBASED,
    SPECIFIEDSTART
  };

namespace TimecodeSourceMapper
{
AWS_MEDIACONVERT_API TimecodeSource GetTimecodeSourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTimecodeSource(TimecodeSource value);
} // namespace TimecodeSourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
