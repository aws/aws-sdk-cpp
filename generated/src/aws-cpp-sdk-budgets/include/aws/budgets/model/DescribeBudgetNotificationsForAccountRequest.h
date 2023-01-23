/**
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
   */
  class DescribeBudgetNotificationsForAccountRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBudgetNotificationsForAccount"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline DescribeBudgetNotificationsForAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline DescribeBudgetNotificationsForAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline DescribeBudgetNotificationsForAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> An integer that shows how many budget name entries a paginated response
     * contains. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> An integer that shows how many budget name entries a paginated response
     * contains. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> An integer that shows how many budget name entries a paginated response
     * contains. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> An integer that shows how many budget name entries a paginated response
     * contains. </p>
     */
    inline DescribeBudgetNotificationsForAccountRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeBudgetNotificationsForAccountRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetNotificationsForAccountRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeBudgetNotificationsForAccountRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
