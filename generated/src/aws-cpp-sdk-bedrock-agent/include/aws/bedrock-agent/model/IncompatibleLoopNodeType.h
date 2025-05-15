/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class IncompatibleLoopNodeType
  {
    NOT_SET,
    Input,
    Condition,
    Iterator,
    Collector
  };

namespace IncompatibleLoopNodeTypeMapper
{
AWS_BEDROCKAGENT_API IncompatibleLoopNodeType GetIncompatibleLoopNodeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIncompatibleLoopNodeType(IncompatibleLoopNodeType value);
} // namespace IncompatibleLoopNodeTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
