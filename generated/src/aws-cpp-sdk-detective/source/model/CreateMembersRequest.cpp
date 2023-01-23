/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/CreateMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMembersRequest::CreateMembersRequest() : 
    m_graphArnHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_disableEmailNotification(false),
    m_disableEmailNotificationHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
}

Aws::String CreateMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_disableEmailNotificationHasBeenSet)
  {
   payload.WithBool("DisableEmailNotification", m_disableEmailNotification);

  }

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  return payload.View().WriteReadable();
}




