/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemOntapConfiguration.h>
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

UpdateFileSystemOntapConfiguration::UpdateFileSystemOntapConfiguration() : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_fsxAdminPasswordHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
}

UpdateFileSystemOntapConfiguration::UpdateFileSystemOntapConfiguration(JsonView jsonValue) : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_fsxAdminPasswordHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemOntapConfiguration& UpdateFileSystemOntapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticBackupRetentionDays"))
  {
    m_automaticBackupRetentionDays = jsonValue.GetInteger("AutomaticBackupRetentionDays");

    m_automaticBackupRetentionDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");

    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FsxAdminPassword"))
  {
    m_fsxAdminPassword = jsonValue.GetString("FsxAdminPassword");

    m_fsxAdminPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemOntapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_fsxAdminPasswordHasBeenSet)
  {
   payload.WithString("FsxAdminPassword", m_fsxAdminPassword);

  }

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
