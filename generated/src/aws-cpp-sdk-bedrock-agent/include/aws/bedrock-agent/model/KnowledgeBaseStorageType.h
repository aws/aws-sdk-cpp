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
  enum class KnowledgeBaseStorageType
  {
    NOT_SET,
    OPENSEARCH_SERVERLESS,
    PINECONE,
    REDIS_ENTERPRISE_CLOUD,
    RDS
  };

namespace KnowledgeBaseStorageTypeMapper
{
AWS_BEDROCKAGENT_API KnowledgeBaseStorageType GetKnowledgeBaseStorageTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForKnowledgeBaseStorageType(KnowledgeBaseStorageType value);
} // namespace KnowledgeBaseStorageTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
