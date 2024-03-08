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
  enum class KnowledgeBaseState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace KnowledgeBaseStateMapper
{
AWS_BEDROCKAGENT_API KnowledgeBaseState GetKnowledgeBaseStateForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForKnowledgeBaseState(KnowledgeBaseState value);
} // namespace KnowledgeBaseStateMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
