/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AthenaSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AthenaSourceConfig::AthenaSourceConfig() : 
    m_roleArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dataCatalogHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_s3ResultsPathHasBeenSet(false),
    m_backTestConfigurationHasBeenSet(false)
{
}

AthenaSourceConfig::AthenaSourceConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dataCatalogHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_s3ResultsPathHasBeenSet(false),
    m_backTestConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AthenaSourceConfig& AthenaSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataCatalog"))
  {
    m_dataCatalog = jsonValue.GetString("DataCatalog");

    m_dataCatalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroupName"))
  {
    m_workGroupName = jsonValue.GetString("WorkGroupName");

    m_workGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ResultsPath"))
  {
    m_s3ResultsPath = jsonValue.GetString("S3ResultsPath");

    m_s3ResultsPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackTestConfiguration"))
  {
    m_backTestConfiguration = jsonValue.GetObject("BackTestConfiguration");

    m_backTestConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AthenaSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_dataCatalogHasBeenSet)
  {
   payload.WithString("DataCatalog", m_dataCatalog);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_workGroupNameHasBeenSet)
  {
   payload.WithString("WorkGroupName", m_workGroupName);

  }

  if(m_s3ResultsPathHasBeenSet)
  {
   payload.WithString("S3ResultsPath", m_s3ResultsPath);

  }

  if(m_backTestConfigurationHasBeenSet)
  {
   payload.WithObject("BackTestConfiguration", m_backTestConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
