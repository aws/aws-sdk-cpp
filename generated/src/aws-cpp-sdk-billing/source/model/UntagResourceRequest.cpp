/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_resourceTagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagKeysJsonList(m_resourceTagKeys.size());
   for(unsigned resourceTagKeysIndex = 0; resourceTagKeysIndex < resourceTagKeysJsonList.GetLength(); ++resourceTagKeysIndex)
   {
     resourceTagKeysJsonList[resourceTagKeysIndex].AsString(m_resourceTagKeys[resourceTagKeysIndex]);
   }
   payload.WithArray("resourceTagKeys", std::move(resourceTagKeysJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UntagResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.UntagResource"));
  return headers;

}




