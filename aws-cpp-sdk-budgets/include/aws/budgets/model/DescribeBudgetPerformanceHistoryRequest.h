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
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/TimePeriod.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   */
  class AWS_BUDGETS_API DescribeBudgetPerformanceHistoryRequest : public BudgetsRequest
  {
  public:
    DescribeBudgetPerformanceHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBudgetPerformanceHistory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline DescribeBudgetPerformanceHistoryRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline DescribeBudgetPerformanceHistoryRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline const TimePeriod& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline void SetTimePeriod(const TimePeriod& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline void SetTimePeriod(TimePeriod&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline DescribeBudgetPerformanceHistoryRequest& WithTimePeriod(const TimePeriod& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>Retrieves how often the budget went into an <code>ALARM</code> state for the
     * specified time period.</p>
     */
    inline DescribeBudgetPerformanceHistoryRequest& WithTimePeriod(TimePeriod&& value) { SetTimePeriod(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeBudgetPerformanceHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeBudgetPerformanceHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeBudgetPerformanceHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    TimePeriod m_timePeriod;
    bool m_timePeriodHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
