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
    AWS_LEXMODELSV2_API TestExecutionResultItems() = default;
    AWS_LEXMODELSV2_API TestExecutionResultItems(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionResultItems& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Overall results for the test execution, including the breakdown of
     * conversations and single-input utterances.</p>
     */
    inline const OverallTestResults& GetOverallTestResults() const { return m_overallTestResults; }
    inline bool OverallTestResultsHasBeenSet() const { return m_overallTestResultsHasBeenSet; }
    template<typename OverallTestResultsT = OverallTestResults>
    void SetOverallTestResults(OverallTestResultsT&& value) { m_overallTestResultsHasBeenSet = true; m_overallTestResults = std::forward<OverallTestResultsT>(value); }
    template<typename OverallTestResultsT = OverallTestResults>
    TestExecutionResultItems& WithOverallTestResults(OverallTestResultsT&& value) { SetOverallTestResults(std::forward<OverallTestResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results related to conversations in the test set, including metrics about
     * success and failure of conversations and intent and slot failures.</p>
     */
    inline const ConversationLevelTestResults& GetConversationLevelTestResults() const { return m_conversationLevelTestResults; }
    inline bool ConversationLevelTestResultsHasBeenSet() const { return m_conversationLevelTestResultsHasBeenSet; }
    template<typename ConversationLevelTestResultsT = ConversationLevelTestResults>
    void SetConversationLevelTestResults(ConversationLevelTestResultsT&& value) { m_conversationLevelTestResultsHasBeenSet = true; m_conversationLevelTestResults = std::forward<ConversationLevelTestResultsT>(value); }
    template<typename ConversationLevelTestResultsT = ConversationLevelTestResults>
    TestExecutionResultItems& WithConversationLevelTestResults(ConversationLevelTestResultsT&& value) { SetConversationLevelTestResults(std::forward<ConversationLevelTestResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Intent recognition results aggregated by intent name. The aggregated results
     * contain success and failure rates of intent recognition, speech transcriptions,
     * and end-to-end conversations.</p>
     */
    inline const IntentClassificationTestResults& GetIntentClassificationTestResults() const { return m_intentClassificationTestResults; }
    inline bool IntentClassificationTestResultsHasBeenSet() const { return m_intentClassificationTestResultsHasBeenSet; }
    template<typename IntentClassificationTestResultsT = IntentClassificationTestResults>
    void SetIntentClassificationTestResults(IntentClassificationTestResultsT&& value) { m_intentClassificationTestResultsHasBeenSet = true; m_intentClassificationTestResults = std::forward<IntentClassificationTestResultsT>(value); }
    template<typename IntentClassificationTestResultsT = IntentClassificationTestResults>
    TestExecutionResultItems& WithIntentClassificationTestResults(IntentClassificationTestResultsT&& value) { SetIntentClassificationTestResults(std::forward<IntentClassificationTestResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Slot resolution results aggregated by intent and slot name. The aggregated
     * results contain success and failure rates of slot resolution, speech
     * transcriptions, and end-to-end conversations</p>
     */
    inline const IntentLevelSlotResolutionTestResults& GetIntentLevelSlotResolutionTestResults() const { return m_intentLevelSlotResolutionTestResults; }
    inline bool IntentLevelSlotResolutionTestResultsHasBeenSet() const { return m_intentLevelSlotResolutionTestResultsHasBeenSet; }
    template<typename IntentLevelSlotResolutionTestResultsT = IntentLevelSlotResolutionTestResults>
    void SetIntentLevelSlotResolutionTestResults(IntentLevelSlotResolutionTestResultsT&& value) { m_intentLevelSlotResolutionTestResultsHasBeenSet = true; m_intentLevelSlotResolutionTestResults = std::forward<IntentLevelSlotResolutionTestResultsT>(value); }
    template<typename IntentLevelSlotResolutionTestResultsT = IntentLevelSlotResolutionTestResults>
    TestExecutionResultItems& WithIntentLevelSlotResolutionTestResults(IntentLevelSlotResolutionTestResultsT&& value) { SetIntentLevelSlotResolutionTestResults(std::forward<IntentLevelSlotResolutionTestResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results related to utterances in the test set.</p>
     */
    inline const UtteranceLevelTestResults& GetUtteranceLevelTestResults() const { return m_utteranceLevelTestResults; }
    inline bool UtteranceLevelTestResultsHasBeenSet() const { return m_utteranceLevelTestResultsHasBeenSet; }
    template<typename UtteranceLevelTestResultsT = UtteranceLevelTestResults>
    void SetUtteranceLevelTestResults(UtteranceLevelTestResultsT&& value) { m_utteranceLevelTestResultsHasBeenSet = true; m_utteranceLevelTestResults = std::forward<UtteranceLevelTestResultsT>(value); }
    template<typename UtteranceLevelTestResultsT = UtteranceLevelTestResults>
    TestExecutionResultItems& WithUtteranceLevelTestResults(UtteranceLevelTestResultsT&& value) { SetUtteranceLevelTestResults(std::forward<UtteranceLevelTestResultsT>(value)); return *this;}
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
