/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * Request of DescribeNotificationsForBudget
   */
  class AWS_BUDGETS_API DescribeNotificationsForBudgetRequest : public BudgetsRequest
  {
  public:
    DescribeNotificationsForBudgetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline DescribeNotificationsForBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeNotificationsForBudgetRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeNotificationsForBudgetRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeNotificationsForBudgetRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
