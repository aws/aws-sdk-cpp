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
  enum class ArtifactsState
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ArtifactsStateMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsState GetArtifactsStateForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForArtifactsState(ArtifactsState value);
} // namespace ArtifactsStateMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
