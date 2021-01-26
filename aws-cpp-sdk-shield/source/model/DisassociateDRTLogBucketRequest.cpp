/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DisassociateDRTLogBucketRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateDRTLogBucketRequest::DisassociateDRTLogBucketRequest() : 
    m_logBucketHasBeenSet(false)
{
}

Aws::String DisassociateDRTLogBucketRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logBucketHasBeenSet)
  {
   payload.WithString("LogBucket", m_logBucket);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateDRTLogBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DisassociateDRTLogBucket"));
  return headers;

}




