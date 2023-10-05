/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DataSourceSummary::DataSourceSummary() : 
    m_createdAtHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_enableSetting(EnableSetting::NOT_SET),
    m_enableSettingHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastRunAssetCount(0),
    m_lastRunAssetCountHasBeenSet(false),
    m_lastRunAtHasBeenSet(false),
    m_lastRunErrorMessageHasBeenSet(false),
    m_lastRunStatus(DataSourceRunStatus::NOT_SET),
    m_lastRunStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DataSourceSummary::DataSourceSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_enableSetting(EnableSetting::NOT_SET),
    m_enableSettingHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastRunAssetCount(0),
    m_lastRunAssetCountHasBeenSet(false),
    m_lastRunAtHasBeenSet(false),
    m_lastRunErrorMessageHasBeenSet(false),
    m_lastRunStatus(DataSourceRunStatus::NOT_SET),
    m_lastRunStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSummary& DataSourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableSetting"))
  {
    m_enableSetting = EnableSettingMapper::GetEnableSettingForName(jsonValue.GetString("enableSetting"));

    m_enableSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunAssetCount"))
  {
    m_lastRunAssetCount = jsonValue.GetInteger("lastRunAssetCount");

    m_lastRunAssetCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunAt"))
  {
    m_lastRunAt = jsonValue.GetString("lastRunAt");

    m_lastRunAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunErrorMessage"))
  {
    m_lastRunErrorMessage = jsonValue.GetObject("lastRunErrorMessage");

    m_lastRunErrorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunStatus"))
  {
    m_lastRunStatus = DataSourceRunStatusMapper::GetDataSourceRunStatusForName(jsonValue.GetString("lastRunStatus"));

    m_lastRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceStatusMapper::GetDataSourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_enableSettingHasBeenSet)
  {
   payload.WithString("enableSetting", EnableSettingMapper::GetNameForEnableSetting(m_enableSetting));
  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_lastRunAssetCountHasBeenSet)
  {
   payload.WithInteger("lastRunAssetCount", m_lastRunAssetCount);

  }

  if(m_lastRunAtHasBeenSet)
  {
   payload.WithString("lastRunAt", m_lastRunAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastRunErrorMessageHasBeenSet)
  {
   payload.WithObject("lastRunErrorMessage", m_lastRunErrorMessage.Jsonize());

  }

  if(m_lastRunStatusHasBeenSet)
  {
   payload.WithString("lastRunStatus", DataSourceRunStatusMapper::GetNameForDataSourceRunStatus(m_lastRunStatus));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataSourceStatusMapper::GetNameForDataSourceStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
