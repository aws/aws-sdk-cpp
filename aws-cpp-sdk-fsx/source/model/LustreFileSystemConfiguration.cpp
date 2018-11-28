/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/fsx/model/LustreFileSystemConfiguration.h>
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

LustreFileSystemConfiguration::LustreFileSystemConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dataRepositoryConfigurationHasBeenSet(false)
{
}

LustreFileSystemConfiguration::LustreFileSystemConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dataRepositoryConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LustreFileSystemConfiguration& LustreFileSystemConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositoryConfiguration"))
  {
    m_dataRepositoryConfiguration = jsonValue.GetObject("DataRepositoryConfiguration");

    m_dataRepositoryConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LustreFileSystemConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_dataRepositoryConfigurationHasBeenSet)
  {
   payload.WithObject("DataRepositoryConfiguration", m_dataRepositoryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
