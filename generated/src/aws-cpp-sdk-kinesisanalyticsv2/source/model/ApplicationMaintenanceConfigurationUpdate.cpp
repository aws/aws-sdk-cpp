/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationUpdate.h>
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

ApplicationMaintenanceConfigurationUpdate::ApplicationMaintenanceConfigurationUpdate() : 
    m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet(false)
{
}

ApplicationMaintenanceConfigurationUpdate::ApplicationMaintenanceConfigurationUpdate(JsonView jsonValue) : 
    m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationMaintenanceConfigurationUpdate& ApplicationMaintenanceConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationMaintenanceWindowStartTimeUpdate"))
  {
    m_applicationMaintenanceWindowStartTimeUpdate = jsonValue.GetString("ApplicationMaintenanceWindowStartTimeUpdate");

    m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationMaintenanceConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet)
  {
   payload.WithString("ApplicationMaintenanceWindowStartTimeUpdate", m_applicationMaintenanceWindowStartTimeUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
