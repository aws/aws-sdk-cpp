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
  enum class CaptionSourceType
  {
    NOT_SET,
    ANCILLARY,
    DVB_SUB,
    EMBEDDED,
    SCTE20,
    SCC,
    TTML,
    STL,
    SRT,
    SMI,
    TELETEXT,
    NULL_SOURCE,
    IMSC
  };

namespace CaptionSourceTypeMapper
{
AWS_MEDIACONVERT_API CaptionSourceType GetCaptionSourceTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionSourceType(CaptionSourceType value);
} // namespace CaptionSourceTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
