/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Budget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/NotificationWithSubscribers.h>
#include <aws/budgets/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of CreateBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudgetRequest">AWS
   * API Reference</a></p>
   */
  class CreateBudgetRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API CreateBudgetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBudget"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateBudgetRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget object that you want to create.</p>
     */
    inline const Budget& GetBudget() const { return m_budget; }
    inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }
    template<typename BudgetT = Budget>
    void SetBudget(BudgetT&& value) { m_budgetHasBeenSet = true; m_budget = std::forward<BudgetT>(value); }
    template<typename BudgetT = Budget>
    CreateBudgetRequest& WithBudget(BudgetT&& value) { SetBudget(std::forward<BudgetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, Amazon Web Services creates the notifications
     * and subscribers for you.</p>
     */
    inline const Aws::Vector<NotificationWithSubscribers>& GetNotificationsWithSubscribers() const { return m_notificationsWithSubscribers; }
    inline bool NotificationsWithSubscribersHasBeenSet() const { return m_notificationsWithSubscribersHasBeenSet; }
    template<typename NotificationsWithSubscribersT = Aws::Vector<NotificationWithSubscribers>>
    void SetNotificationsWithSubscribers(NotificationsWithSubscribersT&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers = std::forward<NotificationsWithSubscribersT>(value); }
    template<typename NotificationsWithSubscribersT = Aws::Vector<NotificationWithSubscribers>>
    CreateBudgetRequest& WithNotificationsWithSubscribers(NotificationsWithSubscribersT&& value) { SetNotificationsWithSubscribers(std::forward<NotificationsWithSubscribersT>(value)); return *this;}
    template<typename NotificationsWithSubscribersT = NotificationWithSubscribers>
    CreateBudgetRequest& AddNotificationsWithSubscribers(NotificationsWithSubscribersT&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers.emplace_back(std::forward<NotificationsWithSubscribersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of tags to associate with the specified budget. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateBudgetRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateBudgetRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Budget m_budget;
    bool m_budgetHasBeenSet = false;

    Aws::Vector<NotificationWithSubscribers> m_notificationsWithSubscribers;
    bool m_notificationsWithSubscribersHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
