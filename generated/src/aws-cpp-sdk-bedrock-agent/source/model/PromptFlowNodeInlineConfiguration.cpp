/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptFlowNodeInlineConfiguration.h>
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

PromptFlowNodeInlineConfiguration::PromptFlowNodeInlineConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptFlowNodeInlineConfiguration& PromptFlowNodeInlineConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = PromptTemplateTypeMapper::GetPromptTemplateTypeForName(jsonValue.GetString("templateType"));
    m_templateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("templateConfiguration");
    m_templateConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceConfiguration"))
  {
    m_inferenceConfiguration = jsonValue.GetObject("inferenceConfiguration");
    m_inferenceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalModelRequestFields"))
  {
    m_additionalModelRequestFields = jsonValue.GetObject("additionalModelRequestFields");
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptFlowNodeInlineConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", PromptTemplateTypeMapper::GetNameForPromptTemplateType(m_templateType));
  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_inferenceConfigurationHasBeenSet)
  {
   payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());

  }

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
    if(!m_additionalModelRequestFields.View().IsNull())
    {
       payload.WithObject("additionalModelRequestFields", JsonValue(m_additionalModelRequestFields.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
