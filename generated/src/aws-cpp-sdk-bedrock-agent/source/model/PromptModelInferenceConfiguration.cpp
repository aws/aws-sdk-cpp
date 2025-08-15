/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptModelInferenceConfiguration.h>
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

PromptModelInferenceConfiguration::PromptModelInferenceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptModelInferenceConfiguration& PromptModelInferenceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("temperature"))
  {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("topP"))
  {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxTokens"))
  {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stopSequences"))
  {
    Aws::Utils::Array<JsonView> stopSequencesJsonList = jsonValue.GetArray("stopSequences");
    for(unsigned stopSequencesIndex = 0; stopSequencesIndex < stopSequencesJsonList.GetLength(); ++stopSequencesIndex)
    {
      m_stopSequences.push_back(stopSequencesJsonList[stopSequencesIndex].AsString());
    }
    m_stopSequencesHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptModelInferenceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_temperatureHasBeenSet)
  {
   payload.WithDouble("temperature", m_temperature);

  }

  if(m_topPHasBeenSet)
  {
   payload.WithDouble("topP", m_topP);

  }

  if(m_maxTokensHasBeenSet)
  {
   payload.WithInteger("maxTokens", m_maxTokens);

  }

  if(m_stopSequencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stopSequencesJsonList(m_stopSequences.size());
   for(unsigned stopSequencesIndex = 0; stopSequencesIndex < stopSequencesJsonList.GetLength(); ++stopSequencesIndex)
   {
     stopSequencesJsonList[stopSequencesIndex].AsString(m_stopSequences[stopSequencesIndex]);
   }
   payload.WithArray("stopSequences", std::move(stopSequencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
