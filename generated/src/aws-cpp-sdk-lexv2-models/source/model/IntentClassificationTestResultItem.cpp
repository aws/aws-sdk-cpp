/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentClassificationTestResultItem.h>
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

IntentClassificationTestResultItem::IntentClassificationTestResultItem() : 
    m_intentNameHasBeenSet(false),
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_resultCountsHasBeenSet(false)
{
}

IntentClassificationTestResultItem::IntentClassificationTestResultItem(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_multiTurnConversation(false),
    m_multiTurnConversationHasBeenSet(false),
    m_resultCountsHasBeenSet(false)
{
  *this = jsonValue;
}

IntentClassificationTestResultItem& IntentClassificationTestResultItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("resultCounts"))
  {
    m_resultCounts = jsonValue.GetObject("resultCounts");

    m_resultCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentClassificationTestResultItem::Jsonize() const
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

  if(m_resultCountsHasBeenSet)
  {
   payload.WithObject("resultCounts", m_resultCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
