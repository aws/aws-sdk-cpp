/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateBudgetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBudgetRequest::UpdateBudgetRequest() : 
    m_actionsToAddHasBeenSet(false),
    m_actionsToRemoveHasBeenSet(false),
    m_approximateDollarLimit(0.0),
    m_approximateDollarLimitHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(BudgetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateBudgetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsToAddJsonList(m_actionsToAdd.size());
   for(unsigned actionsToAddIndex = 0; actionsToAddIndex < actionsToAddJsonList.GetLength(); ++actionsToAddIndex)
   {
     actionsToAddJsonList[actionsToAddIndex].AsObject(m_actionsToAdd[actionsToAddIndex].Jsonize());
   }
   payload.WithArray("actionsToAdd", std::move(actionsToAddJsonList));

  }

  if(m_actionsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsToRemoveJsonList(m_actionsToRemove.size());
   for(unsigned actionsToRemoveIndex = 0; actionsToRemoveIndex < actionsToRemoveJsonList.GetLength(); ++actionsToRemoveIndex)
   {
     actionsToRemoveJsonList[actionsToRemoveIndex].AsObject(m_actionsToRemove[actionsToRemoveIndex].Jsonize());
   }
   payload.WithArray("actionsToRemove", std::move(actionsToRemoveJsonList));

  }

  if(m_approximateDollarLimitHasBeenSet)
  {
   payload.WithDouble("approximateDollarLimit", m_approximateDollarLimit);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", BudgetStatusMapper::GetNameForBudgetStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBudgetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




