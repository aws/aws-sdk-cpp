/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateBucketBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBucketBundleRequest::UpdateBucketBundleRequest() : 
    m_bucketNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false)
{
}

Aws::String UpdateBucketBundleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBucketBundleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateBucketBundle"));
  return headers;

}




