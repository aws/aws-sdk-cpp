﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetColumnStatisticsForPartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetColumnStatisticsForPartitionRequest::GetColumnStatisticsForPartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionValuesHasBeenSet(false),
    m_columnNamesHasBeenSet(false)
{
}

Aws::String GetColumnStatisticsForPartitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_partitionValuesHasBeenSet)
  {
   Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

  }

  if(m_columnNamesHasBeenSet)
  {
   Array<JsonValue> columnNamesJsonList(m_columnNames.size());
   for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
   {
     columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
   }
   payload.WithArray("ColumnNames", std::move(columnNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetColumnStatisticsForPartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetColumnStatisticsForPartition"));
  return headers;

}




