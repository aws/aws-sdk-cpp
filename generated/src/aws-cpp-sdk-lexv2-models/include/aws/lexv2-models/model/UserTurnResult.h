/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/UserTurnInputSpecification.h>
#include <aws/lexv2-models/model/UserTurnOutputSpecification.h>
#include <aws/lexv2-models/model/ExecutionErrorDetails.h>
#include <aws/lexv2-models/model/TestResultMatchStatus.h>
#include <aws/lexv2-models/model/ConversationLevelResultDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains the results for the user turn by the test execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnResult">AWS
   * API Reference</a></p>
   */
  class UserTurnResult
  {
  public:
    AWS_LEXMODELSV2_API UserTurnResult();
    AWS_LEXMODELSV2_API UserTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline const UserTurnInputSpecification& GetInput() const{ return m_input; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline void SetInput(const UserTurnInputSpecification& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline void SetInput(UserTurnInputSpecification&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline UserTurnResult& WithInput(const UserTurnInputSpecification& value) { SetInput(value); return *this;}

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline UserTurnResult& WithInput(UserTurnInputSpecification&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline const UserTurnOutputSpecification& GetExpectedOutput() const{ return m_expectedOutput; }

    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline bool ExpectedOutputHasBeenSet() const { return m_expectedOutputHasBeenSet; }

    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline void SetExpectedOutput(const UserTurnOutputSpecification& value) { m_expectedOutputHasBeenSet = true; m_expectedOutput = value; }

    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline void SetExpectedOutput(UserTurnOutputSpecification&& value) { m_expectedOutputHasBeenSet = true; m_expectedOutput = std::move(value); }

    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline UserTurnResult& WithExpectedOutput(const UserTurnOutputSpecification& value) { SetExpectedOutput(value); return *this;}

    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline UserTurnResult& WithExpectedOutput(UserTurnOutputSpecification&& value) { SetExpectedOutput(std::move(value)); return *this;}


    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline const UserTurnOutputSpecification& GetActualOutput() const{ return m_actualOutput; }

    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline bool ActualOutputHasBeenSet() const { return m_actualOutputHasBeenSet; }

    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline void SetActualOutput(const UserTurnOutputSpecification& value) { m_actualOutputHasBeenSet = true; m_actualOutput = value; }

    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline void SetActualOutput(UserTurnOutputSpecification&& value) { m_actualOutputHasBeenSet = true; m_actualOutput = std::move(value); }

    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline UserTurnResult& WithActualOutput(const UserTurnOutputSpecification& value) { SetActualOutput(value); return *this;}

    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline UserTurnResult& WithActualOutput(UserTurnOutputSpecification&& value) { SetActualOutput(std::move(value)); return *this;}


    
    inline const ExecutionErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    
    inline void SetErrorDetails(const ExecutionErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    
    inline void SetErrorDetails(ExecutionErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    
    inline UserTurnResult& WithErrorDetails(const ExecutionErrorDetails& value) { SetErrorDetails(value); return *this;}

    
    inline UserTurnResult& WithErrorDetails(ExecutionErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline const TestResultMatchStatus& GetEndToEndResult() const{ return m_endToEndResult; }

    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }

    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline void SetEndToEndResult(const TestResultMatchStatus& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }

    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline void SetEndToEndResult(TestResultMatchStatus&& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = std::move(value); }

    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline UserTurnResult& WithEndToEndResult(const TestResultMatchStatus& value) { SetEndToEndResult(value); return *this;}

    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline UserTurnResult& WithEndToEndResult(TestResultMatchStatus&& value) { SetEndToEndResult(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline const TestResultMatchStatus& GetIntentMatchResult() const{ return m_intentMatchResult; }

    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline bool IntentMatchResultHasBeenSet() const { return m_intentMatchResultHasBeenSet; }

    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline void SetIntentMatchResult(const TestResultMatchStatus& value) { m_intentMatchResultHasBeenSet = true; m_intentMatchResult = value; }

    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline void SetIntentMatchResult(TestResultMatchStatus&& value) { m_intentMatchResultHasBeenSet = true; m_intentMatchResult = std::move(value); }

    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline UserTurnResult& WithIntentMatchResult(const TestResultMatchStatus& value) { SetIntentMatchResult(value); return *this;}

    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline UserTurnResult& WithIntentMatchResult(TestResultMatchStatus&& value) { SetIntentMatchResult(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline const TestResultMatchStatus& GetSlotMatchResult() const{ return m_slotMatchResult; }

    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline bool SlotMatchResultHasBeenSet() const { return m_slotMatchResultHasBeenSet; }

    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline void SetSlotMatchResult(const TestResultMatchStatus& value) { m_slotMatchResultHasBeenSet = true; m_slotMatchResult = value; }

    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline void SetSlotMatchResult(TestResultMatchStatus&& value) { m_slotMatchResultHasBeenSet = true; m_slotMatchResult = std::move(value); }

    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline UserTurnResult& WithSlotMatchResult(const TestResultMatchStatus& value) { SetSlotMatchResult(value); return *this;}

    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline UserTurnResult& WithSlotMatchResult(TestResultMatchStatus&& value) { SetSlotMatchResult(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline const TestResultMatchStatus& GetSpeechTranscriptionResult() const{ return m_speechTranscriptionResult; }

    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline bool SpeechTranscriptionResultHasBeenSet() const { return m_speechTranscriptionResultHasBeenSet; }

    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline void SetSpeechTranscriptionResult(const TestResultMatchStatus& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = value; }

    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline void SetSpeechTranscriptionResult(TestResultMatchStatus&& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = std::move(value); }

    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline UserTurnResult& WithSpeechTranscriptionResult(const TestResultMatchStatus& value) { SetSpeechTranscriptionResult(value); return *this;}

    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline UserTurnResult& WithSpeechTranscriptionResult(TestResultMatchStatus&& value) { SetSpeechTranscriptionResult(std::move(value)); return *this;}


    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline const ConversationLevelResultDetail& GetConversationLevelResult() const{ return m_conversationLevelResult; }

    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline bool ConversationLevelResultHasBeenSet() const { return m_conversationLevelResultHasBeenSet; }

    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline void SetConversationLevelResult(const ConversationLevelResultDetail& value) { m_conversationLevelResultHasBeenSet = true; m_conversationLevelResult = value; }

    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline void SetConversationLevelResult(ConversationLevelResultDetail&& value) { m_conversationLevelResultHasBeenSet = true; m_conversationLevelResult = std::move(value); }

    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline UserTurnResult& WithConversationLevelResult(const ConversationLevelResultDetail& value) { SetConversationLevelResult(value); return *this;}

    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline UserTurnResult& WithConversationLevelResult(ConversationLevelResultDetail&& value) { SetConversationLevelResult(std::move(value)); return *this;}

  private:

    UserTurnInputSpecification m_input;
    bool m_inputHasBeenSet = false;

    UserTurnOutputSpecification m_expectedOutput;
    bool m_expectedOutputHasBeenSet = false;

    UserTurnOutputSpecification m_actualOutput;
    bool m_actualOutputHasBeenSet = false;

    ExecutionErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    TestResultMatchStatus m_endToEndResult;
    bool m_endToEndResultHasBeenSet = false;

    TestResultMatchStatus m_intentMatchResult;
    bool m_intentMatchResultHasBeenSet = false;

    TestResultMatchStatus m_slotMatchResult;
    bool m_slotMatchResultHasBeenSet = false;

    TestResultMatchStatus m_speechTranscriptionResult;
    bool m_speechTranscriptionResultHasBeenSet = false;

    ConversationLevelResultDetail m_conversationLevelResult;
    bool m_conversationLevelResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
