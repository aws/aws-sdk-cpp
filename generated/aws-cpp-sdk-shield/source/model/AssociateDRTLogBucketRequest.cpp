/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AssociateDRTLogBucketRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDRTLogBucketRequest::AssociateDRTLogBucketRequest() : 
    m_logBucketHasBeenSet(false)
{
}

Aws::String AssociateDRTLogBucketRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logBucketHasBeenSet)
  {
   payload.WithString("LogBucket", m_logBucket);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateDRTLogBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.AssociateDRTLogBucket"));
  return headers;

}




