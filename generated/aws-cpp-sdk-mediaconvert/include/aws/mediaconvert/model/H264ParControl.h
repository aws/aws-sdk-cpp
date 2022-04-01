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
  enum class H264ParControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace H264ParControlMapper
{
AWS_MEDIACONVERT_API H264ParControl GetH264ParControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264ParControl(H264ParControl value);
} // namespace H264ParControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
