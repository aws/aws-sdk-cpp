/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeleteDeliveryDestinationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeliveryDestinationPolicyRequest::DeleteDeliveryDestinationPolicyRequest() : 
    m_deliveryDestinationNameHasBeenSet(false)
{
}

Aws::String DeleteDeliveryDestinationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryDestinationNameHasBeenSet)
  {
   payload.WithString("deliveryDestinationName", m_deliveryDestinationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDeliveryDestinationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DeleteDeliveryDestinationPolicy"));
  return headers;

}




