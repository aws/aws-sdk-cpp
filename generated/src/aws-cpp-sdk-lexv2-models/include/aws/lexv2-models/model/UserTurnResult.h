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
    AWS_LEXMODELSV2_API UserTurnResult() = default;
    AWS_LEXMODELSV2_API UserTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline const UserTurnInputSpecification& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = UserTurnInputSpecification>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = UserTurnInputSpecification>
    UserTurnResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the expected output for the user turn.</p>
     */
    inline const UserTurnOutputSpecification& GetExpectedOutput() const { return m_expectedOutput; }
    inline bool ExpectedOutputHasBeenSet() const { return m_expectedOutputHasBeenSet; }
    template<typename ExpectedOutputT = UserTurnOutputSpecification>
    void SetExpectedOutput(ExpectedOutputT&& value) { m_expectedOutputHasBeenSet = true; m_expectedOutput = std::forward<ExpectedOutputT>(value); }
    template<typename ExpectedOutputT = UserTurnOutputSpecification>
    UserTurnResult& WithExpectedOutput(ExpectedOutputT&& value) { SetExpectedOutput(std::forward<ExpectedOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the actual output for the user turn.</p>
     */
    inline const UserTurnOutputSpecification& GetActualOutput() const { return m_actualOutput; }
    inline bool ActualOutputHasBeenSet() const { return m_actualOutputHasBeenSet; }
    template<typename ActualOutputT = UserTurnOutputSpecification>
    void SetActualOutput(ActualOutputT&& value) { m_actualOutputHasBeenSet = true; m_actualOutput = std::forward<ActualOutputT>(value); }
    template<typename ActualOutputT = UserTurnOutputSpecification>
    UserTurnResult& WithActualOutput(ActualOutputT&& value) { SetActualOutput(std::forward<ActualOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ExecutionErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ExecutionErrorDetails>
    UserTurnResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the expected and actual outputs match or not, or if there
     * is an error in execution.</p>
     */
    inline TestResultMatchStatus GetEndToEndResult() const { return m_endToEndResult; }
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }
    inline void SetEndToEndResult(TestResultMatchStatus value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }
    inline UserTurnResult& WithEndToEndResult(TestResultMatchStatus value) { SetEndToEndResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the expected and actual intents match or not.</p>
     */
    inline TestResultMatchStatus GetIntentMatchResult() const { return m_intentMatchResult; }
    inline bool IntentMatchResultHasBeenSet() const { return m_intentMatchResultHasBeenSet; }
    inline void SetIntentMatchResult(TestResultMatchStatus value) { m_intentMatchResultHasBeenSet = true; m_intentMatchResult = value; }
    inline UserTurnResult& WithIntentMatchResult(TestResultMatchStatus value) { SetIntentMatchResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the expected and actual slots match or not.</p>
     */
    inline TestResultMatchStatus GetSlotMatchResult() const { return m_slotMatchResult; }
    inline bool SlotMatchResultHasBeenSet() const { return m_slotMatchResultHasBeenSet; }
    inline void SetSlotMatchResult(TestResultMatchStatus value) { m_slotMatchResultHasBeenSet = true; m_slotMatchResult = value; }
    inline UserTurnResult& WithSlotMatchResult(TestResultMatchStatus value) { SetSlotMatchResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the expected and actual speech transcriptions match or not,
     * or if there is an error in execution.</p>
     */
    inline TestResultMatchStatus GetSpeechTranscriptionResult() const { return m_speechTranscriptionResult; }
    inline bool SpeechTranscriptionResultHasBeenSet() const { return m_speechTranscriptionResultHasBeenSet; }
    inline void SetSpeechTranscriptionResult(TestResultMatchStatus value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = value; }
    inline UserTurnResult& WithSpeechTranscriptionResult(TestResultMatchStatus value) { SetSpeechTranscriptionResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the results related to the conversation associated
     * with the user turn.</p>
     */
    inline const ConversationLevelResultDetail& GetConversationLevelResult() const { return m_conversationLevelResult; }
    inline bool ConversationLevelResultHasBeenSet() const { return m_conversationLevelResultHasBeenSet; }
    template<typename ConversationLevelResultT = ConversationLevelResultDetail>
    void SetConversationLevelResult(ConversationLevelResultT&& value) { m_conversationLevelResultHasBeenSet = true; m_conversationLevelResult = std::forward<ConversationLevelResultT>(value); }
    template<typename ConversationLevelResultT = ConversationLevelResultDetail>
    UserTurnResult& WithConversationLevelResult(ConversationLevelResultT&& value) { SetConversationLevelResult(std::forward<ConversationLevelResultT>(value)); return *this;}
    ///@}
  private:

    UserTurnInputSpecification m_input;
    bool m_inputHasBeenSet = false;

    UserTurnOutputSpecification m_expectedOutput;
    bool m_expectedOutputHasBeenSet = false;

    UserTurnOutputSpecification m_actualOutput;
    bool m_actualOutputHasBeenSet = false;

    ExecutionErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    TestResultMatchStatus m_endToEndResult{TestResultMatchStatus::NOT_SET};
    bool m_endToEndResultHasBeenSet = false;

    TestResultMatchStatus m_intentMatchResult{TestResultMatchStatus::NOT_SET};
    bool m_intentMatchResultHasBeenSet = false;

    TestResultMatchStatus m_slotMatchResult{TestResultMatchStatus::NOT_SET};
    bool m_slotMatchResultHasBeenSet = false;

    TestResultMatchStatus m_speechTranscriptionResult{TestResultMatchStatus::NOT_SET};
    bool m_speechTranscriptionResultHasBeenSet = false;

    ConversationLevelResultDetail m_conversationLevelResult;
    bool m_conversationLevelResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
