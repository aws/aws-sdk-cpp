/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListUsageLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListUsageLimitsRequest::ListUsageLimitsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_usageType(UsageLimitUsageType::NOT_SET),
    m_usageTypeHasBeenSet(false)
{
}

Aws::String ListUsageLimitsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", UsageLimitUsageTypeMapper::GetNameForUsageLimitUsageType(m_usageType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListUsageLimitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.ListUsageLimits"));
  return headers;

}




