/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/BudgetPerformanceHistory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Budgets
{
namespace Model
{
  class DescribeBudgetPerformanceHistoryResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetPerformanceHistoryResult() = default;
    AWS_BUDGETS_API DescribeBudgetPerformanceHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetPerformanceHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline const BudgetPerformanceHistory& GetBudgetPerformanceHistory() const { return m_budgetPerformanceHistory; }
    template<typename BudgetPerformanceHistoryT = BudgetPerformanceHistory>
    void SetBudgetPerformanceHistory(BudgetPerformanceHistoryT&& value) { m_budgetPerformanceHistoryHasBeenSet = true; m_budgetPerformanceHistory = std::forward<BudgetPerformanceHistoryT>(value); }
    template<typename BudgetPerformanceHistoryT = BudgetPerformanceHistory>
    DescribeBudgetPerformanceHistoryResult& WithBudgetPerformanceHistory(BudgetPerformanceHistoryT&& value) { SetBudgetPerformanceHistory(std::forward<BudgetPerformanceHistoryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBudgetPerformanceHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBudgetPerformanceHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BudgetPerformanceHistory m_budgetPerformanceHistory;
    bool m_budgetPerformanceHistoryHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
