/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/OverallTestResultItem.h>
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

OverallTestResultItem::OverallTestResultItem() : 
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_endToEndResultCountsHasBeenSet(false)
{
}

OverallTestResultItem::OverallTestResultItem(JsonView jsonValue) : 
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_totalResultCount(0),
    m_totalResultCountHasBeenSet(false),
    m_speechTranscriptionResultCountsHasBeenSet(false),
    m_endToEndResultCountsHasBeenSet(false)
{
  *this = jsonValue;
}

OverallTestResultItem& OverallTestResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multiTurnConversation"))
  {
    m_multiTurnConversation = jsonValue.GetBool("multiTurnConversation");

    m_multiTurnConversationHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("endToEndResultCounts"))
  {
    Aws::Map<Aws::String, JsonView> endToEndResultCountsJsonMap = jsonValue.GetObject("endToEndResultCounts").GetAllObjects();
    for(auto& endToEndResultCountsItem : endToEndResultCountsJsonMap)
    {
      m_endToEndResultCounts[TestResultMatchStatusMapper::GetTestResultMatchStatusForName(endToEndResultCountsItem.first)] = endToEndResultCountsItem.second.AsInteger();
    }
    m_endToEndResultCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue OverallTestResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_multiTurnConversationHasBeenSet)
  {
   payload.WithBool("multiTurnConversation", m_multiTurnConversation);

  }

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

  if(m_endToEndResultCountsHasBeenSet)
  {
   JsonValue endToEndResultCountsJsonMap;
   for(auto& endToEndResultCountsItem : m_endToEndResultCounts)
   {
     endToEndResultCountsJsonMap.WithInteger(TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(endToEndResultCountsItem.first), endToEndResultCountsItem.second);
   }
   payload.WithObject("endToEndResultCounts", std::move(endToEndResultCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
