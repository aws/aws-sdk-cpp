/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class VideoFormat
  {
    NOT_SET,
    mkv,
    mov,
    mp4,
    webm,
    flv,
    mpeg,
    mpg,
    wmv,
    three_gp
  };

namespace VideoFormatMapper
{
AWS_BEDROCKRUNTIME_API VideoFormat GetVideoFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForVideoFormat(VideoFormat value);
} // namespace VideoFormatMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
