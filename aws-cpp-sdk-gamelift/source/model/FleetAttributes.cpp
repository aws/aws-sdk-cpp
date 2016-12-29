/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/FleetAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

FleetAttributes::FleetAttributes() : 
    m_fleetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_status(FleetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_serverLaunchPathHasBeenSet(false),
    m_serverLaunchParametersHasBeenSet(false),
    m_logPathsHasBeenSet(false),
    m_newGameSessionProtectionPolicy(ProtectionPolicy::NOT_SET),
    m_newGameSessionProtectionPolicyHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false)
{
}

FleetAttributes::FleetAttributes(const JsonValue& jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_status(FleetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_serverLaunchPathHasBeenSet(false),
    m_serverLaunchParametersHasBeenSet(false),
    m_logPathsHasBeenSet(false),
    m_newGameSessionProtectionPolicy(ProtectionPolicy::NOT_SET),
    m_newGameSessionProtectionPolicyHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

FleetAttributes& FleetAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationTime"))
  {
    m_terminationTime = jsonValue.GetDouble("TerminationTime");

    m_terminationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BuildId"))
  {
    m_buildId = jsonValue.GetString("BuildId");

    m_buildIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerLaunchPath"))
  {
    m_serverLaunchPath = jsonValue.GetString("ServerLaunchPath");

    m_serverLaunchPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerLaunchParameters"))
  {
    m_serverLaunchParameters = jsonValue.GetString("ServerLaunchParameters");

    m_serverLaunchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPaths"))
  {
    Array<JsonValue> logPathsJsonList = jsonValue.GetArray("LogPaths");
    for(unsigned logPathsIndex = 0; logPathsIndex < logPathsJsonList.GetLength(); ++logPathsIndex)
    {
      m_logPaths.push_back(logPathsJsonList[logPathsIndex].AsString());
    }
    m_logPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewGameSessionProtectionPolicy"))
  {
    m_newGameSessionProtectionPolicy = ProtectionPolicyMapper::GetProtectionPolicyForName(jsonValue.GetString("NewGameSessionProtectionPolicy"));

    m_newGameSessionProtectionPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCreationLimitPolicy"))
  {
    m_resourceCreationLimitPolicy = jsonValue.GetObject("ResourceCreationLimitPolicy");

    m_resourceCreationLimitPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_terminationTimeHasBeenSet)
  {
   payload.WithDouble("TerminationTime", m_terminationTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FleetStatusMapper::GetNameForFleetStatus(m_status));
  }

  if(m_buildIdHasBeenSet)
  {
   payload.WithString("BuildId", m_buildId);

  }

  if(m_serverLaunchPathHasBeenSet)
  {
   payload.WithString("ServerLaunchPath", m_serverLaunchPath);

  }

  if(m_serverLaunchParametersHasBeenSet)
  {
   payload.WithString("ServerLaunchParameters", m_serverLaunchParameters);

  }

  if(m_logPathsHasBeenSet)
  {
   Array<JsonValue> logPathsJsonList(m_logPaths.size());
   for(unsigned logPathsIndex = 0; logPathsIndex < logPathsJsonList.GetLength(); ++logPathsIndex)
   {
     logPathsJsonList[logPathsIndex].AsString(m_logPaths[logPathsIndex]);
   }
   payload.WithArray("LogPaths", std::move(logPathsJsonList));

  }

  if(m_newGameSessionProtectionPolicyHasBeenSet)
  {
   payload.WithString("NewGameSessionProtectionPolicy", ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy));
  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_resourceCreationLimitPolicyHasBeenSet)
  {
   payload.WithObject("ResourceCreationLimitPolicy", m_resourceCreationLimitPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws