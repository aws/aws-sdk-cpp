/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class BorderColor
  {
    NOT_SET,
    Black,
    Blue,
    Red,
    Green,
    White,
    Yellow
  };

namespace BorderColorMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API BorderColor GetBorderColorForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForBorderColor(BorderColor value);
} // namespace BorderColorMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
