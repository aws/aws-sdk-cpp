﻿/**
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

RuleAction::RuleAction(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AssignSlaAction"))
  {
    m_assignSlaAction = jsonValue.GetObject("AssignSlaAction");
    m_assignSlaActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndAssociatedTasksAction"))
  {
    m_endAssociatedTasksAction = jsonValue.GetObject("EndAssociatedTasksAction");
    m_endAssociatedTasksActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubmitAutoEvaluationAction"))
  {
    m_submitAutoEvaluationAction = jsonValue.GetObject("SubmitAutoEvaluationAction");
    m_submitAutoEvaluationActionHasBeenSet = true;
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

  if(m_assignSlaActionHasBeenSet)
  {
   payload.WithObject("AssignSlaAction", m_assignSlaAction.Jsonize());

  }

  if(m_endAssociatedTasksActionHasBeenSet)
  {
   payload.WithObject("EndAssociatedTasksAction", m_endAssociatedTasksAction.Jsonize());

  }

  if(m_submitAutoEvaluationActionHasBeenSet)
  {
   payload.WithObject("SubmitAutoEvaluationAction", m_submitAutoEvaluationAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
