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


    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline RuleAction& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action that creates a rule.</p>
     */
    inline RuleAction& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline const TaskActionDefinition& GetTaskAction() const{ return m_taskAction; }

    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline bool TaskActionHasBeenSet() const { return m_taskActionHasBeenSet; }

    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline void SetTaskAction(const TaskActionDefinition& value) { m_taskActionHasBeenSet = true; m_taskAction = value; }

    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline void SetTaskAction(TaskActionDefinition&& value) { m_taskActionHasBeenSet = true; m_taskAction = std::move(value); }

    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline RuleAction& WithTaskAction(const TaskActionDefinition& value) { SetTaskAction(value); return *this;}

    /**
     * <p>Information about the task action. This field is required if
     * <code>TriggerEventSource</code> is one of the following values:
     * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
     * <code>OnSalesforceCaseCreate</code> </p>
     */
    inline RuleAction& WithTaskAction(TaskActionDefinition&& value) { SetTaskAction(std::move(value)); return *this;}


    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline const EventBridgeActionDefinition& GetEventBridgeAction() const{ return m_eventBridgeAction; }

    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline bool EventBridgeActionHasBeenSet() const { return m_eventBridgeActionHasBeenSet; }

    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline void SetEventBridgeAction(const EventBridgeActionDefinition& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = value; }

    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline void SetEventBridgeAction(EventBridgeActionDefinition&& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = std::move(value); }

    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline RuleAction& WithEventBridgeAction(const EventBridgeActionDefinition& value) { SetEventBridgeAction(value); return *this;}

    /**
     * <p>Information about the EventBridge action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline RuleAction& WithEventBridgeAction(EventBridgeActionDefinition&& value) { SetEventBridgeAction(std::move(value)); return *this;}


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

    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline bool AssignContactCategoryActionHasBeenSet() const { return m_assignContactCategoryActionHasBeenSet; }

    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline void SetAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = value; }

    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline void SetAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = std::move(value); }

    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline RuleAction& WithAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { SetAssignContactCategoryAction(value); return *this;}

    /**
     * <p>Information about the contact category action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> | <code>OnZendeskTicketCreate</code> |
     * <code>OnZendeskTicketStatusUpdate</code> | <code>OnSalesforceCaseCreate</code>
     * </p>
     */
    inline RuleAction& WithAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { SetAssignContactCategoryAction(std::move(value)); return *this;}


    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline const SendNotificationActionDefinition& GetSendNotificationAction() const{ return m_sendNotificationAction; }

    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline bool SendNotificationActionHasBeenSet() const { return m_sendNotificationActionHasBeenSet; }

    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline void SetSendNotificationAction(const SendNotificationActionDefinition& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = value; }

    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline void SetSendNotificationAction(SendNotificationActionDefinition&& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = std::move(value); }

    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline RuleAction& WithSendNotificationAction(const SendNotificationActionDefinition& value) { SetSendNotificationAction(value); return *this;}

    /**
     * <p>Information about the send notification action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnRealTimeCallAnalysisAvailable</code> |
     * <code>OnRealTimeChatAnalysisAvailable</code> |
     * <code>OnPostChatAnalysisAvailable</code> |
     * <code>OnContactEvaluationSubmit</code> | <code>OnMetricDataUpdate</code> </p>
     */
    inline RuleAction& WithSendNotificationAction(SendNotificationActionDefinition&& value) { SetSendNotificationAction(std::move(value)); return *this;}


    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline const CreateCaseActionDefinition& GetCreateCaseAction() const{ return m_createCaseAction; }

    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline bool CreateCaseActionHasBeenSet() const { return m_createCaseActionHasBeenSet; }

    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline void SetCreateCaseAction(const CreateCaseActionDefinition& value) { m_createCaseActionHasBeenSet = true; m_createCaseAction = value; }

    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline void SetCreateCaseAction(CreateCaseActionDefinition&& value) { m_createCaseActionHasBeenSet = true; m_createCaseAction = std::move(value); }

    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline RuleAction& WithCreateCaseAction(const CreateCaseActionDefinition& value) { SetCreateCaseAction(value); return *this;}

    /**
     * <p>Information about the create case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnPostCallAnalysisAvailable</code>
     * | <code>OnPostChatAnalysisAvailable</code>.</p>
     */
    inline RuleAction& WithCreateCaseAction(CreateCaseActionDefinition&& value) { SetCreateCaseAction(std::move(value)); return *this;}


    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline const UpdateCaseActionDefinition& GetUpdateCaseAction() const{ return m_updateCaseAction; }

    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline bool UpdateCaseActionHasBeenSet() const { return m_updateCaseActionHasBeenSet; }

    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline void SetUpdateCaseAction(const UpdateCaseActionDefinition& value) { m_updateCaseActionHasBeenSet = true; m_updateCaseAction = value; }

    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline void SetUpdateCaseAction(UpdateCaseActionDefinition&& value) { m_updateCaseActionHasBeenSet = true; m_updateCaseAction = std::move(value); }

    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline RuleAction& WithUpdateCaseAction(const UpdateCaseActionDefinition& value) { SetUpdateCaseAction(value); return *this;}

    /**
     * <p>Information about the update case action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseCreate</code> |
     * <code>OnCaseUpdate</code>.</p>
     */
    inline RuleAction& WithUpdateCaseAction(UpdateCaseActionDefinition&& value) { SetUpdateCaseAction(std::move(value)); return *this;}


    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline const EndAssociatedTasksActionDefinition& GetEndAssociatedTasksAction() const{ return m_endAssociatedTasksAction; }

    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline bool EndAssociatedTasksActionHasBeenSet() const { return m_endAssociatedTasksActionHasBeenSet; }

    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline void SetEndAssociatedTasksAction(const EndAssociatedTasksActionDefinition& value) { m_endAssociatedTasksActionHasBeenSet = true; m_endAssociatedTasksAction = value; }

    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline void SetEndAssociatedTasksAction(EndAssociatedTasksActionDefinition&& value) { m_endAssociatedTasksActionHasBeenSet = true; m_endAssociatedTasksAction = std::move(value); }

    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline RuleAction& WithEndAssociatedTasksAction(const EndAssociatedTasksActionDefinition& value) { SetEndAssociatedTasksAction(value); return *this;}

    /**
     * <p>Information about the end associated tasks action.</p> <p>Supported only for
     * <code>TriggerEventSource</code> values: <code>OnCaseUpdate</code>.</p>
     */
    inline RuleAction& WithEndAssociatedTasksAction(EndAssociatedTasksActionDefinition&& value) { SetEndAssociatedTasksAction(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
