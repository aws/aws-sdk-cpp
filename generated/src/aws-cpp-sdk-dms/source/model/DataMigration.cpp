/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataMigration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataMigration::DataMigration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataMigration& DataMigration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataMigrationName"))
  {
    m_dataMigrationName = jsonValue.GetString("DataMigrationName");
    m_dataMigrationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationArn"))
  {
    m_dataMigrationArn = jsonValue.GetString("DataMigrationArn");
    m_dataMigrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationCreateTime"))
  {
    m_dataMigrationCreateTime = jsonValue.GetString("DataMigrationCreateTime");
    m_dataMigrationCreateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationStartTime"))
  {
    m_dataMigrationStartTime = jsonValue.GetString("DataMigrationStartTime");
    m_dataMigrationStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationEndTime"))
  {
    m_dataMigrationEndTime = jsonValue.GetString("DataMigrationEndTime");
    m_dataMigrationEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");
    m_serviceAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MigrationProjectArn"))
  {
    m_migrationProjectArn = jsonValue.GetString("MigrationProjectArn");
    m_migrationProjectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationType"))
  {
    m_dataMigrationType = MigrationTypeValueMapper::GetMigrationTypeValueForName(jsonValue.GetString("DataMigrationType"));
    m_dataMigrationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationSettings"))
  {
    m_dataMigrationSettings = jsonValue.GetObject("DataMigrationSettings");
    m_dataMigrationSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceDataSettings"))
  {
    Aws::Utils::Array<JsonView> sourceDataSettingsJsonList = jsonValue.GetArray("SourceDataSettings");
    for(unsigned sourceDataSettingsIndex = 0; sourceDataSettingsIndex < sourceDataSettingsJsonList.GetLength(); ++sourceDataSettingsIndex)
    {
      m_sourceDataSettings.push_back(sourceDataSettingsJsonList[sourceDataSettingsIndex].AsObject());
    }
    m_sourceDataSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetDataSettings"))
  {
    Aws::Utils::Array<JsonView> targetDataSettingsJsonList = jsonValue.GetArray("TargetDataSettings");
    for(unsigned targetDataSettingsIndex = 0; targetDataSettingsIndex < targetDataSettingsJsonList.GetLength(); ++targetDataSettingsIndex)
    {
      m_targetDataSettings.push_back(targetDataSettingsJsonList[targetDataSettingsIndex].AsObject());
    }
    m_targetDataSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationStatistics"))
  {
    m_dataMigrationStatistics = jsonValue.GetObject("DataMigrationStatistics");
    m_dataMigrationStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationStatus"))
  {
    m_dataMigrationStatus = jsonValue.GetString("DataMigrationStatus");
    m_dataMigrationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicIpAddresses"))
  {
    Aws::Utils::Array<JsonView> publicIpAddressesJsonList = jsonValue.GetArray("PublicIpAddresses");
    for(unsigned publicIpAddressesIndex = 0; publicIpAddressesIndex < publicIpAddressesJsonList.GetLength(); ++publicIpAddressesIndex)
    {
      m_publicIpAddresses.push_back(publicIpAddressesJsonList[publicIpAddressesIndex].AsString());
    }
    m_publicIpAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataMigrationCidrBlocks"))
  {
    Aws::Utils::Array<JsonView> dataMigrationCidrBlocksJsonList = jsonValue.GetArray("DataMigrationCidrBlocks");
    for(unsigned dataMigrationCidrBlocksIndex = 0; dataMigrationCidrBlocksIndex < dataMigrationCidrBlocksJsonList.GetLength(); ++dataMigrationCidrBlocksIndex)
    {
      m_dataMigrationCidrBlocks.push_back(dataMigrationCidrBlocksJsonList[dataMigrationCidrBlocksIndex].AsString());
    }
    m_dataMigrationCidrBlocksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");
    m_lastFailureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StopReason"))
  {
    m_stopReason = jsonValue.GetString("StopReason");
    m_stopReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DataMigration::Jsonize() const
{
  JsonValue payload;

  if(m_dataMigrationNameHasBeenSet)
  {
   payload.WithString("DataMigrationName", m_dataMigrationName);

  }

  if(m_dataMigrationArnHasBeenSet)
  {
   payload.WithString("DataMigrationArn", m_dataMigrationArn);

  }

  if(m_dataMigrationCreateTimeHasBeenSet)
  {
   payload.WithString("DataMigrationCreateTime", m_dataMigrationCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataMigrationStartTimeHasBeenSet)
  {
   payload.WithString("DataMigrationStartTime", m_dataMigrationStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataMigrationEndTimeHasBeenSet)
  {
   payload.WithString("DataMigrationEndTime", m_dataMigrationEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_migrationProjectArnHasBeenSet)
  {
   payload.WithString("MigrationProjectArn", m_migrationProjectArn);

  }

  if(m_dataMigrationTypeHasBeenSet)
  {
   payload.WithString("DataMigrationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_dataMigrationType));
  }

  if(m_dataMigrationSettingsHasBeenSet)
  {
   payload.WithObject("DataMigrationSettings", m_dataMigrationSettings.Jsonize());

  }

  if(m_sourceDataSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDataSettingsJsonList(m_sourceDataSettings.size());
   for(unsigned sourceDataSettingsIndex = 0; sourceDataSettingsIndex < sourceDataSettingsJsonList.GetLength(); ++sourceDataSettingsIndex)
   {
     sourceDataSettingsJsonList[sourceDataSettingsIndex].AsObject(m_sourceDataSettings[sourceDataSettingsIndex].Jsonize());
   }
   payload.WithArray("SourceDataSettings", std::move(sourceDataSettingsJsonList));

  }

  if(m_targetDataSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDataSettingsJsonList(m_targetDataSettings.size());
   for(unsigned targetDataSettingsIndex = 0; targetDataSettingsIndex < targetDataSettingsJsonList.GetLength(); ++targetDataSettingsIndex)
   {
     targetDataSettingsJsonList[targetDataSettingsIndex].AsObject(m_targetDataSettings[targetDataSettingsIndex].Jsonize());
   }
   payload.WithArray("TargetDataSettings", std::move(targetDataSettingsJsonList));

  }

  if(m_dataMigrationStatisticsHasBeenSet)
  {
   payload.WithObject("DataMigrationStatistics", m_dataMigrationStatistics.Jsonize());

  }

  if(m_dataMigrationStatusHasBeenSet)
  {
   payload.WithString("DataMigrationStatus", m_dataMigrationStatus);

  }

  if(m_publicIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicIpAddressesJsonList(m_publicIpAddresses.size());
   for(unsigned publicIpAddressesIndex = 0; publicIpAddressesIndex < publicIpAddressesJsonList.GetLength(); ++publicIpAddressesIndex)
   {
     publicIpAddressesJsonList[publicIpAddressesIndex].AsString(m_publicIpAddresses[publicIpAddressesIndex]);
   }
   payload.WithArray("PublicIpAddresses", std::move(publicIpAddressesJsonList));

  }

  if(m_dataMigrationCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataMigrationCidrBlocksJsonList(m_dataMigrationCidrBlocks.size());
   for(unsigned dataMigrationCidrBlocksIndex = 0; dataMigrationCidrBlocksIndex < dataMigrationCidrBlocksJsonList.GetLength(); ++dataMigrationCidrBlocksIndex)
   {
     dataMigrationCidrBlocksJsonList[dataMigrationCidrBlocksIndex].AsString(m_dataMigrationCidrBlocks[dataMigrationCidrBlocksIndex]);
   }
   payload.WithArray("DataMigrationCidrBlocks", std::move(dataMigrationCidrBlocksJsonList));

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  if(m_stopReasonHasBeenSet)
  {
   payload.WithString("StopReason", m_stopReason);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
