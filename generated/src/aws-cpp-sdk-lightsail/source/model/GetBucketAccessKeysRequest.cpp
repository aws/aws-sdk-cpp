/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketAccessKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBucketAccessKeysRequest::GetBucketAccessKeysRequest() : 
    m_bucketNameHasBeenSet(false)
{
}

Aws::String GetBucketAccessKeysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBucketAccessKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetBucketAccessKeys"));
  return headers;

}




