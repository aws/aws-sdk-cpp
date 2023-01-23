/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateColumnStatisticsForPartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateColumnStatisticsForPartitionRequest::UpdateColumnStatisticsForPartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionValuesHasBeenSet(false),
    m_columnStatisticsListHasBeenSet(false)
{
}

Aws::String UpdateColumnStatisticsForPartitionRequest::SerializePayload() const
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
   Aws::Utils::Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

  }

  if(m_columnStatisticsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnStatisticsListJsonList(m_columnStatisticsList.size());
   for(unsigned columnStatisticsListIndex = 0; columnStatisticsListIndex < columnStatisticsListJsonList.GetLength(); ++columnStatisticsListIndex)
   {
     columnStatisticsListJsonList[columnStatisticsListIndex].AsObject(m_columnStatisticsList[columnStatisticsListIndex].Jsonize());
   }
   payload.WithArray("ColumnStatisticsList", std::move(columnStatisticsListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateColumnStatisticsForPartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateColumnStatisticsForPartition"));
  return headers;

}




