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
  enum class ResolutionOption
  {
    NOT_SET,
    HD,
    FHD
  };

namespace ResolutionOptionMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ResolutionOption GetResolutionOptionForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForResolutionOption(ResolutionOption value);
} // namespace ResolutionOptionMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
