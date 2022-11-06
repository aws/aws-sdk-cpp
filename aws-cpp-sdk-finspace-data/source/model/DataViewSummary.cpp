/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DataViewSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

DataViewSummary::DataViewSummary() : 
    m_dataViewIdHasBeenSet(false),
    m_dataViewArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_asOfTimestamp(0),
    m_asOfTimestampHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_sortColumnsHasBeenSet(false),
    m_status(DataViewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_destinationTypePropertiesHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false)
{
}

DataViewSummary::DataViewSummary(JsonView jsonValue) : 
    m_dataViewIdHasBeenSet(false),
    m_dataViewArnHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_asOfTimestamp(0),
    m_asOfTimestampHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_sortColumnsHasBeenSet(false),
    m_status(DataViewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_destinationTypePropertiesHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DataViewSummary& DataViewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataViewId"))
  {
    m_dataViewId = jsonValue.GetString("dataViewId");

    m_dataViewIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataViewArn"))
  {
    m_dataViewArn = jsonValue.GetString("dataViewArn");

    m_dataViewArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

    m_datasetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("asOfTimestamp"))
  {
    m_asOfTimestamp = jsonValue.GetInt64("asOfTimestamp");

    m_asOfTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partitionColumns"))
  {
    Aws::Utils::Array<JsonView> partitionColumnsJsonList = jsonValue.GetArray("partitionColumns");
    for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
    {
      m_partitionColumns.push_back(partitionColumnsJsonList[partitionColumnsIndex].AsString());
    }
    m_partitionColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortColumns"))
  {
    Aws::Utils::Array<JsonView> sortColumnsJsonList = jsonValue.GetArray("sortColumns");
    for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
    {
      m_sortColumns.push_back(sortColumnsJsonList[sortColumnsIndex].AsString());
    }
    m_sortColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataViewStatusMapper::GetDataViewStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationTypeProperties"))
  {
    m_destinationTypeProperties = jsonValue.GetObject("destinationTypeProperties");

    m_destinationTypePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoUpdate"))
  {
    m_autoUpdate = jsonValue.GetBool("autoUpdate");

    m_autoUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataViewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_dataViewIdHasBeenSet)
  {
   payload.WithString("dataViewId", m_dataViewId);

  }

  if(m_dataViewArnHasBeenSet)
  {
   payload.WithString("dataViewArn", m_dataViewArn);

  }

  if(m_datasetIdHasBeenSet)
  {
   payload.WithString("datasetId", m_datasetId);

  }

  if(m_asOfTimestampHasBeenSet)
  {
   payload.WithInt64("asOfTimestamp", m_asOfTimestamp);

  }

  if(m_partitionColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionColumnsJsonList(m_partitionColumns.size());
   for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
   {
     partitionColumnsJsonList[partitionColumnsIndex].AsString(m_partitionColumns[partitionColumnsIndex]);
   }
   payload.WithArray("partitionColumns", std::move(partitionColumnsJsonList));

  }

  if(m_sortColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortColumnsJsonList(m_sortColumns.size());
   for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
   {
     sortColumnsJsonList[sortColumnsIndex].AsString(m_sortColumns[sortColumnsIndex]);
   }
   payload.WithArray("sortColumns", std::move(sortColumnsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataViewStatusMapper::GetNameForDataViewStatus(m_status));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  if(m_destinationTypePropertiesHasBeenSet)
  {
   payload.WithObject("destinationTypeProperties", m_destinationTypeProperties.Jsonize());

  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithBool("autoUpdate", m_autoUpdate);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("lastModifiedTime", m_lastModifiedTime);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
