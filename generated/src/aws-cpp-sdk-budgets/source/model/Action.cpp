/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

Action::Action() : 
    m_actionIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionThresholdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_approvalModel(ApprovalModel::NOT_SET),
    m_approvalModelHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_actionIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionThresholdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_approvalModel(ApprovalModel::NOT_SET),
    m_approvalModelHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionId"))
  {
    m_actionId = jsonValue.GetString("ActionId");

    m_actionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationType"))
  {
    m_notificationType = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("NotificationType"));

    m_notificationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionThreshold"))
  {
    m_actionThreshold = jsonValue.GetObject("ActionThreshold");

    m_actionThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetObject("Definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovalModel"))
  {
    m_approvalModel = ApprovalModelMapper::GetApprovalModelForName(jsonValue.GetString("ApprovalModel"));

    m_approvalModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ActionStatusMapper::GetActionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subscribers"))
  {
    Aws::Utils::Array<JsonView> subscribersJsonList = jsonValue.GetArray("Subscribers");
    for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
    {
      m_subscribers.push_back(subscribersJsonList[subscribersIndex].AsObject());
    }
    m_subscribersHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("ActionId", m_actionId);

  }

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("NotificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if(m_actionThresholdHasBeenSet)
  {
   payload.WithObject("ActionThreshold", m_actionThreshold.Jsonize());

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_approvalModelHasBeenSet)
  {
   payload.WithString("ApprovalModel", ApprovalModelMapper::GetNameForApprovalModel(m_approvalModel));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ActionStatusMapper::GetNameForActionStatus(m_status));
  }

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsObject(m_subscribers[subscribersIndex].Jsonize());
   }
   payload.WithArray("Subscribers", std::move(subscribersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
