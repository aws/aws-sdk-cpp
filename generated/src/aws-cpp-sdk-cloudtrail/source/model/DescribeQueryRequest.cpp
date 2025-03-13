/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DescribeQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryAliasHasBeenSet)
  {
   payload.WithString("QueryAlias", m_queryAlias);

  }

  if(m_refreshIdHasBeenSet)
  {
   payload.WithString("RefreshId", m_refreshId);

  }

  if(m_eventDataStoreOwnerAccountIdHasBeenSet)
  {
   payload.WithString("EventDataStoreOwnerAccountId", m_eventDataStoreOwnerAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.DescribeQuery"));
  return headers;

}




