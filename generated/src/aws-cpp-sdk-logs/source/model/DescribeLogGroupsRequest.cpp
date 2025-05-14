/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeLogGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdentifiersJsonList(m_accountIdentifiers.size());
   for(unsigned accountIdentifiersIndex = 0; accountIdentifiersIndex < accountIdentifiersJsonList.GetLength(); ++accountIdentifiersIndex)
   {
     accountIdentifiersJsonList[accountIdentifiersIndex].AsString(m_accountIdentifiers[accountIdentifiersIndex]);
   }
   payload.WithArray("accountIdentifiers", std::move(accountIdentifiersJsonList));

  }

  if(m_logGroupNamePrefixHasBeenSet)
  {
   payload.WithString("logGroupNamePrefix", m_logGroupNamePrefix);

  }

  if(m_logGroupNamePatternHasBeenSet)
  {
   payload.WithString("logGroupNamePattern", m_logGroupNamePattern);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_includeLinkedAccountsHasBeenSet)
  {
   payload.WithBool("includeLinkedAccounts", m_includeLinkedAccounts);

  }

  if(m_logGroupClassHasBeenSet)
  {
   payload.WithString("logGroupClass", LogGroupClassMapper::GetNameForLogGroupClass(m_logGroupClass));
  }

  if(m_logGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
   for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
   {
     logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
   }
   payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLogGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeLogGroups"));
  return headers;

}




