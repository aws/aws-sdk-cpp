/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartColumnStatisticsTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartColumnStatisticsTaskRunRequest::StartColumnStatisticsTaskRunRequest() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameListHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sampleSize(0.0),
    m_sampleSizeHasBeenSet(false),
    m_catalogIDHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false)
{
}

Aws::String StartColumnStatisticsTaskRunRequest::SerializePayload() const
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

  if(m_columnNameListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNameListJsonList(m_columnNameList.size());
   for(unsigned columnNameListIndex = 0; columnNameListIndex < columnNameListJsonList.GetLength(); ++columnNameListIndex)
   {
     columnNameListJsonList[columnNameListIndex].AsString(m_columnNameList[columnNameListIndex]);
   }
   payload.WithArray("ColumnNameList", std::move(columnNameListJsonList));

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_sampleSizeHasBeenSet)
  {
   payload.WithDouble("SampleSize", m_sampleSize);

  }

  if(m_catalogIDHasBeenSet)
  {
   payload.WithString("CatalogID", m_catalogID);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartColumnStatisticsTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartColumnStatisticsTaskRun"));
  return headers;

}




