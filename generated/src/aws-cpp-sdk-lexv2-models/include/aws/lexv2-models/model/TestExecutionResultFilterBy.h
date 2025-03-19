/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TestResultTypeFilter.h>
#include <aws/lexv2-models/model/ConversationLevelTestResultsFilterBy.h>
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
   * <p>Contains information about the method by which to filter the results of the
   * test execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestExecutionResultFilterBy">AWS
   * API Reference</a></p>
   */
  class TestExecutionResultFilterBy
  {
  public:
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy() = default;
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline TestResultTypeFilter GetResultTypeFilter() const { return m_resultTypeFilter; }
    inline bool ResultTypeFilterHasBeenSet() const { return m_resultTypeFilterHasBeenSet; }
    inline void SetResultTypeFilter(TestResultTypeFilter value) { m_resultTypeFilterHasBeenSet = true; m_resultTypeFilter = value; }
    inline TestExecutionResultFilterBy& WithResultTypeFilter(TestResultTypeFilter value) { SetResultTypeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline const ConversationLevelTestResultsFilterBy& GetConversationLevelTestResultsFilterBy() const { return m_conversationLevelTestResultsFilterBy; }
    inline bool ConversationLevelTestResultsFilterByHasBeenSet() const { return m_conversationLevelTestResultsFilterByHasBeenSet; }
    template<typename ConversationLevelTestResultsFilterByT = ConversationLevelTestResultsFilterBy>
    void SetConversationLevelTestResultsFilterBy(ConversationLevelTestResultsFilterByT&& value) { m_conversationLevelTestResultsFilterByHasBeenSet = true; m_conversationLevelTestResultsFilterBy = std::forward<ConversationLevelTestResultsFilterByT>(value); }
    template<typename ConversationLevelTestResultsFilterByT = ConversationLevelTestResultsFilterBy>
    TestExecutionResultFilterBy& WithConversationLevelTestResultsFilterBy(ConversationLevelTestResultsFilterByT&& value) { SetConversationLevelTestResultsFilterBy(std::forward<ConversationLevelTestResultsFilterByT>(value)); return *this;}
    ///@}
  private:

    TestResultTypeFilter m_resultTypeFilter{TestResultTypeFilter::NOT_SET};
    bool m_resultTypeFilterHasBeenSet = false;

    ConversationLevelTestResultsFilterBy m_conversationLevelTestResultsFilterBy;
    bool m_conversationLevelTestResultsFilterByHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
