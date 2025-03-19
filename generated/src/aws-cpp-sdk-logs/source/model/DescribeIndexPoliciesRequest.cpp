/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeIndexPoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeIndexPoliciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
   for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
   {
     logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
   }
   payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeIndexPoliciesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeIndexPolicies"));
  return headers;

}




