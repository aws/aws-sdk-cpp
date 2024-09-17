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
  enum class FileSourceType
  {
    NOT_SET,
    S3,
    BYTE_CONTENT
  };

namespace FileSourceTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API FileSourceType GetFileSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFileSourceType(FileSourceType value);
} // namespace FileSourceTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
