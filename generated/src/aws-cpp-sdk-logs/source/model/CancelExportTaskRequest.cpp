/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CancelExportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelExportTaskRequest::CancelExportTaskRequest() : 
    m_taskIdHasBeenSet(false)
{
}

Aws::String CancelExportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelExportTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CancelExportTask"));
  return headers;

}




