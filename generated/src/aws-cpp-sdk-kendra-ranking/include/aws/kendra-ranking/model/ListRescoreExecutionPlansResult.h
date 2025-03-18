/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KendraRanking
{
namespace Model
{
  class ListRescoreExecutionPlansResult
  {
  public:
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult() = default;
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline const Aws::Vector<RescoreExecutionPlanSummary>& GetSummaryItems() const { return m_summaryItems; }
    template<typename SummaryItemsT = Aws::Vector<RescoreExecutionPlanSummary>>
    void SetSummaryItems(SummaryItemsT&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems = std::forward<SummaryItemsT>(value); }
    template<typename SummaryItemsT = Aws::Vector<RescoreExecutionPlanSummary>>
    ListRescoreExecutionPlansResult& WithSummaryItems(SummaryItemsT&& value) { SetSummaryItems(std::forward<SummaryItemsT>(value)); return *this;}
    template<typename SummaryItemsT = RescoreExecutionPlanSummary>
    ListRescoreExecutionPlansResult& AddSummaryItems(SummaryItemsT&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems.emplace_back(std::forward<SummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRescoreExecutionPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRescoreExecutionPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RescoreExecutionPlanSummary> m_summaryItems;
    bool m_summaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
