/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CreateExportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExportTaskRequest::CreateExportTaskRequest() : 
    m_taskNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false),
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPrefixHasBeenSet(false)
{
}

Aws::String CreateExportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskNameHasBeenSet)
  {
   payload.WithString("taskName", m_taskName);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logStreamNamePrefixHasBeenSet)
  {
   payload.WithString("logStreamNamePrefix", m_logStreamNamePrefix);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithInt64("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithInt64("to", m_to);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationPrefixHasBeenSet)
  {
   payload.WithString("destinationPrefix", m_destinationPrefix);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExportTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CreateExportTask"));
  return headers;

}




