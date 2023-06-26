/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentClassificationTestResultItemCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

IntentClassificationTestResultItemCounts::IntentClassificationTestResultItemCounts() : 
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_intentMatchResultCountsHasBeenSet(false)
{
}

IntentClassificationTestResultItemCounts::IntentClassificationTestResultItemCounts(JsonView jsonValue) : 
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_intentMatchResultCountsHasBeenSet(false)
{
  *this = jsonValue;
}

IntentClassificationTestResultItemCounts& IntentClassificationTestResultItemCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalResultCount"))
  {
    m_totalResultCount = jsonValue.GetInteger("totalResultCount");

    m_totalResultCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speechTranscriptionResultCounts"))
  {
    Aws::Map<Aws::String, JsonView> speechTranscriptionResultCountsJsonMap = jsonValue.GetObject("speechTranscriptionResultCounts").GetAllObjects();
    for(auto& speechTranscriptionResultCountsItem : speechTranscriptionResultCountsJsonMap)
    {
      m_speechTranscriptionResultCounts[TestResultMatchStatusMapper::GetTestResultMatchStatusForName(speechTranscriptionResultCountsItem.first)] = speechTranscriptionResultCountsItem.second.AsInteger();
    }
    m_speechTranscriptionResultCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentMatchResultCounts"))
  {
    Aws::Map<Aws::String, JsonView> intentMatchResultCountsJsonMap = jsonValue.GetObject("intentMatchResultCounts").GetAllObjects();
    for(auto& intentMatchResultCountsItem : intentMatchResultCountsJsonMap)
    {
      m_intentMatchResultCounts[TestResultMatchStatusMapper::GetTestResultMatchStatusForName(intentMatchResultCountsItem.first)] = intentMatchResultCountsItem.second.AsInteger();
    }
    m_intentMatchResultCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentClassificationTestResultItemCounts::Jsonize() const
{
  JsonValue payload;

  if(m_totalResultCountHasBeenSet)
  {
   payload.WithInteger("totalResultCount", m_totalResultCount);

  }

  if(m_speechTranscriptionResultCountsHasBeenSet)
  {
   JsonValue speechTranscriptionResultCountsJsonMap;
   for(auto& speechTranscriptionResultCountsItem : m_speechTranscriptionResultCounts)
   {
     speechTranscriptionResultCountsJsonMap.WithInteger(TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(speechTranscriptionResultCountsItem.first), speechTranscriptionResultCountsItem.second);
   }
   payload.WithObject("speechTranscriptionResultCounts", std::move(speechTranscriptionResultCountsJsonMap));

  }

  if(m_intentMatchResultCountsHasBeenSet)
  {
   JsonValue intentMatchResultCountsJsonMap;
   for(auto& intentMatchResultCountsItem : m_intentMatchResultCounts)
   {
     intentMatchResultCountsJsonMap.WithInteger(TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(intentMatchResultCountsItem.first), intentMatchResultCountsItem.second);
   }
   payload.WithObject("intentMatchResultCounts", std::move(intentMatchResultCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
