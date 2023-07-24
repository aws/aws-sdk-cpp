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
  enum class TileOrder
  {
    NOT_SET,
    JoinSequence,
    SpeakerSequence
  };

namespace TileOrderMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API TileOrder GetTileOrderForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForTileOrder(TileOrder value);
} // namespace TileOrderMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
