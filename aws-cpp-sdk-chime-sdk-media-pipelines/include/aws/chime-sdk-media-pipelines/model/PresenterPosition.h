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
  enum class PresenterPosition
  {
    NOT_SET,
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight
  };

namespace PresenterPositionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API PresenterPosition GetPresenterPositionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForPresenterPosition(PresenterPosition value);
} // namespace PresenterPositionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
