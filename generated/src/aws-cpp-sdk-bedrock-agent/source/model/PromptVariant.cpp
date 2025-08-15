/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptVariant.h>
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

PromptVariant::PromptVariant(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptVariant& PromptVariant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      m_metadata.push_back(metadataJsonList[metadataIndex].AsObject());
    }
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalModelRequestFields"))
  {
    m_additionalModelRequestFields = jsonValue.GetObject("additionalModelRequestFields");
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("genAiResource"))
  {
    m_genAiResource = jsonValue.GetObject("genAiResource");
    m_genAiResourceHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptVariant::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

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

  if(m_metadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataJsonList(m_metadata.size());
   for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
   {
     metadataJsonList[metadataIndex].AsObject(m_metadata[metadataIndex].Jsonize());
   }
   payload.WithArray("metadata", std::move(metadataJsonList));

  }

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
    if(!m_additionalModelRequestFields.View().IsNull())
    {
       payload.WithObject("additionalModelRequestFields", JsonValue(m_additionalModelRequestFields.View()));
    }
  }

  if(m_genAiResourceHasBeenSet)
  {
   payload.WithObject("genAiResource", m_genAiResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
