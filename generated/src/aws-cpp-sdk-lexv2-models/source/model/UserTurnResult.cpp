/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UserTurnResult.h>
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

UserTurnResult::UserTurnResult() : 
    m_inputHasBeenSet(false),
    m_expectedOutputHasBeenSet(false),
    m_actualOutputHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false),
    m_intentMatchResult(TestResultMatchStatus::NOT_SET),
    m_intentMatchResultHasBeenSet(false),
    m_slotMatchResult(TestResultMatchStatus::NOT_SET),
    m_slotMatchResultHasBeenSet(false),
    m_speechTranscriptionResult(TestResultMatchStatus::NOT_SET),
    m_speechTranscriptionResultHasBeenSet(false),
    m_conversationLevelResultHasBeenSet(false)
{
}

UserTurnResult::UserTurnResult(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_expectedOutputHasBeenSet(false),
    m_actualOutputHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_endToEndResult(TestResultMatchStatus::NOT_SET),
    m_endToEndResultHasBeenSet(false),
    m_intentMatchResult(TestResultMatchStatus::NOT_SET),
    m_intentMatchResultHasBeenSet(false),
    m_slotMatchResult(TestResultMatchStatus::NOT_SET),
    m_slotMatchResultHasBeenSet(false),
    m_speechTranscriptionResult(TestResultMatchStatus::NOT_SET),
    m_speechTranscriptionResultHasBeenSet(false),
    m_conversationLevelResultHasBeenSet(false)
{
  *this = jsonValue;
}

UserTurnResult& UserTurnResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expectedOutput"))
  {
    m_expectedOutput = jsonValue.GetObject("expectedOutput");

    m_expectedOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualOutput"))
  {
    m_actualOutput = jsonValue.GetObject("actualOutput");

    m_actualOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("errorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endToEndResult"))
  {
    m_endToEndResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("endToEndResult"));

    m_endToEndResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentMatchResult"))
  {
    m_intentMatchResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("intentMatchResult"));

    m_intentMatchResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotMatchResult"))
  {
    m_slotMatchResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("slotMatchResult"));

    m_slotMatchResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speechTranscriptionResult"))
  {
    m_speechTranscriptionResult = TestResultMatchStatusMapper::GetTestResultMatchStatusForName(jsonValue.GetString("speechTranscriptionResult"));

    m_speechTranscriptionResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationLevelResult"))
  {
    m_conversationLevelResult = jsonValue.GetObject("conversationLevelResult");

    m_conversationLevelResultHasBeenSet = true;
  }

  return *this;
}

JsonValue UserTurnResult::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_expectedOutputHasBeenSet)
  {
   payload.WithObject("expectedOutput", m_expectedOutput.Jsonize());

  }

  if(m_actualOutputHasBeenSet)
  {
   payload.WithObject("actualOutput", m_actualOutput.Jsonize());

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("errorDetails", m_errorDetails.Jsonize());

  }

  if(m_endToEndResultHasBeenSet)
  {
   payload.WithString("endToEndResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_endToEndResult));
  }

  if(m_intentMatchResultHasBeenSet)
  {
   payload.WithString("intentMatchResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_intentMatchResult));
  }

  if(m_slotMatchResultHasBeenSet)
  {
   payload.WithString("slotMatchResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_slotMatchResult));
  }

  if(m_speechTranscriptionResultHasBeenSet)
  {
   payload.WithString("speechTranscriptionResult", TestResultMatchStatusMapper::GetNameForTestResultMatchStatus(m_speechTranscriptionResult));
  }

  if(m_conversationLevelResultHasBeenSet)
  {
   payload.WithObject("conversationLevelResult", m_conversationLevelResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
