/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class PreferredChannelPipeline
  {
    NOT_SET,
    CURRENTLY_ACTIVE,
    PIPELINE_0,
    PIPELINE_1
  };

namespace PreferredChannelPipelineMapper
{
AWS_MEDIALIVE_API PreferredChannelPipeline GetPreferredChannelPipelineForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForPreferredChannelPipeline(PreferredChannelPipeline value);
} // namespace PreferredChannelPipelineMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
