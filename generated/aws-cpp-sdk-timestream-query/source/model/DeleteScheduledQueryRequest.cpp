/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/DeleteScheduledQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteScheduledQueryRequest::DeleteScheduledQueryRequest() : 
    m_scheduledQueryArnHasBeenSet(false)
{
}

Aws::String DeleteScheduledQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledQueryArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryArn", m_scheduledQueryArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteScheduledQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.DeleteScheduledQuery"));
  return headers;

}




