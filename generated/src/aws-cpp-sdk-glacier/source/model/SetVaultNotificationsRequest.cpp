/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/SetVaultNotificationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetVaultNotificationsRequest::SetVaultNotificationsRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_vaultNotificationConfigHasBeenSet(false)
{
}

Aws::String SetVaultNotificationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vaultNotificationConfigHasBeenSet)
  {
   payload = m_vaultNotificationConfig.Jsonize();
  }

  return payload.View().WriteReadable();
}




