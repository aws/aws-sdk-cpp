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
#include <aws/connect/model/AssignSlaActionDefinition.h>
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
    AWS_CONNECT_API RuleAction() = default;
    AWS_CONNECT_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline RuleAction& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline const TaskActionDefinition& GetTaskAction() const { return m_taskAction; }
    inline bool TaskActionHasBeenSet() const { return m_taskActionHasBeenSet; }
    template<typename TaskActionT = TaskActionDefinition>
    void SetTaskAction(TaskActionT&& value) { m_taskActionHasBeenSet = true; m_taskAction = std::forward<TaskActionT>(value); }
    template<typename TaskActionT = TaskActionDefinition>
    RuleAction& WithTaskAction(TaskActionT&& value) { SetTaskAction(std::forward<TaskActionT>(value)); return *this;}
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
    inline const EventBridgeActionDefinition& GetEventBridgeAction() const { return m_eventBridgeAction; }
    inline bool EventBridgeActionHasBeenSet() const { return m_eventBridgeActionHasBeenSet; }
    template<typename EventBridgeActionT = EventBridgeActionDefinition>
    void SetEventBridgeAction(EventBridgeActionT&& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = std::forward<EventBridgeActionT>(value); }
    template<typename EventBridgeActionT = EventBridgeActionDefinition>
    RuleAction& WithEventBridgeAction(EventBridgeActionT&& value) { SetEventBridgeAction(std::forward<EventBridgeActionT>(value)); return *this;}
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
    inline const AssignContactCategoryActionDefinition& GetAssignContactCategoryAction() const { return m_assignContactCategoryAction; }
    inline bool AssignContactCategoryActionHasBeenSet() const { return m_assignContactCategoryActionHasBeenSet; }
    template<typename AssignContactCategoryActionT = AssignContactCategoryActionDefinition>
    void SetAssignContactCategoryAction(AssignContactCategoryActionT&& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = std::forward<AssignContactCategoryActionT>(value); }
    template<typename AssignContactCategoryActionT = AssignContactCategoryActionDefinition>
    RuleAction& WithAssignContactCategoryAction(AssignContactCategoryActionT&& value) { SetAssignContactCategoryAction(std::forward<AssignContactCategoryActionT>(value)); return *this;}
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
    inline const SendNotificationActionDefinition& GetSendNotificationAction() const { return m_sendNotificationAction; }
    inline bool SendNotificationActionHasBeenSet() const { return m_sendNotificationActionHasBeenSet; }
    template<typename SendNotificationActionT = SendNotificationActionDefinition>
    void SetSendNotificationAction(SendNotificationActionT&& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = std::forward<SendNotificationActionT>(value); }
    template<typename SendNotificationActionT = SendNotificationActionDefinition>
    RuleAction& WithSendNotificationAction(SendNotificationActionT&& value) { SetSendNotificationAction(std::forward<SendNotificationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline const CreateCaseActionDefinition& GetCreateCaseAction() const { return m_createCaseAction; }
    inline bool CreateCaseActionHasBeenSet() const { return m_createCaseActionHasBeenSet; }
    template<typename CreateCaseActionT = CreateCaseActionDefinition>
    void SetCreateCaseAction(CreateCaseActionT&& value) { m_createCaseActionHasBeenSet = true; m_createCaseAction = std::forward<CreateCaseActionT>(value); }
    template<typename CreateCaseActionT = CreateCaseActionDefinition>
    RuleAction& WithCreateCaseAction(CreateCaseActionT&& value) { SetCreateCaseAction(std::forward<CreateCaseActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline const UpdateCaseActionDefinition& GetUpdateCaseAction() const { return m_updateCaseAction; }
    inline bool UpdateCaseActionHasBeenSet() const { return m_updateCaseActionHasBeenSet; }
    template<typename UpdateCaseActionT = UpdateCaseActionDefinition>
    void SetUpdateCaseAction(UpdateCaseActionT&& value) { m_updateCaseActionHasBeenSet = true; m_updateCaseAction = std::forward<UpdateCaseActionT>(value); }
    template<typename UpdateCaseActionT = UpdateCaseActionDefinition>
    RuleAction& WithUpdateCaseAction(UpdateCaseActionT&& value) { SetUpdateCaseAction(std::forward<UpdateCaseActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the assign SLA action.</p>
     */
    inline const AssignSlaActionDefinition& GetAssignSlaAction() const { return m_assignSlaAction; }
    inline bool AssignSlaActionHasBeenSet() const { return m_assignSlaActionHasBeenSet; }
    template<typename AssignSlaActionT = AssignSlaActionDefinition>
    void SetAssignSlaAction(AssignSlaActionT&& value) { m_assignSlaActionHasBeenSet = true; m_assignSlaAction = std::forward<AssignSlaActionT>(value); }
    template<typename AssignSlaActionT = AssignSlaActionDefinition>
    RuleAction& WithAssignSlaAction(AssignSlaActionT&& value) { SetAssignSlaAction(std::forward<AssignSlaActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline const EndAssociatedTasksActionDefinition& GetEndAssociatedTasksAction() const { return m_endAssociatedTasksAction; }
    inline bool EndAssociatedTasksActionHasBeenSet() const { return m_endAssociatedTasksActionHasBeenSet; }
    template<typename EndAssociatedTasksActionT = EndAssociatedTasksActionDefinition>
    void SetEndAssociatedTasksAction(EndAssociatedTasksActionT&& value) { m_endAssociatedTasksActionHasBeenSet = true; m_endAssociatedTasksAction = std::forward<EndAssociatedTasksActionT>(value); }
    template<typename EndAssociatedTasksActionT = EndAssociatedTasksActionDefinition>
    RuleAction& WithEndAssociatedTasksAction(EndAssociatedTasksActionT&& value) { SetEndAssociatedTasksAction(std::forward<EndAssociatedTasksActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the submit automated evaluation action.</p>
     */
    inline const SubmitAutoEvaluationActionDefinition& GetSubmitAutoEvaluationAction() const { return m_submitAutoEvaluationAction; }
    inline bool SubmitAutoEvaluationActionHasBeenSet() const { return m_submitAutoEvaluationActionHasBeenSet; }
    template<typename SubmitAutoEvaluationActionT = SubmitAutoEvaluationActionDefinition>
    void SetSubmitAutoEvaluationAction(SubmitAutoEvaluationActionT&& value) { m_submitAutoEvaluationActionHasBeenSet = true; m_submitAutoEvaluationAction = std::forward<SubmitAutoEvaluationActionT>(value); }
    template<typename SubmitAutoEvaluationActionT = SubmitAutoEvaluationActionDefinition>
    RuleAction& WithSubmitAutoEvaluationAction(SubmitAutoEvaluationActionT&& value) { SetSubmitAutoEvaluationAction(std::forward<SubmitAutoEvaluationActionT>(value)); return *this;}
    ///@}
  private:

    ActionType m_actionType{ActionType::NOT_SET};
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

    AssignSlaActionDefinition m_assignSlaAction;
    bool m_assignSlaActionHasBeenSet = false;

    EndAssociatedTasksActionDefinition m_endAssociatedTasksAction;
    bool m_endAssociatedTasksActionHasBeenSet = false;

    SubmitAutoEvaluationActionDefinition m_submitAutoEvaluationAction;
    bool m_submitAutoEvaluationActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
