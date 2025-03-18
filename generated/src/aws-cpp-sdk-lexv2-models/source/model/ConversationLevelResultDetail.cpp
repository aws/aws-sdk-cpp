/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLevelResultDetail.h>
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

ConversationLevelResultDetail::ConversationLevelResultDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversationLevelResultDetail& ConversationLevelResultDetail::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue ConversationLevelResultDetail::Jsonize() const
{
  JsonValue payload;

  if(m_endToEndResultHasBeenSet)
  {
   payload.WithString("endToEndResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_endToEndResult));
  }

  if(m_speechTranscriptionResultHasBeenSet)
  {
   payload.WithString("speechTranscriptionResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_speechTranscriptionResult));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
