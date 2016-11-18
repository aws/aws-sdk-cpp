﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> logEventMessagesJsonList(m_logEventMessages.size());
   for(unsigned logEventMessagesIndex = 0; logEventMessagesIndex < logEventMessagesJsonList.GetLength(); ++logEventMessagesIndex)
   {
     logEventMessagesJsonList[logEventMessagesIndex].AsString(m_logEventMessages[logEventMessagesIndex]);
   }
   payload.WithArray("logEventMessages", std::move(logEventMessagesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TestMetricFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.TestMetricFilter"));
  return headers;

}



