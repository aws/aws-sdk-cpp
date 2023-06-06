/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLevelTestResultItem.h>
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

ConversationLevelTestResultItem::ConversationLevelTestResultItem() : 
    m_conversationIdHasBeenSet(false),
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false),
    m_speechTranscriptionResult(TestResultMatchStatus::NOT_SET),
    m_speechTranscriptionResultHasBeenSet(false),
    m_intentClassificationResultsHasBeenSet(false),
    m_slotResolutionResultsHasBeenSet(false)
{
}

ConversationLevelTestResultItem::ConversationLevelTestResultItem(JsonView jsonValue) : 
    m_conversationIdHasBeenSet(false),
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false),
    m_speechTranscriptionResult(TestResultMatchStatus::NOT_SET),
    m_speechTranscriptionResultHasBeenSet(false),
    m_intentClassificationResultsHasBeenSet(false),
    m_slotResolutionResultsHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLevelTestResultItem& ConversationLevelTestResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

    m_conversationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endToEndResult"))
  {
    m_endToEndResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("endToEndResult"));

    m_endToEndResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speechTranscriptionResult"))
  {
    m_speechTranscriptionResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("speechTranscriptionResult"));

    m_speechTranscriptionResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentClassificationResults"))
  {
    Aws::Utils::Array<JsonView> intentClassificationResultsJsonList = jsonValue.GetArray("intentClassificationResults");
    for(unsigned intentClassificationResultsIndex = 0; intentClassificationResultsIndex < intentClassificationResultsJsonList.GetLength(); ++intentClassificationResultsIndex)
    {
      m_intentClassificationResults.push_back(intentClassificationResultsJsonList[intentClassificationResultsIndex].AsObject());
    }
    m_intentClassificationResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotResolutionResults"))
  {
    Aws::Utils::Array<JsonView> slotResolutionResultsJsonList = jsonValue.GetArray("slotResolutionResults");
    for(unsigned slotResolutionResultsIndex = 0; slotResolutionResultsIndex < slotResolutionResultsJsonList.GetLength(); ++slotResolutionResultsIndex)
    {
      m_slotResolutionResults.push_back(slotResolutionResultsJsonList[slotResolutionResultsIndex].AsObject());
    }
    m_slotResolutionResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLevelTestResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_endToEndResultHasBeenSet)
  {
   payload.WithString("endToEndResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_endToEndResult));
  }

  if(m_speechTranscriptionResultHasBeenSet)
  {
   payload.WithString("speechTranscriptionResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_speechTranscriptionResult));
  }

  if(m_intentClassificationResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intentClassificationResultsJsonList(m_intentClassificationResults.size());
   for(unsigned intentClassificationResultsIndex = 0; intentClassificationResultsIndex < intentClassificationResultsJsonList.GetLength(); ++intentClassificationResultsIndex)
   {
     intentClassificationResultsJsonList[intentClassificationResultsIndex].AsObject(m_intentClassificationResults[intentClassificationResultsIndex].Jsonize());
   }
   payload.WithArray("intentClassificationResults", std::move(intentClassificationResultsJsonList));

  }

  if(m_slotResolutionResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotResolutionResultsJsonList(m_slotResolutionResults.size());
   for(unsigned slotResolutionResultsIndex = 0; slotResolutionResultsIndex < slotResolutionResultsJsonList.GetLength(); ++slotResolutionResultsIndex)
   {
     slotResolutionResultsJsonList[slotResolutionResultsIndex].AsObject(m_slotResolutionResults[slotResolutionResultsIndex].Jsonize());
   }
   payload.WithArray("slotResolutionResults", std::move(slotResolutionResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
