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
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy();
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionResultFilterBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline const TestResultTypeFilter& GetResultTypeFilter() const{ return m_resultTypeFilter; }

    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline bool ResultTypeFilterHasBeenSet() const { return m_resultTypeFilterHasBeenSet; }

    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline void SetResultTypeFilter(const TestResultTypeFilter& value) { m_resultTypeFilterHasBeenSet = true; m_resultTypeFilter = value; }

    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline void SetResultTypeFilter(TestResultTypeFilter&& value) { m_resultTypeFilterHasBeenSet = true; m_resultTypeFilter = std::move(value); }

    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline TestExecutionResultFilterBy& WithResultTypeFilter(const TestResultTypeFilter& value) { SetResultTypeFilter(value); return *this;}

    /**
     * <p>Specifies which results to filter. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/test-results-details-test-set.html">Test
     * result details"&gt;Test results details</a> for details about different types of
     * results.</p>
     */
    inline TestExecutionResultFilterBy& WithResultTypeFilter(TestResultTypeFilter&& value) { SetResultTypeFilter(std::move(value)); return *this;}


    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline const ConversationLevelTestResultsFilterBy& GetConversationLevelTestResultsFilterBy() const{ return m_conversationLevelTestResultsFilterBy; }

    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline bool ConversationLevelTestResultsFilterByHasBeenSet() const { return m_conversationLevelTestResultsFilterByHasBeenSet; }

    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline void SetConversationLevelTestResultsFilterBy(const ConversationLevelTestResultsFilterBy& value) { m_conversationLevelTestResultsFilterByHasBeenSet = true; m_conversationLevelTestResultsFilterBy = value; }

    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline void SetConversationLevelTestResultsFilterBy(ConversationLevelTestResultsFilterBy&& value) { m_conversationLevelTestResultsFilterByHasBeenSet = true; m_conversationLevelTestResultsFilterBy = std::move(value); }

    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline TestExecutionResultFilterBy& WithConversationLevelTestResultsFilterBy(const ConversationLevelTestResultsFilterBy& value) { SetConversationLevelTestResultsFilterBy(value); return *this;}

    /**
     * <p>Contains information about the method for filtering Conversation level test
     * results.</p>
     */
    inline TestExecutionResultFilterBy& WithConversationLevelTestResultsFilterBy(ConversationLevelTestResultsFilterBy&& value) { SetConversationLevelTestResultsFilterBy(std::move(value)); return *this;}

  private:

    TestResultTypeFilter m_resultTypeFilter;
    bool m_resultTypeFilterHasBeenSet = false;

    ConversationLevelTestResultsFilterBy m_conversationLevelTestResultsFilterBy;
    bool m_conversationLevelTestResultsFilterByHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
