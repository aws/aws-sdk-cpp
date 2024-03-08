/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetColumnStatisticsTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetColumnStatisticsTaskRunRequest::GetColumnStatisticsTaskRunRequest() : 
    m_columnStatisticsTaskRunIdHasBeenSet(false)
{
}

Aws::String GetColumnStatisticsTaskRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_columnStatisticsTaskRunIdHasBeenSet)
  {
   payload.WithString("ColumnStatisticsTaskRunId", m_columnStatisticsTaskRunId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetColumnStatisticsTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetColumnStatisticsTaskRun"));
  return headers;

}




