/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketBundlesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBucketBundlesRequest::GetBucketBundlesRequest() : 
    m_includeInactive(false),
    m_includeInactiveHasBeenSet(false)
{
}

Aws::String GetBucketBundlesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_includeInactiveHasBeenSet)
  {
   payload.WithBool("includeInactive", m_includeInactive);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBucketBundlesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetBucketBundles"));
  return headers;

}




