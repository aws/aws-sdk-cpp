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
  enum class LayoutOption
  {
    NOT_SET,
    GridView
  };

namespace LayoutOptionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API LayoutOption GetLayoutOptionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForLayoutOption(LayoutOption value);
} // namespace LayoutOptionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
