/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TestMetricFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestMetricFilterRequest::TestMetricFilterRequest() : 
    m_filterPatternHasBeenSet(false),
    m_logEventMessagesHasBeenSet(false)
{
}

Aws::String TestMetricFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_logEventMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logEventMessagesJsonList(m_logEventMessages.size());
   for(unsigned logEventMessagesIndex = 0; logEventMessagesIndex < logEventMessagesJsonList.GetLength(); ++logEventMessagesIndex)
   {
     logEventMessagesJsonList[logEventMessagesIndex].AsString(m_logEventMessages[logEventMessagesIndex]);
   }
   payload.WithArray("logEventMessages", std::move(logEventMessagesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestMetricFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.TestMetricFilter"));
  return headers;

}




