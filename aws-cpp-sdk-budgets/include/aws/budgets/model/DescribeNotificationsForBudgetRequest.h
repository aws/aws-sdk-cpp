﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of DescribeNotificationsForBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudgetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API DescribeNotificationsForBudgetRequest : public BudgetsRequest
  {
  public:
    DescribeNotificationsForBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNotificationsForBudget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of the budget whose notifications you want descriptions of.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>An optional integer that represents how many entries a paginated response
     * contains. The maximum is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional integer that represents how many entries a paginated response
     * contains. The maximum is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional integer that represents how many entries a paginated response
     * contains. The maximum is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional integer that represents how many entries a paginated response
     * contains. The maximum is 100.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline DescribeNotificationsForBudgetRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
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
