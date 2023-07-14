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
  enum class HlsProgramDateTime
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace HlsProgramDateTimeMapper
{
AWS_MEDIACONVERT_API HlsProgramDateTime GetHlsProgramDateTimeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsProgramDateTime(HlsProgramDateTime value);
} // namespace HlsProgramDateTimeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
