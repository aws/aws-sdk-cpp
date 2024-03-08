/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

KnowledgeBaseRetrievalConfiguration::KnowledgeBaseRetrievalConfiguration() : 
    m_vectorSearchConfigurationHasBeenSet(false)
{
}

KnowledgeBaseRetrievalConfiguration::KnowledgeBaseRetrievalConfiguration(JsonView jsonValue) : 
    m_vectorSearchConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseRetrievalConfiguration& KnowledgeBaseRetrievalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vectorSearchConfiguration"))
  {
    m_vectorSearchConfiguration = jsonValue.GetObject("vectorSearchConfiguration");

    m_vectorSearchConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseRetrievalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vectorSearchConfigurationHasBeenSet)
  {
   payload.WithObject("vectorSearchConfiguration", m_vectorSearchConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
