/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotResolutionTestResultItemCounts.h>
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

SlotResolutionTestResultItemCounts::SlotResolutionTestResultItemCounts() : 
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_slotMatchResultCountsHasBeenSet(false)
{
}

SlotResolutionTestResultItemCounts::SlotResolutionTestResultItemCounts(JsonView jsonValue) : 
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_slotMatchResultCountsHasBeenSet(false)
{
  *this = jsonValue;
}

SlotResolutionTestResultItemCounts& SlotResolutionTestResultItemCounts::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("slotMatchResultCounts"))
  {
    Aws::Map<Aws::String, JsonView> slotMatchResultCountsJsonMap = jsonValue.GetObject("slotMatchResultCounts").GetAllObjects();
    for(auto& slotMatchResultCountsItem : slotMatchResultCountsJsonMap)
    {
      m_slotMatchResultCounts[TestResultMatchStatusMapper::GetTestResultMatchStatusForName(slotMatchResultCountsItem.first)] = slotMatchResultCountsItem.second.AsInteger();
    }
    m_slotMatchResultCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotResolutionTestResultItemCounts::Jsonize() const
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

  if(m_slotMatchResultCountsHasBeenSet)
  {
   JsonValue slotMatchResultCountsJsonMap;
   for(auto& slotMatchResultCountsItem : m_slotMatchResultCounts)
   {
     slotMatchResultCountsJsonMap.WithInteger(TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(slotMatchResultCountsItem.first), slotMatchResultCountsItem.second);
   }
   payload.WithObject("slotMatchResultCounts", std::move(slotMatchResultCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
