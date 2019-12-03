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

#include <aws/ecs/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Deployment::Deployment() : 
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false)
{
}

Deployment::Deployment(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("taskDefinition");

    m_taskDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredCount"))
  {
    m_desiredCount = jsonValue.GetInteger("desiredCount");

    m_desiredCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingCount"))
  {
    m_pendingCount = jsonValue.GetInteger("pendingCount");

    m_pendingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningCount"))
  {
    m_runningCount = jsonValue.GetInteger("runningCount");

    m_runningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityProviderStrategy"))
  {
    Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("capacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInteger("desiredCount", m_desiredCount);

  }

  if(m_pendingCountHasBeenSet)
  {
   payload.WithInteger("pendingCount", m_pendingCount);

  }

  if(m_runningCountHasBeenSet)
  {
   payload.WithInteger("runningCount", m_runningCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("capacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
