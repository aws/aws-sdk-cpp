/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestResultMatchStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ConversationLevelIntentClassificationResultItem.h>
#include <aws/lexv2-models/model/ConversationLevelSlotResolutionResultItem.h>
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
   * <p>The test result evaluation item at the conversation level.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelTestResultItem">AWS
   * API Reference</a></p>
   */
  class ConversationLevelTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem() = default;
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    ConversationLevelTestResultItem& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline TestResultMatchStatus GetEndToEndResult() const { return m_endToEndResult; }
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }
    inline void SetEndToEndResult(TestResultMatchStatus value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }
    inline ConversationLevelTestResultItem& WithEndToEndResult(TestResultMatchStatus value) { SetEndToEndResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline TestResultMatchStatus GetSpeechTranscriptionResult() const { return m_speechTranscriptionResult; }
    inline bool SpeechTranscriptionResultHasBeenSet() const { return m_speechTranscriptionResultHasBeenSet; }
    inline void SetSpeechTranscriptionResult(TestResultMatchStatus value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = value; }
    inline ConversationLevelTestResultItem& WithSpeechTranscriptionResult(TestResultMatchStatus value) { SetSpeechTranscriptionResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline const Aws::Vector<ConversationLevelIntentClassificationResultItem>& GetIntentClassificationResults() const { return m_intentClassificationResults; }
    inline bool IntentClassificationResultsHasBeenSet() const { return m_intentClassificationResultsHasBeenSet; }
    template<typename IntentClassificationResultsT = Aws::Vector<ConversationLevelIntentClassificationResultItem>>
    void SetIntentClassificationResults(IntentClassificationResultsT&& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults = std::forward<IntentClassificationResultsT>(value); }
    template<typename IntentClassificationResultsT = Aws::Vector<ConversationLevelIntentClassificationResultItem>>
    ConversationLevelTestResultItem& WithIntentClassificationResults(IntentClassificationResultsT&& value) { SetIntentClassificationResults(std::forward<IntentClassificationResultsT>(value)); return *this;}
    template<typename IntentClassificationResultsT = ConversationLevelIntentClassificationResultItem>
    ConversationLevelTestResultItem& AddIntentClassificationResults(IntentClassificationResultsT&& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults.emplace_back(std::forward<IntentClassificationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline const Aws::Vector<ConversationLevelSlotResolutionResultItem>& GetSlotResolutionResults() const { return m_slotResolutionResults; }
    inline bool SlotResolutionResultsHasBeenSet() const { return m_slotResolutionResultsHasBeenSet; }
    template<typename SlotResolutionResultsT = Aws::Vector<ConversationLevelSlotResolutionResultItem>>
    void SetSlotResolutionResults(SlotResolutionResultsT&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = std::forward<SlotResolutionResultsT>(value); }
    template<typename SlotResolutionResultsT = Aws::Vector<ConversationLevelSlotResolutionResultItem>>
    ConversationLevelTestResultItem& WithSlotResolutionResults(SlotResolutionResultsT&& value) { SetSlotResolutionResults(std::forward<SlotResolutionResultsT>(value)); return *this;}
    template<typename SlotResolutionResultsT = ConversationLevelSlotResolutionResultItem>
    ConversationLevelTestResultItem& AddSlotResolutionResults(SlotResolutionResultsT&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.emplace_back(std::forward<SlotResolutionResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    TestResultMatchStatus m_endToEndResult{TestResultMatchStatus::NOT_SET};
    bool m_endToEndResultHasBeenSet = false;

    TestResultMatchStatus m_speechTranscriptionResult{TestResultMatchStatus::NOT_SET};
    bool m_speechTranscriptionResultHasBeenSet = false;

    Aws::Vector<ConversationLevelIntentClassificationResultItem> m_intentClassificationResults;
    bool m_intentClassificationResultsHasBeenSet = false;

    Aws::Vector<ConversationLevelSlotResolutionResultItem> m_slotResolutionResults;
    bool m_slotResolutionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
