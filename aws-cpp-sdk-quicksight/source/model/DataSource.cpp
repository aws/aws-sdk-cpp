/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSource::DataSource() : 
    m_arnHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_alternateDataSourceParametersHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_alternateDataSourceParametersHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceParameters"))
  {
    m_dataSourceParameters = jsonValue.GetObject("DataSourceParameters");

    m_dataSourceParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlternateDataSourceParameters"))
  {
    Aws::Utils::Array<JsonView> alternateDataSourceParametersJsonList = jsonValue.GetArray("AlternateDataSourceParameters");
    for(unsigned alternateDataSourceParametersIndex = 0; alternateDataSourceParametersIndex < alternateDataSourceParametersJsonList.GetLength(); ++alternateDataSourceParametersIndex)
    {
      m_alternateDataSourceParameters.push_back(alternateDataSourceParametersJsonList[alternateDataSourceParametersIndex].AsObject());
    }
    m_alternateDataSourceParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConnectionProperties"))
  {
    m_vpcConnectionProperties = jsonValue.GetObject("VpcConnectionProperties");

    m_vpcConnectionPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslProperties"))
  {
    m_sslProperties = jsonValue.GetObject("SslProperties");

    m_sslPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("ErrorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_dataSourceParametersHasBeenSet)
  {
   payload.WithObject("DataSourceParameters", m_dataSourceParameters.Jsonize());

  }

  if(m_alternateDataSourceParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alternateDataSourceParametersJsonList(m_alternateDataSourceParameters.size());
   for(unsigned alternateDataSourceParametersIndex = 0; alternateDataSourceParametersIndex < alternateDataSourceParametersJsonList.GetLength(); ++alternateDataSourceParametersIndex)
   {
     alternateDataSourceParametersJsonList[alternateDataSourceParametersIndex].AsObject(m_alternateDataSourceParameters[alternateDataSourceParametersIndex].Jsonize());
   }
   payload.WithArray("AlternateDataSourceParameters", std::move(alternateDataSourceParametersJsonList));

  }

  if(m_vpcConnectionPropertiesHasBeenSet)
  {
   payload.WithObject("VpcConnectionProperties", m_vpcConnectionProperties.Jsonize());

  }

  if(m_sslPropertiesHasBeenSet)
  {
   payload.WithObject("SslProperties", m_sslProperties.Jsonize());

  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("ErrorInfo", m_errorInfo.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
