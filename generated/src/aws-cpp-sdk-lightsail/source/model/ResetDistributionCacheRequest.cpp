/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResetDistributionCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetDistributionCacheRequest::ResetDistributionCacheRequest() : 
    m_distributionNameHasBeenSet(false)
{
}

Aws::String ResetDistributionCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionNameHasBeenSet)
  {
   payload.WithString("distributionName", m_distributionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResetDistributionCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.ResetDistributionCache"));
  return headers;

}




