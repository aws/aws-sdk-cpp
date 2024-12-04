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
  enum class RetrievalResultContentColumnType
  {
    NOT_SET,
    BLOB,
    BOOLEAN,
    DOUBLE,
    NULL_,
    LONG,
    STRING
  };

namespace RetrievalResultContentColumnTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumnType GetRetrievalResultContentColumnTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRetrievalResultContentColumnType(RetrievalResultContentColumnType value);
} // namespace RetrievalResultContentColumnTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
