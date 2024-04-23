/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ExternalSourcesRetrieveAndGenerateConfiguration.h>
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

ExternalSourcesRetrieveAndGenerateConfiguration::ExternalSourcesRetrieveAndGenerateConfiguration() : 
    m_generationConfigurationHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

ExternalSourcesRetrieveAndGenerateConfiguration::ExternalSourcesRetrieveAndGenerateConfiguration(JsonView jsonValue) : 
    m_generationConfigurationHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalSourcesRetrieveAndGenerateConfiguration& ExternalSourcesRetrieveAndGenerateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generationConfiguration"))
  {
    m_generationConfiguration = jsonValue.GetObject("generationConfiguration");

    m_generationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalSourcesRetrieveAndGenerateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_generationConfigurationHasBeenSet)
  {
   payload.WithObject("generationConfiguration", m_generationConfiguration.Jsonize());

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
