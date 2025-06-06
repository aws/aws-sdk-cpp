﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/InferenceConfiguration.h>
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

InferenceConfiguration::InferenceConfiguration(JsonView jsonValue)
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
} // namespace BedrockAgent
} // namespace Aws
