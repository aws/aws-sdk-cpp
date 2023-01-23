/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ContinuousExportDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ContinuousExportDescription::ContinuousExportDescription() : 
    m_exportIdHasBeenSet(false),
    m_status(ContinuousExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_dataSource(DataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_schemaStorageConfigHasBeenSet(false)
{
}

ContinuousExportDescription::ContinuousExportDescription(JsonView jsonValue) : 
    m_exportIdHasBeenSet(false),
    m_status(ContinuousExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_dataSource(DataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_schemaStorageConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ContinuousExportDescription& ContinuousExportDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");

    m_exportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ContinuousExportStatusMapper::GetContinuousExportStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetail"))
  {
    m_statusDetail = jsonValue.GetString("statusDetail");

    m_statusDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetDouble("stopTime");

    m_stopTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = DataSourceMapper::GetDataSourceForName(jsonValue.GetString("dataSource"));

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaStorageConfig"))
  {
    Aws::Map<Aws::String, JsonView> schemaStorageConfigJsonMap = jsonValue.GetObject("schemaStorageConfig").GetAllObjects();
    for(auto& schemaStorageConfigItem : schemaStorageConfigJsonMap)
    {
      m_schemaStorageConfig[schemaStorageConfigItem.first] = schemaStorageConfigItem.second.AsString();
    }
    m_schemaStorageConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ContinuousExportDescription::Jsonize() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("exportId", m_exportId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ContinuousExportStatusMapper::GetNameForContinuousExportStatus(m_status));
  }

  if(m_statusDetailHasBeenSet)
  {
   payload.WithString("statusDetail", m_statusDetail);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithDouble("stopTime", m_stopTime.SecondsWithMSPrecision());
  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("dataSource", DataSourceMapper::GetNameForDataSource(m_dataSource));
  }

  if(m_schemaStorageConfigHasBeenSet)
  {
   JsonValue schemaStorageConfigJsonMap;
   for(auto& schemaStorageConfigItem : m_schemaStorageConfig)
   {
     schemaStorageConfigJsonMap.WithString(schemaStorageConfigItem.first, schemaStorageConfigItem.second);
   }
   payload.WithObject("schemaStorageConfig", std::move(schemaStorageConfigJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
