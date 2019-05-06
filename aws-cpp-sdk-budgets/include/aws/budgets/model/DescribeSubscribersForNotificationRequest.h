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
#include <aws/budgets/model/Notification.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of DescribeSubscribersForNotification </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotificationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API DescribeSubscribersForNotificationRequest : public BudgetsRequest
  {
  public:
    DescribeSubscribersForNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubscribersForNotification"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of the budget whose subscribers you want descriptions of.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The notification whose subscribers you want to list.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


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
    inline DescribeSubscribersForNotificationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeSubscribersForNotificationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that you include in your request to indicate the next
     * set of results that you want to retrieve.</p>
     */
    inline DescribeSubscribersForNotificationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    Notification m_notification;
    bool m_notificationHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
