/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class ImageFormat
  {
    NOT_SET,
    png,
    jpeg,
    gif,
    webp
  };

namespace ImageFormatMapper
{
AWS_BEDROCKAGENTRUNTIME_API ImageFormat GetImageFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForImageFormat(ImageFormat value);
} // namespace ImageFormatMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
