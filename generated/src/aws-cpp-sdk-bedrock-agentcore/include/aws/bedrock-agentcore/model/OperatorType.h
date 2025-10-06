/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class OperatorType
  {
    NOT_SET,
    EQUALS_TO,
    EXISTS,
    NOT_EXISTS
  };

namespace OperatorTypeMapper
{
AWS_BEDROCKAGENTCORE_API OperatorType GetOperatorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForOperatorType(OperatorType value);
} // namespace OperatorTypeMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
