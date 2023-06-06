/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentLevelSlotResolutionTestResultItem.h>
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

IntentLevelSlotResolutionTestResultItem::IntentLevelSlotResolutionTestResultItem() : 
    m_intentNameHasBeenSet(false),
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_slotResolutionResultsHasBeenSet(false)
{
}

IntentLevelSlotResolutionTestResultItem::IntentLevelSlotResolutionTestResultItem(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_slotResolutionResultsHasBeenSet(false)
{
  *this = jsonValue;
}

IntentLevelSlotResolutionTestResultItem& IntentLevelSlotResolutionTestResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiTurnConversation"))
  {
    m_multiTurnConversation = jsonValue.GetBool("multiTurnConversation");

    m_multiTurnConversationHasBeenSet = true;
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

JsonValue IntentLevelSlotResolutionTestResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_multiTurnConversationHasBeenSet)
  {
   payload.WithBool("multiTurnConversation", m_multiTurnConversation);

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
