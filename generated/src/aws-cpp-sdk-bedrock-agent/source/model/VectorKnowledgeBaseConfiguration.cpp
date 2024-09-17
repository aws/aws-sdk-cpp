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
    m_embeddingModelArnHasBeenSet(false),
    m_embeddingModelConfigurationHasBeenSet(false)
{
}

VectorKnowledgeBaseConfiguration::VectorKnowledgeBaseConfiguration(JsonView jsonValue)
  : VectorKnowledgeBaseConfiguration()
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

  if(jsonValue.ValueExists("embeddingModelConfiguration"))
  {
    m_embeddingModelConfiguration = jsonValue.GetObject("embeddingModelConfiguration");

    m_embeddingModelConfigurationHasBeenSet = true;
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

  if(m_embeddingModelConfigurationHasBeenSet)
  {
   payload.WithObject("embeddingModelConfiguration", m_embeddingModelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
