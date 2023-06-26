/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDistributionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDistributionsRequest::GetDistributionsRequest() : 
    m_distributionNameHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String GetDistributionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionNameHasBeenSet)
  {
   payload.WithString("distributionName", m_distributionName);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDistributionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetDistributions"));
  return headers;

}




