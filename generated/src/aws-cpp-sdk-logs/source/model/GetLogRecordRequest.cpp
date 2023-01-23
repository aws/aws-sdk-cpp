/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLogRecordRequest::GetLogRecordRequest() : 
    m_logRecordPointerHasBeenSet(false),
    m_unmask(false),
    m_unmaskHasBeenSet(false)
{
}

Aws::String GetLogRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logRecordPointerHasBeenSet)
  {
   payload.WithString("logRecordPointer", m_logRecordPointer);

  }

  if(m_unmaskHasBeenSet)
  {
   payload.WithBool("unmask", m_unmask);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLogRecordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLogRecord"));
  return headers;

}




