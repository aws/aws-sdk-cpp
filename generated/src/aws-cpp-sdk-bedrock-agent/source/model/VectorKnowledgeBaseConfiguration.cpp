/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VectorKnowledgeBaseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

VectorKnowledgeBaseConfiguration::VectorKnowledgeBaseConfiguration() : 
    m_embeddingModelArnHasBeenSet(false)
{
}

VectorKnowledgeBaseConfiguration::VectorKnowledgeBaseConfiguration(JsonView jsonValue) : 
    m_embeddingModelArnHasBeenSet(false)
{
  *this = jsonValue;
}

VectorKnowledgeBaseConfiguration& VectorKnowledgeBaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("embeddingModelArn"))
  {
    m_embeddingModelArn = jsonValue.GetString("embeddingModelArn");

    m_embeddingModelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorKnowledgeBaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_embeddingModelArnHasBeenSet)
  {
   payload.WithString("embeddingModelArn", m_embeddingModelArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
