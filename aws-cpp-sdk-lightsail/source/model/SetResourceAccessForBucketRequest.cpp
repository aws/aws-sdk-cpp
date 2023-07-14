/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetResourceAccessForBucketRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetResourceAccessForBucketRequest::SetResourceAccessForBucketRequest() : 
    m_resourceNameHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_access(ResourceBucketAccess::NOT_SET),
    m_accessHasBeenSet(false)
{
}

Aws::String SetResourceAccessForBucketRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_accessHasBeenSet)
  {
   payload.WithString("access", ResourceBucketAccessMapper::GetNameForResourceBucketAccess(m_access));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetResourceAccessForBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.SetResourceAccessForBucket"));
  return headers;

}




