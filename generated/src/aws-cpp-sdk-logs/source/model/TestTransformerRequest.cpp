/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TestTransformerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TestTransformerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformerConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transformerConfigJsonList(m_transformerConfig.size());
   for(unsigned transformerConfigIndex = 0; transformerConfigIndex < transformerConfigJsonList.GetLength(); ++transformerConfigIndex)
   {
     transformerConfigJsonList[transformerConfigIndex].AsObject(m_transformerConfig[transformerConfigIndex].Jsonize());
   }
   payload.WithArray("transformerConfig", std::move(transformerConfigJsonList));

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

Aws::Http::HeaderValueCollection TestTransformerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.TestTransformer"));
  return headers;

}




