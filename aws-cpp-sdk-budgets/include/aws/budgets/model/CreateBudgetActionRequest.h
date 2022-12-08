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
    AWS_BUDGETS_API CreateBudgetActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBudgetAction"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline CreateBudgetActionRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline CreateBudgetActionRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline CreateBudgetActionRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline CreateBudgetActionRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline CreateBudgetActionRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline CreateBudgetActionRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }

    
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }

    
    inline CreateBudgetActionRequest& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    
    inline CreateBudgetActionRequest& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}


    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline CreateBudgetActionRequest& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p> The type of action. This defines the type of tasks that can be carried out
     * by this action. This field also determines the format for definition. </p>
     */
    inline CreateBudgetActionRequest& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    
    inline const ActionThreshold& GetActionThreshold() const{ return m_actionThreshold; }

    
    inline bool ActionThresholdHasBeenSet() const { return m_actionThresholdHasBeenSet; }

    
    inline void SetActionThreshold(const ActionThreshold& value) { m_actionThresholdHasBeenSet = true; m_actionThreshold = value; }

    
    inline void SetActionThreshold(ActionThreshold&& value) { m_actionThresholdHasBeenSet = true; m_actionThreshold = std::move(value); }

    
    inline CreateBudgetActionRequest& WithActionThreshold(const ActionThreshold& value) { SetActionThreshold(value); return *this;}

    
    inline CreateBudgetActionRequest& WithActionThreshold(ActionThreshold&& value) { SetActionThreshold(std::move(value)); return *this;}


    
    inline const Definition& GetDefinition() const{ return m_definition; }

    
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    
    inline void SetDefinition(const Definition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    
    inline void SetDefinition(Definition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    
    inline CreateBudgetActionRequest& WithDefinition(const Definition& value) { SetDefinition(value); return *this;}

    
    inline CreateBudgetActionRequest& WithDefinition(Definition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline CreateBudgetActionRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline CreateBudgetActionRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p> The role passed for action execution and reversion. Roles and actions must
     * be in the same account. </p>
     */
    inline CreateBudgetActionRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline const ApprovalModel& GetApprovalModel() const{ return m_approvalModel; }

    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline bool ApprovalModelHasBeenSet() const { return m_approvalModelHasBeenSet; }

    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline void SetApprovalModel(const ApprovalModel& value) { m_approvalModelHasBeenSet = true; m_approvalModel = value; }

    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline void SetApprovalModel(ApprovalModel&& value) { m_approvalModelHasBeenSet = true; m_approvalModel = std::move(value); }

    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline CreateBudgetActionRequest& WithApprovalModel(const ApprovalModel& value) { SetApprovalModel(value); return *this;}

    /**
     * <p> This specifies if the action needs manual or automatic approval. </p>
     */
    inline CreateBudgetActionRequest& WithApprovalModel(ApprovalModel&& value) { SetApprovalModel(std::move(value)); return *this;}


    
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    
    inline CreateBudgetActionRequest& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    
    inline CreateBudgetActionRequest& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    
    inline CreateBudgetActionRequest& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    
    inline CreateBudgetActionRequest& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet = false;

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    ActionThreshold m_actionThreshold;
    bool m_actionThresholdHasBeenSet = false;

    Definition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    ApprovalModel m_approvalModel;
    bool m_approvalModelHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
