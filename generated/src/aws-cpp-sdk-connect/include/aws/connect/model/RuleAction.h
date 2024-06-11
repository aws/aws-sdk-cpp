/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ActionType.h>
#include <aws/connect/model/TaskActionDefinition.h>
#include <aws/connect/model/EventBridgeActionDefinition.h>
#include <aws/connect/model/AssignContactCategoryActionDefinition.h>
#include <aws/connect/model/SendNotificationActionDefinition.h>
#include <aws/connect/model/CreateCaseActionDefinition.h>
#include <aws/connect/model/UpdateCaseActionDefinition.h>
#include <aws/connect/model/EndAssociatedTasksActionDefinition.h>
#include <aws/connect/model/SubmitAutoEvaluationActionDefinition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the action to be performed when a rule is
   * triggered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RuleAction">AWS
   * API Reference</a></p>
   */
  class RuleAction
  {
  public:
    AWS_CONNECT_API RuleAction();
    AWS_CONNECT_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline RuleAction& WithActionType(const ActionType& value) { SetActionType(value); return *this;}
    inline RuleAction& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline const TaskActionDefinition& GetTaskAction() const{ return m_taskAction; }
    inline bool TaskActionHasBeenSet() const { return m_taskActionHasBeenSet; }
    inline void SetTaskAction(const TaskActionDefinition& value) { m_taskActionHasBeenSet = true; m_taskAction = value; }
    inline void SetTaskAction(TaskActionDefinition&& value) { m_taskActionHasBeenSet = true; m_taskAction = std::move(value); }
    inline RuleAction& WithTaskAction(const TaskActionDefinition& value) { SetTaskAction(value); return *this;}
    inline RuleAction& WithTaskAction(TaskActionDefinition&& value) { SetTaskAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline const EventBridgeActionDefinition& GetEventBridgeAction() const{ return m_eventBridgeAction; }
    inline bool EventBridgeActionHasBeenSet() const { return m_eventBridgeActionHasBeenSet; }
    inline void SetEventBridgeAction(const EventBridgeActionDefinition& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = value; }
    inline void SetEventBridgeAction(EventBridgeActionDefinition&& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = std::move(value); }
    inline RuleAction& WithEventBridgeAction(const EventBridgeActionDefinition& value) { SetEventBridgeAction(value); return *this;}
    inline RuleAction& WithEventBridgeAction(EventBridgeActionDefinition&& value) { SetEventBridgeAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline const AssignContactCategoryActionDefinition& GetAssignContactCategoryAction() const{ return m_assignContactCategoryAction; }
    inline bool AssignContactCategoryActionHasBeenSet() const { return m_assignContactCategoryActionHasBeenSet; }
    inline void SetAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = value; }
    inline void SetAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = std::move(value); }
    inline RuleAction& WithAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { SetAssignContactCategoryAction(value); return *this;}
    inline RuleAction& WithAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { SetAssignContactCategoryAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline const SendNotificationActionDefinition& GetSendNotificationAction() const{ return m_sendNotificationAction; }
    inline bool SendNotificationActionHasBeenSet() const { return m_sendNotificationActionHasBeenSet; }
    inline void SetSendNotificationAction(const SendNotificationActionDefinition& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = value; }
    inline void SetSendNotificationAction(SendNotificationActionDefinition&& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = std::move(value); }
    inline RuleAction& WithSendNotificationAction(const SendNotificationActionDefinition& value) { SetSendNotificationAction(value); return *this;}
    inline RuleAction& WithSendNotificationAction(SendNotificationActionDefinition&& value) { SetSendNotificationAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline const CreateCaseActionDefinition& GetCreateCaseAction() const{ return m_createCaseAction; }
    inline bool CreateCaseActionHasBeenSet() const { return m_createCaseActionHasBeenSet; }
    inline void SetCreateCaseAction(const CreateCaseActionDefinition& value) { m_createCaseActionHasBeenSet = true; m_createCaseAction = value; }
    inline void SetCreateCaseAction(CreateCaseActionDefinition&& value) { m_createCaseActionHasBeenSet = true; m_createCaseAction = std::move(value); }
    inline RuleAction& WithCreateCaseAction(const CreateCaseActionDefinition& value) { SetCreateCaseAction(value); return *this;}
    inline RuleAction& WithCreateCaseAction(CreateCaseActionDefinition&& value) { SetCreateCaseAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline const UpdateCaseActionDefinition& GetUpdateCaseAction() const{ return m_updateCaseAction; }
    inline bool UpdateCaseActionHasBeenSet() const { return m_updateCaseActionHasBeenSet; }
    inline void SetUpdateCaseAction(const UpdateCaseActionDefinition& value) { m_updateCaseActionHasBeenSet = true; m_updateCaseAction = value; }
    inline void SetUpdateCaseAction(UpdateCaseActionDefinition&& value) { m_updateCaseActionHasBeenSet = true; m_updateCaseAction = std::move(value); }
    inline RuleAction& WithUpdateCaseAction(const UpdateCaseActionDefinition& value) { SetUpdateCaseAction(value); return *this;}
    inline RuleAction& WithUpdateCaseAction(UpdateCaseActionDefinition&& value) { SetUpdateCaseAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline const EndAssociatedTasksActionDefinition& GetEndAssociatedTasksAction() const{ return m_endAssociatedTasksAction; }
    inline bool EndAssociatedTasksActionHasBeenSet() const { return m_endAssociatedTasksActionHasBeenSet; }
    inline void SetEndAssociatedTasksAction(const EndAssociatedTasksActionDefinition& value) { m_endAssociatedTasksActionHasBeenSet = true; m_endAssociatedTasksAction = value; }
    inline void SetEndAssociatedTasksAction(EndAssociatedTasksActionDefinition&& value) { m_endAssociatedTasksActionHasBeenSet = true; m_endAssociatedTasksAction = std::move(value); }
    inline RuleAction& WithEndAssociatedTasksAction(const EndAssociatedTasksActionDefinition& value) { SetEndAssociatedTasksAction(value); return *this;}
    inline RuleAction& WithEndAssociatedTasksAction(EndAssociatedTasksActionDefinition&& value) { SetEndAssociatedTasksAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the submit automated evaluation action.</p>
     */
    inline const SubmitAutoEvaluationActionDefinition& GetSubmitAutoEvaluationAction() const{ return m_submitAutoEvaluationAction; }
    inline bool SubmitAutoEvaluationActionHasBeenSet() const { return m_submitAutoEvaluationActionHasBeenSet; }
    inline void SetSubmitAutoEvaluationAction(const SubmitAutoEvaluationActionDefinition& value) { m_submitAutoEvaluationActionHasBeenSet = true; m_submitAutoEvaluationAction = value; }
    inline void SetSubmitAutoEvaluationAction(SubmitAutoEvaluationActionDefinition&& value) { m_submitAutoEvaluationActionHasBeenSet = true; m_submitAutoEvaluationAction = std::move(value); }
    inline RuleAction& WithSubmitAutoEvaluationAction(const SubmitAutoEvaluationActionDefinition& value) { SetSubmitAutoEvaluationAction(value); return *this;}
    inline RuleAction& WithSubmitAutoEvaluationAction(SubmitAutoEvaluationActionDefinition&& value) { SetSubmitAutoEvaluationAction(std::move(value)); return *this;}
    ///@}
  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    TaskActionDefinition m_taskAction;
    bool m_taskActionHasBeenSet = false;

    EventBridgeActionDefinition m_eventBridgeAction;
    bool m_eventBridgeActionHasBeenSet = false;

    AssignContactCategoryActionDefinition m_assignContactCategoryAction;
    bool m_assignContactCategoryActionHasBeenSet = false;

    SendNotificationActionDefinition m_sendNotificationAction;
    bool m_sendNotificationActionHasBeenSet = false;

    CreateCaseActionDefinition m_createCaseAction;
    bool m_createCaseActionHasBeenSet = false;

    UpdateCaseActionDefinition m_updateCaseAction;
    bool m_updateCaseActionHasBeenSet = false;

    EndAssociatedTasksActionDefinition m_endAssociatedTasksAction;
    bool m_endAssociatedTasksActionHasBeenSet = false;

    SubmitAutoEvaluationActionDefinition m_submitAutoEvaluationAction;
    bool m_submitAutoEvaluationActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
