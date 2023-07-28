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
  enum class CanvasOrientation
  {
    NOT_SET,
    Landscape,
    Portrait
  };

namespace CanvasOrientationMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API CanvasOrientation GetCanvasOrientationForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForCanvasOrientation(CanvasOrientation value);
} // namespace CanvasOrientationMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
