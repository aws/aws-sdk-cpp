/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemLustreConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

UpdateFileSystemLustreConfiguration::UpdateFileSystemLustreConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false)
{
}

UpdateFileSystemLustreConfiguration::UpdateFileSystemLustreConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemLustreConfiguration& UpdateFileSystemLustreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");

    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomaticBackupRetentionDays"))
  {
    m_automaticBackupRetentionDays = jsonValue.GetInteger("AutomaticBackupRetentionDays");

    m_automaticBackupRetentionDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemLustreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
