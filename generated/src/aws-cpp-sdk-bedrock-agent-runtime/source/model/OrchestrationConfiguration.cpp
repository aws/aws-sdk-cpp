/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OrchestrationConfiguration.h>
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

OrchestrationConfiguration::OrchestrationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OrchestrationConfiguration& OrchestrationConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("inferenceConfig"))
  {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");
    m_inferenceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performanceConfig"))
  {
    m_performanceConfig = jsonValue.GetObject("performanceConfig");
    m_performanceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptTemplate"))
  {
    m_promptTemplate = jsonValue.GetObject("promptTemplate");
    m_promptTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryTransformationConfiguration"))
  {
    m_queryTransformationConfiguration = jsonValue.GetObject("queryTransformationConfiguration");
    m_queryTransformationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestrationConfiguration::Jsonize() const
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

  if(m_inferenceConfigHasBeenSet)
  {
   payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());

  }

  if(m_performanceConfigHasBeenSet)
  {
   payload.WithObject("performanceConfig", m_performanceConfig.Jsonize());

  }

  if(m_promptTemplateHasBeenSet)
  {
   payload.WithObject("promptTemplate", m_promptTemplate.Jsonize());

  }

  if(m_queryTransformationConfigurationHasBeenSet)
  {
   payload.WithObject("queryTransformationConfiguration", m_queryTransformationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
