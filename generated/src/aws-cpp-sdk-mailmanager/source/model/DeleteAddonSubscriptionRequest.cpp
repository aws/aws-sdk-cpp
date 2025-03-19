/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/DeleteAddonSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAddonSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addonSubscriptionIdHasBeenSet)
  {
   payload.WithString("AddonSubscriptionId", m_addonSubscriptionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAddonSubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.DeleteAddonSubscription"));
  return headers;

}




