/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InferenceConfiguration.h>
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

InferenceConfiguration::InferenceConfiguration() : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_stopSequencesHasBeenSet(false),
    m_temperature(0.0),
    m_temperatureHasBeenSet(false),
    m_topK(0),
    m_topKHasBeenSet(false),
    m_topP(0.0),
    m_topPHasBeenSet(false)
{
}

InferenceConfiguration::InferenceConfiguration(JsonView jsonValue) : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_stopSequencesHasBeenSet(false),
    m_temperature(0.0),
    m_temperatureHasBeenSet(false),
    m_topK(0),
    m_topKHasBeenSet(false),
    m_topP(0.0),
    m_topPHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceConfiguration& InferenceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumLength"))
  {
    m_maximumLength = jsonValue.GetInteger("maximumLength");

    m_maximumLengthHasBeenSet = true;
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

  if(jsonValue.ValueExists("temperature"))
  {
    m_temperature = jsonValue.GetDouble("temperature");

    m_temperatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topK"))
  {
    m_topK = jsonValue.GetInteger("topK");

    m_topKHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topP"))
  {
    m_topP = jsonValue.GetDouble("topP");

    m_topPHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maximumLengthHasBeenSet)
  {
   payload.WithInteger("maximumLength", m_maximumLength);

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

  if(m_temperatureHasBeenSet)
  {
   payload.WithDouble("temperature", m_temperature);

  }

  if(m_topKHasBeenSet)
  {
   payload.WithInteger("topK", m_topK);

  }

  if(m_topPHasBeenSet)
  {
   payload.WithDouble("topP", m_topP);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
