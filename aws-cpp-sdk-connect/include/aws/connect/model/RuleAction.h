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
     * <p>Information about the EventBridge action.</p>
     */
    inline const EventBridgeActionDefinition& GetEventBridgeAction() const{ return m_eventBridgeAction; }

    /**
     * <p>Information about the EventBridge action.</p>
     */
    inline bool EventBridgeActionHasBeenSet() const { return m_eventBridgeActionHasBeenSet; }

    /**
     * <p>Information about the EventBridge action.</p>
     */
    inline void SetEventBridgeAction(const EventBridgeActionDefinition& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = value; }

    /**
     * <p>Information about the EventBridge action.</p>
     */
    inline void SetEventBridgeAction(EventBridgeActionDefinition&& value) { m_eventBridgeActionHasBeenSet = true; m_eventBridgeAction = std::move(value); }

    /**
     * <p>Information about the EventBridge action.</p>
     */
    inline RuleAction& WithEventBridgeAction(const EventBridgeActionDefinition& value) { SetEventBridgeAction(value); return *this;}

    /**
     * <p>Information about the EventBridge action.</p>
     */
    inline RuleAction& WithEventBridgeAction(EventBridgeActionDefinition&& value) { SetEventBridgeAction(std::move(value)); return *this;}


    /**
     * <p>Information about the contact category action.</p>
     */
    inline const AssignContactCategoryActionDefinition& GetAssignContactCategoryAction() const{ return m_assignContactCategoryAction; }

    /**
     * <p>Information about the contact category action.</p>
     */
    inline bool AssignContactCategoryActionHasBeenSet() const { return m_assignContactCategoryActionHasBeenSet; }

    /**
     * <p>Information about the contact category action.</p>
     */
    inline void SetAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = value; }

    /**
     * <p>Information about the contact category action.</p>
     */
    inline void SetAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { m_assignContactCategoryActionHasBeenSet = true; m_assignContactCategoryAction = std::move(value); }

    /**
     * <p>Information about the contact category action.</p>
     */
    inline RuleAction& WithAssignContactCategoryAction(const AssignContactCategoryActionDefinition& value) { SetAssignContactCategoryAction(value); return *this;}

    /**
     * <p>Information about the contact category action.</p>
     */
    inline RuleAction& WithAssignContactCategoryAction(AssignContactCategoryActionDefinition&& value) { SetAssignContactCategoryAction(std::move(value)); return *this;}


    /**
     * <p>Information about the send notification action.</p>
     */
    inline const SendNotificationActionDefinition& GetSendNotificationAction() const{ return m_sendNotificationAction; }

    /**
     * <p>Information about the send notification action.</p>
     */
    inline bool SendNotificationActionHasBeenSet() const { return m_sendNotificationActionHasBeenSet; }

    /**
     * <p>Information about the send notification action.</p>
     */
    inline void SetSendNotificationAction(const SendNotificationActionDefinition& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = value; }

    /**
     * <p>Information about the send notification action.</p>
     */
    inline void SetSendNotificationAction(SendNotificationActionDefinition&& value) { m_sendNotificationActionHasBeenSet = true; m_sendNotificationAction = std::move(value); }

    /**
     * <p>Information about the send notification action.</p>
     */
    inline RuleAction& WithSendNotificationAction(const SendNotificationActionDefinition& value) { SetSendNotificationAction(value); return *this;}

    /**
     * <p>Information about the send notification action.</p>
     */
    inline RuleAction& WithSendNotificationAction(SendNotificationActionDefinition&& value) { SetSendNotificationAction(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
