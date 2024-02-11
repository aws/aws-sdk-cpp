/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RuleAction::RuleAction() : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_eventBridgeActionHasBeenSet(false),
    m_assignContactCategoryActionHasBeenSet(false),
    m_sendNotificationActionHasBeenSet(false),
    m_createCaseActionHasBeenSet(false),
    m_updateCaseActionHasBeenSet(false),
    m_endAssociatedTasksActionHasBeenSet(false)
{
}

RuleAction::RuleAction(JsonView jsonValue) : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_eventBridgeActionHasBeenSet(false),
    m_assignContactCategoryActionHasBeenSet(false),
    m_sendNotificationActionHasBeenSet(false),
    m_createCaseActionHasBeenSet(false),
    m_updateCaseActionHasBeenSet(false),
    m_endAssociatedTasksActionHasBeenSet(false)
{
  *this = jsonValue;
}

RuleAction& RuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskAction"))
  {
    m_taskAction = jsonValue.GetObject("TaskAction");

    m_taskActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridgeAction"))
  {
    m_eventBridgeAction = jsonValue.GetObject("EventBridgeAction");

    m_eventBridgeActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignContactCategoryAction"))
  {
    m_assignContactCategoryAction = jsonValue.GetObject("AssignContactCategoryAction");

    m_assignContactCategoryActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendNotificationAction"))
  {
    m_sendNotificationAction = jsonValue.GetObject("SendNotificationAction");

    m_sendNotificationActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateCaseAction"))
  {
    m_createCaseAction = jsonValue.GetObject("CreateCaseAction");

    m_createCaseActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateCaseAction"))
  {
    m_updateCaseAction = jsonValue.GetObject("UpdateCaseAction");

    m_updateCaseActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndAssociatedTasksAction"))
  {
    m_endAssociatedTasksAction = jsonValue.GetObject("EndAssociatedTasksAction");

    m_endAssociatedTasksActionHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if(m_taskActionHasBeenSet)
  {
   payload.WithObject("TaskAction", m_taskAction.Jsonize());

  }

  if(m_eventBridgeActionHasBeenSet)
  {
   payload.WithObject("EventBridgeAction", m_eventBridgeAction.Jsonize());

  }

  if(m_assignContactCategoryActionHasBeenSet)
  {
   payload.WithObject("AssignContactCategoryAction", m_assignContactCategoryAction.Jsonize());

  }

  if(m_sendNotificationActionHasBeenSet)
  {
   payload.WithObject("SendNotificationAction", m_sendNotificationAction.Jsonize());

  }

  if(m_createCaseActionHasBeenSet)
  {
   payload.WithObject("CreateCaseAction", m_createCaseAction.Jsonize());

  }

  if(m_updateCaseActionHasBeenSet)
  {
   payload.WithObject("UpdateCaseAction", m_updateCaseAction.Jsonize());

  }

  if(m_endAssociatedTasksActionHasBeenSet)
  {
   payload.WithObject("EndAssociatedTasksAction", m_endAssociatedTasksAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
