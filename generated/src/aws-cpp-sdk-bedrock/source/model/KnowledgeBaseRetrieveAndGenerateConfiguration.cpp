/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/KnowledgeBaseRetrieveAndGenerateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

KnowledgeBaseRetrieveAndGenerateConfiguration::KnowledgeBaseRetrieveAndGenerateConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("generationConfiguration"))
  {
    m_generationConfiguration = jsonValue.GetObject("generationConfiguration");
    m_generationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orchestrationConfiguration"))
  {
    m_orchestrationConfiguration = jsonValue.GetObject("orchestrationConfiguration");
    m_orchestrationConfigurationHasBeenSet = true;
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

  if(m_generationConfigurationHasBeenSet)
  {
   payload.WithObject("generationConfiguration", m_generationConfiguration.Jsonize());

  }

  if(m_orchestrationConfigurationHasBeenSet)
  {
   payload.WithObject("orchestrationConfiguration", m_orchestrationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
