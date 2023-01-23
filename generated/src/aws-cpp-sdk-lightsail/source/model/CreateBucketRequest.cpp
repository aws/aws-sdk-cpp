/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateBucketRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBucketRequest::CreateBucketRequest() : 
    m_bucketNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableObjectVersioning(false),
    m_enableObjectVersioningHasBeenSet(false)
{
}

Aws::String CreateBucketRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_enableObjectVersioningHasBeenSet)
  {
   payload.WithBool("enableObjectVersioning", m_enableObjectVersioning);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateBucket"));
  return headers;

}




