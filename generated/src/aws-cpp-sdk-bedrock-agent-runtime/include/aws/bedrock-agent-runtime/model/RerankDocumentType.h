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
  enum class RerankDocumentType
  {
    NOT_SET,
    TEXT,
    JSON
  };

namespace RerankDocumentTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RerankDocumentType GetRerankDocumentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRerankDocumentType(RerankDocumentType value);
} // namespace RerankDocumentTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
