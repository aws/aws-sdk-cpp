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
  enum class H265FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace H265FramerateControlMapper
{
AWS_MEDIACONVERT_API H265FramerateControl GetH265FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265FramerateControl(H265FramerateControl value);
} // namespace H265FramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
