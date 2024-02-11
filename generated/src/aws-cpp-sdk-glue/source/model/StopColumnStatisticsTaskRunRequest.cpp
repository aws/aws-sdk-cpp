/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StopColumnStatisticsTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopColumnStatisticsTaskRunRequest::StopColumnStatisticsTaskRunRequest() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

Aws::String StopColumnStatisticsTaskRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopColumnStatisticsTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StopColumnStatisticsTaskRun"));
  return headers;

}




