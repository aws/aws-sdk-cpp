/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/UpdateSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionRequest::UpdateSubscriptionRequest() : 
    m_autoRenew(AutoRenew::NOT_SET),
    m_autoRenewHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoRenewHasBeenSet)
  {
   payload.WithString("AutoRenew", AutoRenewMapper::GetNameForAutoRenew(m_autoRenew));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.UpdateSubscription"));
  return headers;

}




