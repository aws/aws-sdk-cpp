/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/NotificationType.h>
#include <aws/budgets/model/ActionType.h>
#include <aws/budgets/model/ActionThreshold.h>
#include <aws/budgets/model/Definition.h>
#include <aws/budgets/model/ApprovalModel.h>
#include <aws/budgets/model/ActionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/Subscriber.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p>A budget action resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_BUDGETS_API Action();
    AWS_BUDGETS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline Action& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline Action& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline Action& WithActionId(const char* value) { SetActionId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline Action& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline Action& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline Action& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }

    
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }

    
    inline Action& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    
    inline Action& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}


    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline Action& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action. This defines the type of tasks that can be carried out by
     * this action. This field also determines the format for definition. </p>
     */
    inline Action& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline const ActionThreshold& GetActionThreshold() const{ return m_actionThreshold; }

    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline bool ActionThresholdHasBeenSet() const { return m_actionThresholdHasBeenSet; }

    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline void SetActionThreshold(const ActionThreshold& value) { m_actionThresholdHasBeenSet = true; m_actionThreshold = value; }

    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline void SetActionThreshold(ActionThreshold&& value) { m_actionThresholdHasBeenSet = true; m_actionThreshold = std::move(value); }

    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline Action& WithActionThreshold(const ActionThreshold& value) { SetActionThreshold(value); return *this;}

    /**
     * <p>The trigger threshold of the action. </p>
     */
    inline Action& WithActionThreshold(ActionThreshold&& value) { SetActionThreshold(std::move(value)); return *this;}


    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline const Definition& GetDefinition() const{ return m_definition; }

    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline void SetDefinition(const Definition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline void SetDefinition(Definition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline Action& WithDefinition(const Definition& value) { SetDefinition(value); return *this;}

    /**
     * <p>Where you specify all of the type-specific parameters. </p>
     */
    inline Action& WithDefinition(Definition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline Action& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline Action& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role passed for action execution and reversion. Roles and actions must be
     * in the same account. </p>
     */
    inline Action& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline const ApprovalModel& GetApprovalModel() const{ return m_approvalModel; }

    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline bool ApprovalModelHasBeenSet() const { return m_approvalModelHasBeenSet; }

    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline void SetApprovalModel(const ApprovalModel& value) { m_approvalModelHasBeenSet = true; m_approvalModel = value; }

    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline void SetApprovalModel(ApprovalModel&& value) { m_approvalModelHasBeenSet = true; m_approvalModel = std::move(value); }

    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline Action& WithApprovalModel(const ApprovalModel& value) { SetApprovalModel(value); return *this;}

    /**
     * <p>This specifies if the action needs manual or automatic approval. </p>
     */
    inline Action& WithApprovalModel(ApprovalModel&& value) { SetApprovalModel(std::move(value)); return *this;}


    /**
     * <p>The status of the action. </p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action. </p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action. </p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action. </p>
     */
    inline Action& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action. </p>
     */
    inline Action& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    
    inline Action& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    
    inline Action& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    
    inline Action& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    
    inline Action& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

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

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
