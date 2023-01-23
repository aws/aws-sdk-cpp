/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeSubscriptionFiltersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSubscriptionFiltersRequest::DescribeSubscriptionFiltersRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_filterNamePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeSubscriptionFiltersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_filterNamePrefixHasBeenSet)
  {
   payload.WithString("filterNamePrefix", m_filterNamePrefix);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSubscriptionFiltersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeSubscriptionFilters"));
  return headers;

}




