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
  enum class DeinterlacerMode
  {
    NOT_SET,
    DEINTERLACE,
    INVERSE_TELECINE,
    ADAPTIVE
  };

namespace DeinterlacerModeMapper
{
AWS_MEDIACONVERT_API DeinterlacerMode GetDeinterlacerModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDeinterlacerMode(DeinterlacerMode value);
} // namespace DeinterlacerModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
