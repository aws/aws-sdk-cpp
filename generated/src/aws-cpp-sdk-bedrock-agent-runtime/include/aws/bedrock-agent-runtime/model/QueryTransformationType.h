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
  enum class QueryTransformationType
  {
    NOT_SET,
    QUERY_DECOMPOSITION
  };

namespace QueryTransformationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API QueryTransformationType GetQueryTransformationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForQueryTransformationType(QueryTransformationType value);
} // namespace QueryTransformationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
