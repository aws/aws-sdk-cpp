/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBucketsRequest::GetBucketsRequest() : 
    m_bucketNameHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_includeConnectedResources(false),
    m_includeConnectedResourcesHasBeenSet(false)
{
}

Aws::String GetBucketsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  if(m_includeConnectedResourcesHasBeenSet)
  {
   payload.WithBool("includeConnectedResources", m_includeConnectedResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBucketsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetBuckets"));
  return headers;

}




