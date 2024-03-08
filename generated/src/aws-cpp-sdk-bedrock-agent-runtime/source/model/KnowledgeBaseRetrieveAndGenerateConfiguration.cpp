/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrieveAndGenerateConfiguration.h>
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

KnowledgeBaseRetrieveAndGenerateConfiguration::KnowledgeBaseRetrieveAndGenerateConfiguration() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_retrievalConfigurationHasBeenSet(false)
{
}

KnowledgeBaseRetrieveAndGenerateConfiguration::KnowledgeBaseRetrieveAndGenerateConfiguration(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_retrievalConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseRetrieveAndGenerateConfiguration& KnowledgeBaseRetrieveAndGenerateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retrievalConfiguration"))
  {
    m_retrievalConfiguration = jsonValue.GetObject("retrievalConfiguration");

    m_retrievalConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseRetrieveAndGenerateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_retrievalConfigurationHasBeenSet)
  {
   payload.WithObject("retrievalConfiguration", m_retrievalConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
