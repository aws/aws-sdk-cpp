/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/NotificationType.h>
#include <aws/budgets/model/ActionType.h>
#include <aws/budgets/model/ActionThreshold.h>
#include <aws/budgets/model/Definition.h>
#include <aws/budgets/model/ApprovalModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/Subscriber.h>
#include <aws/budgets/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   */
  class CreateBudgetActionRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API CreateBudgetActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBudgetAction"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateBudgetActionRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    CreateBudgetActionRequest& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline CreateBudgetActionRequest& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline CreateBudgetActionRequest& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    
    inline const ActionThreshold& GetActionThreshold() const { return m_actionThreshold; }
    inline bool ActionThresholdHasBeenSet() const { return m_actionThresholdHasBeenSet; }
    template<typename ActionThresholdT = ActionThreshold>
    void SetActionThreshold(ActionThresholdT&& value) { m_actionThresholdHasBeenSet = true; m_actionThreshold = std::forward<ActionThresholdT>(value); }
    template<typename ActionThresholdT = ActionThreshold>
    CreateBudgetActionRequest& WithActionThreshold(ActionThresholdT&& value) { SetActionThreshold(std::forward<ActionThresholdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Definition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Definition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Definition>
    CreateBudgetActionRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    CreateBudgetActionRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline ApprovalModel GetApprovalModel() const { return m_approvalModel; }
    inline bool ApprovalModelHasBeenSet() const { return m_approvalModelHasBeenSet; }
    inline void SetApprovalModel(ApprovalModel value) { m_approvalModelHasBeenSet = true; m_approvalModel = value; }
    inline CreateBudgetActionRequest& WithApprovalModel(ApprovalModel value) { SetApprovalModel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Subscriber>& GetSubscribers() const { return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    CreateBudgetActionRequest& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = Subscriber>
    CreateBudgetActionRequest& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of tags to associate with the specified budget action. Each
     * tag consists of a key and a value, and each key must be unique for the
     * resource.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateBudgetActionRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateBudgetActionRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    ActionThreshold m_actionThreshold;
    bool m_actionThresholdHasBeenSet = false;

    Definition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    ApprovalModel m_approvalModel{ApprovalModel::NOT_SET};
    bool m_approvalModelHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
