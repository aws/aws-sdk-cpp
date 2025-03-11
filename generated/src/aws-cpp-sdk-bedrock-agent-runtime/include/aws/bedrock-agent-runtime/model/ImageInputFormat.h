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
  enum class ImageInputFormat
  {
    NOT_SET,
    png,
    jpeg,
    gif,
    webp
  };

namespace ImageInputFormatMapper
{
AWS_BEDROCKAGENTRUNTIME_API ImageInputFormat GetImageInputFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForImageInputFormat(ImageInputFormat value);
} // namespace ImageInputFormatMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
