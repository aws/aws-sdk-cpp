﻿/**
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
  enum class BurninSubtitleAlignment
  {
    NOT_SET,
    CENTERED,
    LEFT,
    AUTO
  };

namespace BurninSubtitleAlignmentMapper
{
AWS_MEDIACONVERT_API BurninSubtitleAlignment GetBurninSubtitleAlignmentForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForBurninSubtitleAlignment(BurninSubtitleAlignment value);
} // namespace BurninSubtitleAlignmentMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
