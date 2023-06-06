/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLevelIntentClassificationResultItem.h>
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

ConversationLevelIntentClassificationResultItem::ConversationLevelIntentClassificationResultItem() : 
    m_intentNameHasBeenSet(false),
    m_matchResult(TestResultMatchStatus::NOT_SET),
    m_matchResultHasBeenSet(false)
{
}

ConversationLevelIntentClassificationResultItem::ConversationLevelIntentClassificationResultItem(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_matchResult(TestResultMatchStatus::NOT_SET),
    m_matchResultHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLevelIntentClassificationResultItem& ConversationLevelIntentClassificationResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("matchResult"))
  {
    m_matchResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("matchResult"));

    m_matchResultHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLevelIntentClassificationResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_matchResultHasBeenSet)
  {
   payload.WithString("matchResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_matchResult));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
