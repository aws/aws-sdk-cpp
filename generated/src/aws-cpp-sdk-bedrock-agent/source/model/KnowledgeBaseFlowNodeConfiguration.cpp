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

KnowledgeBaseFlowNodeConfiguration::KnowledgeBaseFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KnowledgeBaseFlowNodeConfiguration& KnowledgeBaseFlowNodeConfiguration::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");
    m_guardrailConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfResults"))
  {
    m_numberOfResults = jsonValue.GetInteger("numberOfResults");
    m_numberOfResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptTemplate"))
  {
    m_promptTemplate = jsonValue.GetObject("promptTemplate");
    m_promptTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceConfiguration"))
  {
    m_inferenceConfiguration = jsonValue.GetObject("inferenceConfiguration");
    m_inferenceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rerankingConfiguration"))
  {
    m_rerankingConfiguration = jsonValue.GetObject("rerankingConfiguration");
    m_rerankingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orchestrationConfiguration"))
  {
    m_orchestrationConfiguration = jsonValue.GetObject("orchestrationConfiguration");
    m_orchestrationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  if(m_numberOfResultsHasBeenSet)
  {
   payload.WithInteger("numberOfResults", m_numberOfResults);

  }

  if(m_promptTemplateHasBeenSet)
  {
   payload.WithObject("promptTemplate", m_promptTemplate.Jsonize());

  }

  if(m_inferenceConfigurationHasBeenSet)
  {
   payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());

  }

  if(m_rerankingConfigurationHasBeenSet)
  {
   payload.WithObject("rerankingConfiguration", m_rerankingConfiguration.Jsonize());

  }

  if(m_orchestrationConfigurationHasBeenSet)
  {
   payload.WithObject("orchestrationConfiguration", m_orchestrationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
