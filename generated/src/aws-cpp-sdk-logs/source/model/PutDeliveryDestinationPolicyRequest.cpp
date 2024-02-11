/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutDeliveryDestinationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDeliveryDestinationPolicyRequest::PutDeliveryDestinationPolicyRequest() : 
    m_deliveryDestinationNameHasBeenSet(false),
    m_deliveryDestinationPolicyHasBeenSet(false)
{
}

Aws::String PutDeliveryDestinationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryDestinationNameHasBeenSet)
  {
   payload.WithString("deliveryDestinationName", m_deliveryDestinationName);

  }

  if(m_deliveryDestinationPolicyHasBeenSet)
  {
   payload.WithString("deliveryDestinationPolicy", m_deliveryDestinationPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDeliveryDestinationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutDeliveryDestinationPolicy"));
  return headers;

}




