﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/DeleteUsageLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUsageLimitRequest::DeleteUsageLimitRequest() : 
    m_usageLimitIdHasBeenSet(false)
{
}

Aws::String DeleteUsageLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageLimitIdHasBeenSet)
  {
   payload.WithString("usageLimitId", m_usageLimitId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteUsageLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "redshift-serverless.DeleteUsageLimit"));
  return headers;

}




