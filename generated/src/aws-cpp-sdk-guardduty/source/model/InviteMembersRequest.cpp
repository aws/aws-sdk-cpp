/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/InviteMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InviteMembersRequest::InviteMembersRequest() : 
    m_detectorIdHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_disableEmailNotification(false),
    m_disableEmailNotificationHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

Aws::String InviteMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_disableEmailNotificationHasBeenSet)
  {
   payload.WithBool("disableEmailNotification", m_disableEmailNotification);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload.View().WriteReadable();
}




