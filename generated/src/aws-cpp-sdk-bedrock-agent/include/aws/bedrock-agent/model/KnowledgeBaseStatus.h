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
  enum class KnowledgeBaseStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    UPDATING,
    FAILED
  };

namespace KnowledgeBaseStatusMapper
{
AWS_BEDROCKAGENT_API KnowledgeBaseStatus GetKnowledgeBaseStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForKnowledgeBaseStatus(KnowledgeBaseStatus value);
} // namespace KnowledgeBaseStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
