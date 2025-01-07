﻿/**
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
  enum class RerankSourceType
  {
    NOT_SET,
    INLINE
  };

namespace RerankSourceTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RerankSourceType GetRerankSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRerankSourceType(RerankSourceType value);
} // namespace RerankSourceTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
