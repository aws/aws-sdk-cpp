/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ExternalSourcesGenerationConfiguration.h>
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

ExternalSourcesGenerationConfiguration::ExternalSourcesGenerationConfiguration() : 
    m_additionalModelRequestFieldsHasBeenSet(false),
    m_guardrailConfigurationHasBeenSet(false),
    m_inferenceConfigHasBeenSet(false),
    m_promptTemplateHasBeenSet(false)
{
}

ExternalSourcesGenerationConfiguration::ExternalSourcesGenerationConfiguration(JsonView jsonValue) : 
    m_additionalModelRequestFieldsHasBeenSet(false),
    m_guardrailConfigurationHasBeenSet(false),
    m_inferenceConfigHasBeenSet(false),
    m_promptTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalSourcesGenerationConfiguration& ExternalSourcesGenerationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalModelRequestFields"))
  {
    Aws::Map<Aws::String, JsonView> additionalModelRequestFieldsJsonMap = jsonValue.GetObject("additionalModelRequestFields").GetAllObjects();
    for(auto& additionalModelRequestFieldsItem : additionalModelRequestFieldsJsonMap)
    {
      m_additionalModelRequestFields[additionalModelRequestFieldsItem.first] = additionalModelRequestFieldsItem.second.AsObject();
    }
    m_additionalModelRequestFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");

    m_guardrailConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceConfig"))
  {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");

    m_inferenceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promptTemplate"))
  {
    m_promptTemplate = jsonValue.GetObject("promptTemplate");

    m_promptTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalSourcesGenerationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
   JsonValue additionalModelRequestFieldsJsonMap;
   for(auto& additionalModelRequestFieldsItem : m_additionalModelRequestFields)
   {
     additionalModelRequestFieldsJsonMap.WithObject(additionalModelRequestFieldsItem.first, additionalModelRequestFieldsItem.second.View());
   }
   payload.WithObject("additionalModelRequestFields", std::move(additionalModelRequestFieldsJsonMap));

  }

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  if(m_inferenceConfigHasBeenSet)
  {
   payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());

  }

  if(m_promptTemplateHasBeenSet)
  {
   payload.WithObject("promptTemplate", m_promptTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
