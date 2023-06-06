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
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem();
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The conversation Id of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline const TestResultMatchStatus& GetEndToEndResult() const{ return m_endToEndResult; }

    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }

    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline void SetEndToEndResult(const TestResultMatchStatus& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }

    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline void SetEndToEndResult(TestResultMatchStatus&& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = std::move(value); }

    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithEndToEndResult(const TestResultMatchStatus& value) { SetEndToEndResult(value); return *this;}

    /**
     * <p>The end-to-end success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithEndToEndResult(TestResultMatchStatus&& value) { SetEndToEndResult(std::move(value)); return *this;}


    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline const TestResultMatchStatus& GetSpeechTranscriptionResult() const{ return m_speechTranscriptionResult; }

    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline bool SpeechTranscriptionResultHasBeenSet() const { return m_speechTranscriptionResultHasBeenSet; }

    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline void SetSpeechTranscriptionResult(const TestResultMatchStatus& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = value; }

    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline void SetSpeechTranscriptionResult(TestResultMatchStatus&& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = std::move(value); }

    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline ConversationLevelTestResultItem& WithSpeechTranscriptionResult(const TestResultMatchStatus& value) { SetSpeechTranscriptionResult(value); return *this;}

    /**
     * <p>The speech transcription success or failure of the test result evaluation
     * item.</p>
     */
    inline ConversationLevelTestResultItem& WithSpeechTranscriptionResult(TestResultMatchStatus&& value) { SetSpeechTranscriptionResult(std::move(value)); return *this;}


    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline const Aws::Vector<ConversationLevelIntentClassificationResultItem>& GetIntentClassificationResults() const{ return m_intentClassificationResults; }

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline bool IntentClassificationResultsHasBeenSet() const { return m_intentClassificationResultsHasBeenSet; }

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline void SetIntentClassificationResults(const Aws::Vector<ConversationLevelIntentClassificationResultItem>& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults = value; }

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline void SetIntentClassificationResults(Aws::Vector<ConversationLevelIntentClassificationResultItem>&& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults = std::move(value); }

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithIntentClassificationResults(const Aws::Vector<ConversationLevelIntentClassificationResultItem>& value) { SetIntentClassificationResults(value); return *this;}

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithIntentClassificationResults(Aws::Vector<ConversationLevelIntentClassificationResultItem>&& value) { SetIntentClassificationResults(std::move(value)); return *this;}

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& AddIntentClassificationResults(const ConversationLevelIntentClassificationResultItem& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults.push_back(value); return *this; }

    /**
     * <p>The intent classification of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& AddIntentClassificationResults(ConversationLevelIntentClassificationResultItem&& value) { m_intentClassificationResultsHasBeenSet = true; m_intentClassificationResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline const Aws::Vector<ConversationLevelSlotResolutionResultItem>& GetSlotResolutionResults() const{ return m_slotResolutionResults; }

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline bool SlotResolutionResultsHasBeenSet() const { return m_slotResolutionResultsHasBeenSet; }

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline void SetSlotResolutionResults(const Aws::Vector<ConversationLevelSlotResolutionResultItem>& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = value; }

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline void SetSlotResolutionResults(Aws::Vector<ConversationLevelSlotResolutionResultItem>&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = std::move(value); }

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithSlotResolutionResults(const Aws::Vector<ConversationLevelSlotResolutionResultItem>& value) { SetSlotResolutionResults(value); return *this;}

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& WithSlotResolutionResults(Aws::Vector<ConversationLevelSlotResolutionResultItem>&& value) { SetSlotResolutionResults(std::move(value)); return *this;}

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& AddSlotResolutionResults(const ConversationLevelSlotResolutionResultItem& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.push_back(value); return *this; }

    /**
     * <p>The slot success or failure of the test result evaluation item.</p>
     */
    inline ConversationLevelTestResultItem& AddSlotResolutionResults(ConversationLevelSlotResolutionResultItem&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    TestResultMatchStatus m_endToEndResult;
    bool m_endToEndResultHasBeenSet = false;

    TestResultMatchStatus m_speechTranscriptionResult;
    bool m_speechTranscriptionResultHasBeenSet = false;

    Aws::Vector<ConversationLevelIntentClassificationResultItem> m_intentClassificationResults;
    bool m_intentClassificationResultsHasBeenSet = false;

    Aws::Vector<ConversationLevelSlotResolutionResultItem> m_slotResolutionResults;
    bool m_slotResolutionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
