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
  enum class KnowledgeBaseType
  {
    NOT_SET,
    VECTOR
  };

namespace KnowledgeBaseTypeMapper
{
AWS_BEDROCKAGENT_API KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType value);
} // namespace KnowledgeBaseTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
