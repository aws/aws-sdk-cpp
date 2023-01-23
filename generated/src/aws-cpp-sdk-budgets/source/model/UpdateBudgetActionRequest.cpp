/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/UpdateBudgetActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBudgetActionRequest::UpdateBudgetActionRequest() : 
    m_accountIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_actionThresholdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_approvalModel(ApprovalModel::NOT_SET),
    m_approvalModelHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
}

Aws::String UpdateBudgetActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("ActionId", m_actionId);

  }

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("NotificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
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

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsObject(m_subscribers[subscribersIndex].Jsonize());
   }
   payload.WithArray("Subscribers", std::move(subscribersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBudgetActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBudgetServiceGateway.UpdateBudgetAction"));
  return headers;

}




