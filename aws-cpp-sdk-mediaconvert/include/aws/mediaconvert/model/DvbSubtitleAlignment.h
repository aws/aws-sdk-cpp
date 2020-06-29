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
  enum class DvbSubtitleAlignment
  {
    NOT_SET,
    CENTERED,
    LEFT
  };

namespace DvbSubtitleAlignmentMapper
{
AWS_MEDIACONVERT_API DvbSubtitleAlignment GetDvbSubtitleAlignmentForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleAlignment(DvbSubtitleAlignment value);
} // namespace DvbSubtitleAlignmentMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
