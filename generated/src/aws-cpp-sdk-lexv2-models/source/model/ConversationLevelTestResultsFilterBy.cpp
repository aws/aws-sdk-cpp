/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLevelTestResultsFilterBy.h>
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

ConversationLevelTestResultsFilterBy::ConversationLevelTestResultsFilterBy() : 
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false)
{
}

ConversationLevelTestResultsFilterBy::ConversationLevelTestResultsFilterBy(JsonView jsonValue) : 
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLevelTestResultsFilterBy& ConversationLevelTestResultsFilterBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endToEndResult"))
  {
    m_endToEndResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("endToEndResult"));

    m_endToEndResultHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLevelTestResultsFilterBy::Jsonize() const
{
  JsonValue payload;

  if(m_endToEndResultHasBeenSet)
  {
   payload.WithString("endToEndResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_endToEndResult));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
