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
  enum class ExternalSourceType
  {
    NOT_SET,
    S3,
    BYTE_CONTENT
  };

namespace ExternalSourceTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API ExternalSourceType GetExternalSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForExternalSourceType(ExternalSourceType value);
} // namespace ExternalSourceTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
