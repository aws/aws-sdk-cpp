/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/CreateScheduledQueryRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateScheduledQueryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_queryLanguageHasBeenSet) {
    payload.WithString("queryLanguage", QueryLanguageMapper::GetNameForQueryLanguage(m_queryLanguage));
  }

  if (m_queryStringHasBeenSet) {
    payload.WithString("queryString", m_queryString);
  }

  if (m_logGroupIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
    for (unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength();
         ++logGroupIdentifiersIndex) {
      logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
    }
    payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));
  }

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", m_timezone);
  }

  if (m_startTimeOffsetHasBeenSet) {
    payload.WithInt64("startTimeOffset", m_startTimeOffset);
  }

  if (m_destinationConfigurationHasBeenSet) {
    payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());
  }

  if (m_scheduleStartTimeHasBeenSet) {
    payload.WithInt64("scheduleStartTime", m_scheduleStartTime);
  }

  if (m_scheduleEndTimeHasBeenSet) {
    payload.WithInt64("scheduleEndTime", m_scheduleEndTime);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ScheduledQueryStateMapper::GetNameForScheduledQueryState(m_state));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScheduledQueryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CreateScheduledQuery"));
  return headers;
}
