/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationMaintenanceConfigurationDescription::ApplicationMaintenanceConfigurationDescription() : 
    m_applicationMaintenanceWindowStartTimeHasBeenSet(false),
    m_applicationMaintenanceWindowEndTimeHasBeenSet(false)
{
}

ApplicationMaintenanceConfigurationDescription::ApplicationMaintenanceConfigurationDescription(JsonView jsonValue) : 
    m_applicationMaintenanceWindowStartTimeHasBeenSet(false),
    m_applicationMaintenanceWindowEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationMaintenanceConfigurationDescription& ApplicationMaintenanceConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationMaintenanceWindowStartTime"))
  {
    m_applicationMaintenanceWindowStartTime = jsonValue.GetString("ApplicationMaintenanceWindowStartTime");

    m_applicationMaintenanceWindowStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationMaintenanceWindowEndTime"))
  {
    m_applicationMaintenanceWindowEndTime = jsonValue.GetString("ApplicationMaintenanceWindowEndTime");

    m_applicationMaintenanceWindowEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationMaintenanceConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_applicationMaintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithString("ApplicationMaintenanceWindowStartTime", m_applicationMaintenanceWindowStartTime);

  }

  if(m_applicationMaintenanceWindowEndTimeHasBeenSet)
  {
   payload.WithString("ApplicationMaintenanceWindowEndTime", m_applicationMaintenanceWindowEndTime);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
