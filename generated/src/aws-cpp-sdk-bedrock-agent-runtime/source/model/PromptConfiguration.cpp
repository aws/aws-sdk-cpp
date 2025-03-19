/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PromptConfiguration.h>
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

PromptConfiguration::PromptConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptConfiguration& PromptConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalModelRequestFields"))
  {
    m_additionalModelRequestFields = jsonValue.GetObject("additionalModelRequestFields");
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("basePromptTemplate"))
  {
    m_basePromptTemplate = jsonValue.GetString("basePromptTemplate");
    m_basePromptTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("foundationModel"))
  {
    m_foundationModel = jsonValue.GetString("foundationModel");
    m_foundationModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceConfiguration"))
  {
    m_inferenceConfiguration = jsonValue.GetObject("inferenceConfiguration");
    m_inferenceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parserMode"))
  {
    m_parserMode = CreationModeMapper::GetCreationModeForName(jsonValue.GetString("parserMode"));
    m_parserModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptCreationMode"))
  {
    m_promptCreationMode = CreationModeMapper::GetCreationModeForName(jsonValue.GetString("promptCreationMode"));
    m_promptCreationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptState"))
  {
    m_promptState = PromptStateMapper::GetPromptStateForName(jsonValue.GetString("promptState"));
    m_promptStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptType"))
  {
    m_promptType = PromptTypeMapper::GetPromptTypeForName(jsonValue.GetString("promptType"));
    m_promptTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
    if(!m_additionalModelRequestFields.View().IsNull())
    {
       payload.WithObject("additionalModelRequestFields", JsonValue(m_additionalModelRequestFields.View()));
    }
  }

  if(m_basePromptTemplateHasBeenSet)
  {
   payload.WithString("basePromptTemplate", m_basePromptTemplate);

  }

  if(m_foundationModelHasBeenSet)
  {
   payload.WithString("foundationModel", m_foundationModel);

  }

  if(m_inferenceConfigurationHasBeenSet)
  {
   payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());

  }

  if(m_parserModeHasBeenSet)
  {
   payload.WithString("parserMode", CreationModeMapper::GetNameForCreationMode(m_parserMode));
  }

  if(m_promptCreationModeHasBeenSet)
  {
   payload.WithString("promptCreationMode", CreationModeMapper::GetNameForCreationMode(m_promptCreationMode));
  }

  if(m_promptStateHasBeenSet)
  {
   payload.WithString("promptState", PromptStateMapper::GetNameForPromptState(m_promptState));
  }

  if(m_promptTypeHasBeenSet)
  {
   payload.WithString("promptType", PromptTypeMapper::GetNameForPromptType(m_promptType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
