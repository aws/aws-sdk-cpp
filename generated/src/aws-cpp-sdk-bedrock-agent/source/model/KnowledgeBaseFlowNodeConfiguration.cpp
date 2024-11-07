/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseFlowNodeConfiguration.h>
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

KnowledgeBaseFlowNodeConfiguration::KnowledgeBaseFlowNodeConfiguration() : 
    m_guardrailConfigurationHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_modelIdHasBeenSet(false)
{
}

KnowledgeBaseFlowNodeConfiguration::KnowledgeBaseFlowNodeConfiguration(JsonView jsonValue)
  : KnowledgeBaseFlowNodeConfiguration()
{
  *this = jsonValue;
}

KnowledgeBaseFlowNodeConfiguration& KnowledgeBaseFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");

    m_guardrailConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
