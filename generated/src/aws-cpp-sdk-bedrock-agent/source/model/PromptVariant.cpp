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

PromptVariant::PromptVariant() : 
    m_inferenceConfigurationHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_templateType(PromptTemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
}

PromptVariant::PromptVariant(JsonView jsonValue)
  : PromptVariant()
{
  *this = jsonValue;
}

PromptVariant& PromptVariant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inferenceConfiguration"))
  {
    m_inferenceConfiguration = jsonValue.GetObject("inferenceConfiguration");

    m_inferenceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("templateConfiguration");

    m_templateConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = PromptTemplateTypeMapper::GetPromptTemplateTypeForName(jsonValue.GetString("templateType"));

    m_templateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptVariant::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceConfigurationHasBeenSet)
  {
   payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", PromptTemplateTypeMapper::GetNameForPromptTemplateType(m_templateType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
