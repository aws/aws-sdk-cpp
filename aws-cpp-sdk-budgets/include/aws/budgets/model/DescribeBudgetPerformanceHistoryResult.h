/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BUDGETS_API DescribeBudgetPerformanceHistoryResult
  {
  public:
    DescribeBudgetPerformanceHistoryResult();
    DescribeBudgetPerformanceHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBudgetPerformanceHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline const BudgetPerformanceHistory& GetBudgetPerformanceHistory() const{ return m_budgetPerformanceHistory; }

    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline void SetBudgetPerformanceHistory(const BudgetPerformanceHistory& value) { m_budgetPerformanceHistory = value; }

    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline void SetBudgetPerformanceHistory(BudgetPerformanceHistory&& value) { m_budgetPerformanceHistory = std::move(value); }

    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline DescribeBudgetPerformanceHistoryResult& WithBudgetPerformanceHistory(const BudgetPerformanceHistory& value) { SetBudgetPerformanceHistory(value); return *this;}

    /**
     * <p>The history of how often the budget has gone into an <code>ALARM</code>
     * state.</p> <p>For <code>DAILY</code> budgets, the history saves the state of the
     * budget for the last 60 days. For <code>MONTHLY</code> budgets, the history saves
     * the state of the budget for the current month plus the last 12 months. For
     * <code>QUARTERLY</code> budgets, the history saves the state of the budget for
     * the last four quarters.</p>
     */
    inline DescribeBudgetPerformanceHistoryResult& WithBudgetPerformanceHistory(BudgetPerformanceHistory&& value) { SetBudgetPerformanceHistory(std::move(value)); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeBudgetPerformanceHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetPerformanceHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeBudgetPerformanceHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    BudgetPerformanceHistory m_budgetPerformanceHistory;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
