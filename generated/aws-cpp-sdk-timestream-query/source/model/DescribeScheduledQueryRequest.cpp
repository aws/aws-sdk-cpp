/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/DescribeScheduledQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeScheduledQueryRequest::DescribeScheduledQueryRequest() : 
    m_scheduledQueryArnHasBeenSet(false)
{
}

Aws::String DescribeScheduledQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledQueryArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryArn", m_scheduledQueryArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeScheduledQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.DescribeScheduledQuery"));
  return headers;

}




