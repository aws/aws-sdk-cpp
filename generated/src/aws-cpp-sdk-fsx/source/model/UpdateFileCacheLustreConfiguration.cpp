/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileCacheLustreConfiguration.h>
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

UpdateFileCacheLustreConfiguration::UpdateFileCacheLustreConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
}

UpdateFileCacheLustreConfiguration::UpdateFileCacheLustreConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileCacheLustreConfiguration& UpdateFileCacheLustreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileCacheLustreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
