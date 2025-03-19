/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseSourceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DatabaseSourceDescription::DatabaseSourceDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseSourceDescription& DatabaseSourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DatabaseTypeMapper::GetDatabaseTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SSLMode"))
  {
    m_sSLMode = SSLModeMapper::GetSSLModeForName(jsonValue.GetString("SSLMode"));
    m_sSLModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Databases"))
  {
    m_databases = jsonValue.GetObject("Databases");
    m_databasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tables"))
  {
    m_tables = jsonValue.GetObject("Tables");
    m_tablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Columns"))
  {
    m_columns = jsonValue.GetObject("Columns");
    m_columnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SurrogateKeys"))
  {
    Aws::Utils::Array<JsonView> surrogateKeysJsonList = jsonValue.GetArray("SurrogateKeys");
    for(unsigned surrogateKeysIndex = 0; surrogateKeysIndex < surrogateKeysJsonList.GetLength(); ++surrogateKeysIndex)
    {
      m_surrogateKeys.push_back(surrogateKeysJsonList[surrogateKeysIndex].AsString());
    }
    m_surrogateKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnapshotWatermarkTable"))
  {
    m_snapshotWatermarkTable = jsonValue.GetString("SnapshotWatermarkTable");
    m_snapshotWatermarkTableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnapshotInfo"))
  {
    Aws::Utils::Array<JsonView> snapshotInfoJsonList = jsonValue.GetArray("SnapshotInfo");
    for(unsigned snapshotInfoIndex = 0; snapshotInfoIndex < snapshotInfoJsonList.GetLength(); ++snapshotInfoIndex)
    {
      m_snapshotInfo.push_back(snapshotInfoJsonList[snapshotInfoIndex].AsObject());
    }
    m_snapshotInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseSourceAuthenticationConfiguration"))
  {
    m_databaseSourceAuthenticationConfiguration = jsonValue.GetObject("DatabaseSourceAuthenticationConfiguration");
    m_databaseSourceAuthenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseSourceVPCConfiguration"))
  {
    m_databaseSourceVPCConfiguration = jsonValue.GetObject("DatabaseSourceVPCConfiguration");
    m_databaseSourceVPCConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DatabaseTypeMapper::GetNameForDatabaseType(m_type));
  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_sSLModeHasBeenSet)
  {
   payload.WithString("SSLMode", SSLModeMapper::GetNameForSSLMode(m_sSLMode));
  }

  if(m_databasesHasBeenSet)
  {
   payload.WithObject("Databases", m_databases.Jsonize());

  }

  if(m_tablesHasBeenSet)
  {
   payload.WithObject("Tables", m_tables.Jsonize());

  }

  if(m_columnsHasBeenSet)
  {
   payload.WithObject("Columns", m_columns.Jsonize());

  }

  if(m_surrogateKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> surrogateKeysJsonList(m_surrogateKeys.size());
   for(unsigned surrogateKeysIndex = 0; surrogateKeysIndex < surrogateKeysJsonList.GetLength(); ++surrogateKeysIndex)
   {
     surrogateKeysJsonList[surrogateKeysIndex].AsString(m_surrogateKeys[surrogateKeysIndex]);
   }
   payload.WithArray("SurrogateKeys", std::move(surrogateKeysJsonList));

  }

  if(m_snapshotWatermarkTableHasBeenSet)
  {
   payload.WithString("SnapshotWatermarkTable", m_snapshotWatermarkTable);

  }

  if(m_snapshotInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotInfoJsonList(m_snapshotInfo.size());
   for(unsigned snapshotInfoIndex = 0; snapshotInfoIndex < snapshotInfoJsonList.GetLength(); ++snapshotInfoIndex)
   {
     snapshotInfoJsonList[snapshotInfoIndex].AsObject(m_snapshotInfo[snapshotInfoIndex].Jsonize());
   }
   payload.WithArray("SnapshotInfo", std::move(snapshotInfoJsonList));

  }

  if(m_databaseSourceAuthenticationConfigurationHasBeenSet)
  {
   payload.WithObject("DatabaseSourceAuthenticationConfiguration", m_databaseSourceAuthenticationConfiguration.Jsonize());

  }

  if(m_databaseSourceVPCConfigurationHasBeenSet)
  {
   payload.WithObject("DatabaseSourceVPCConfiguration", m_databaseSourceVPCConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
