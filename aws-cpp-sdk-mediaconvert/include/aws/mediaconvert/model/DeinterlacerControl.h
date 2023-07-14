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
  enum class DeinterlacerControl
  {
    NOT_SET,
    FORCE_ALL_FRAMES,
    NORMAL
  };

namespace DeinterlacerControlMapper
{
AWS_MEDIACONVERT_API DeinterlacerControl GetDeinterlacerControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDeinterlacerControl(DeinterlacerControl value);
} // namespace DeinterlacerControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
