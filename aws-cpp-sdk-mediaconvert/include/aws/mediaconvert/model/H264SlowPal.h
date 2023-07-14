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
  enum class H264SlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264SlowPalMapper
{
AWS_MEDIACONVERT_API H264SlowPal GetH264SlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264SlowPal(H264SlowPal value);
} // namespace H264SlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
