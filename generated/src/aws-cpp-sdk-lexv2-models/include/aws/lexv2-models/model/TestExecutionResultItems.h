/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/OverallTestResults.h>
#include <aws/lexv2-models/model/ConversationLevelTestResults.h>
#include <aws/lexv2-models/model/IntentClassificationTestResults.h>
#include <aws/lexv2-models/model/IntentLevelSlotResolutionTestResults.h>
#include <aws/lexv2-models/model/UtteranceLevelTestResults.h>
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
   * <p>Contains the results of the test execution, grouped by type of results. See
   * <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
   * result details"&gt;Test results details</a> for details about different types of
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestExecutionResultItems">AWS
   * API Reference</a></p>
   */
  class TestExecutionResultItems
  {
  public:
    AWS_LEXMODELSV2_API TestExecutionResultItems();
    AWS_LEXMODELSV2_API TestExecutionResultItems(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionResultItems& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Overall results for the test execution, including the breakdown of
     * conversations and single-input utterances.</p>
     */
    inline const OverallTestResults& GetOverallTestResults() const{ return m_overallTestResults; }
    inline bool OverallTestResultsHasBeenSet() const { return m_overallTestResultsHasBeenSet; }
    inline void SetOverallTestResults(const OverallTestResults& value) { m_overallTestResultsHasBeenSet = true; m_overallTestResults = value; }
    inline void SetOverallTestResults(OverallTestResults&& value) { m_overallTestResultsHasBeenSet = true; m_overallTestResults = std::move(value); }
    inline TestExecutionResultItems& WithOverallTestResults(const OverallTestResults& value) { SetOverallTestResults(value); return *this;}
    inline TestExecutionResultItems& WithOverallTestResults(OverallTestResults&& value) { SetOverallTestResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results related to conversations in the test set, including metrics about
     * success and failure of conversations and intent and slot failures.</p>
     */
    inline const ConversationLevelTestResults& GetConversationLevelTestResults() const{ return m_conversationLevelTestResults; }
    inline bool ConversationLevelTestResultsHasBeenSet() const { return m_conversationLevelTestResultsHasBeenSet; }
    inline void SetConversationLevelTestResults(const ConversationLevelTestResults& value) { m_conversationLevelTestResultsHasBeenSet = true; m_conversationLevelTestResults = value; }
    inline void SetConversationLevelTestResults(ConversationLevelTestResults&& value) { m_conversationLevelTestResultsHasBeenSet = true; m_conversationLevelTestResults = std::move(value); }
    inline TestExecutionResultItems& WithConversationLevelTestResults(const ConversationLevelTestResults& value) { SetConversationLevelTestResults(value); return *this;}
    inline TestExecutionResultItems& WithConversationLevelTestResults(ConversationLevelTestResults&& value) { SetConversationLevelTestResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intent recognition results aggregated by intent name. The aggregated results
     * contain success and failure rates of intent recognition, speech transcriptions,
     * and end-to-end conversations.</p>
     */
    inline const IntentClassificationTestResults& GetIntentClassificationTestResults() const{ return m_intentClassificationTestResults; }
    inline bool IntentClassificationTestResultsHasBeenSet() const { return m_intentClassificationTestResultsHasBeenSet; }
    inline void SetIntentClassificationTestResults(const IntentClassificationTestResults& value) { m_intentClassificationTestResultsHasBeenSet = true; m_intentClassificationTestResults = value; }
    inline void SetIntentClassificationTestResults(IntentClassificationTestResults&& value) { m_intentClassificationTestResultsHasBeenSet = true; m_intentClassificationTestResults = std::move(value); }
    inline TestExecutionResultItems& WithIntentClassificationTestResults(const IntentClassificationTestResults& value) { SetIntentClassificationTestResults(value); return *this;}
    inline TestExecutionResultItems& WithIntentClassificationTestResults(IntentClassificationTestResults&& value) { SetIntentClassificationTestResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Slot resolution results aggregated by intent and slot name. The aggregated
     * results contain success and failure rates of slot resolution, speech
     * transcriptions, and end-to-end conversations</p>
     */
    inline const IntentLevelSlotResolutionTestResults& GetIntentLevelSlotResolutionTestResults() const{ return m_intentLevelSlotResolutionTestResults; }
    inline bool IntentLevelSlotResolutionTestResultsHasBeenSet() const { return m_intentLevelSlotResolutionTestResultsHasBeenSet; }
    inline void SetIntentLevelSlotResolutionTestResults(const IntentLevelSlotResolutionTestResults& value) { m_intentLevelSlotResolutionTestResultsHasBeenSet = true; m_intentLevelSlotResolutionTestResults = value; }
    inline void SetIntentLevelSlotResolutionTestResults(IntentLevelSlotResolutionTestResults&& value) { m_intentLevelSlotResolutionTestResultsHasBeenSet = true; m_intentLevelSlotResolutionTestResults = std::move(value); }
    inline TestExecutionResultItems& WithIntentLevelSlotResolutionTestResults(const IntentLevelSlotResolutionTestResults& value) { SetIntentLevelSlotResolutionTestResults(value); return *this;}
    inline TestExecutionResultItems& WithIntentLevelSlotResolutionTestResults(IntentLevelSlotResolutionTestResults&& value) { SetIntentLevelSlotResolutionTestResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results related to utterances in the test set.</p>
     */
    inline const UtteranceLevelTestResults& GetUtteranceLevelTestResults() const{ return m_utteranceLevelTestResults; }
    inline bool UtteranceLevelTestResultsHasBeenSet() const { return m_utteranceLevelTestResultsHasBeenSet; }
    inline void SetUtteranceLevelTestResults(const UtteranceLevelTestResults& value) { m_utteranceLevelTestResultsHasBeenSet = true; m_utteranceLevelTestResults = value; }
    inline void SetUtteranceLevelTestResults(UtteranceLevelTestResults&& value) { m_utteranceLevelTestResultsHasBeenSet = true; m_utteranceLevelTestResults = std::move(value); }
    inline TestExecutionResultItems& WithUtteranceLevelTestResults(const UtteranceLevelTestResults& value) { SetUtteranceLevelTestResults(value); return *this;}
    inline TestExecutionResultItems& WithUtteranceLevelTestResults(UtteranceLevelTestResults&& value) { SetUtteranceLevelTestResults(std::move(value)); return *this;}
    ///@}
  private:

    OverallTestResults m_overallTestResults;
    bool m_overallTestResultsHasBeenSet = false;

    ConversationLevelTestResults m_conversationLevelTestResults;
    bool m_conversationLevelTestResultsHasBeenSet = false;

    IntentClassificationTestResults m_intentClassificationTestResults;
    bool m_intentClassificationTestResultsHasBeenSet = false;

    IntentLevelSlotResolutionTestResults m_intentLevelSlotResolutionTestResults;
    bool m_intentLevelSlotResolutionTestResultsHasBeenSet = false;

    UtteranceLevelTestResults m_utteranceLevelTestResults;
    bool m_utteranceLevelTestResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
