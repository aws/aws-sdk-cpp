/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAggregateLogGroupSummariesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accountIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdentifiersJsonList(m_accountIdentifiers.size());
    for (unsigned accountIdentifiersIndex = 0; accountIdentifiersIndex < accountIdentifiersJsonList.GetLength();
         ++accountIdentifiersIndex) {
      accountIdentifiersJsonList[accountIdentifiersIndex].AsString(m_accountIdentifiers[accountIdentifiersIndex]);
    }
    payload.WithArray("accountIdentifiers", std::move(accountIdentifiersJsonList));
  }

  if (m_includeLinkedAccountsHasBeenSet) {
    payload.WithBool("includeLinkedAccounts", m_includeLinkedAccounts);
  }

  if (m_logGroupClassHasBeenSet) {
    payload.WithString("logGroupClass", LogGroupClassMapper::GetNameForLogGroupClass(m_logGroupClass));
  }

  if (m_logGroupNamePatternHasBeenSet) {
    payload.WithString("logGroupNamePattern", m_logGroupNamePattern);
  }

  if (m_dataSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
    for (unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex) {
      dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
    }
    payload.WithArray("dataSources", std::move(dataSourcesJsonList));
  }

  if (m_groupByHasBeenSet) {
    payload.WithString("groupBy", ListAggregateLogGroupSummariesGroupByMapper::GetNameForListAggregateLogGroupSummariesGroupBy(m_groupBy));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAggregateLogGroupSummariesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.ListAggregateLogGroupSummaries"));
  return headers;
}
