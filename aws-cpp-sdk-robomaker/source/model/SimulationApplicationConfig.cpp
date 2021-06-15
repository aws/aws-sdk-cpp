/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationApplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SimulationApplicationConfig::SimulationApplicationConfig() : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_worldConfigsHasBeenSet(false),
    m_useDefaultUploadConfigurations(false),
    m_useDefaultUploadConfigurationsHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_useDefaultTools(false),
    m_useDefaultToolsHasBeenSet(false)
{
}

SimulationApplicationConfig::SimulationApplicationConfig(JsonView jsonValue) : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_worldConfigsHasBeenSet(false),
    m_useDefaultUploadConfigurations(false),
    m_useDefaultUploadConfigurationsHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_useDefaultTools(false),
    m_useDefaultToolsHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationApplicationConfig& SimulationApplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("application"))
  {
    m_application = jsonValue.GetString("application");

    m_applicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationVersion"))
  {
    m_applicationVersion = jsonValue.GetString("applicationVersion");

    m_applicationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfig"))
  {
    m_launchConfig = jsonValue.GetObject("launchConfig");

    m_launchConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadConfigurations"))
  {
    Array<JsonView> uploadConfigurationsJsonList = jsonValue.GetArray("uploadConfigurations");
    for(unsigned uploadConfigurationsIndex = 0; uploadConfigurationsIndex < uploadConfigurationsJsonList.GetLength(); ++uploadConfigurationsIndex)
    {
      m_uploadConfigurations.push_back(uploadConfigurationsJsonList[uploadConfigurationsIndex].AsObject());
    }
    m_uploadConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("worldConfigs"))
  {
    Array<JsonView> worldConfigsJsonList = jsonValue.GetArray("worldConfigs");
    for(unsigned worldConfigsIndex = 0; worldConfigsIndex < worldConfigsJsonList.GetLength(); ++worldConfigsIndex)
    {
      m_worldConfigs.push_back(worldConfigsJsonList[worldConfigsIndex].AsObject());
    }
    m_worldConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useDefaultUploadConfigurations"))
  {
    m_useDefaultUploadConfigurations = jsonValue.GetBool("useDefaultUploadConfigurations");

    m_useDefaultUploadConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tools"))
  {
    Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
    m_toolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useDefaultTools"))
  {
    m_useDefaultTools = jsonValue.GetBool("useDefaultTools");

    m_useDefaultToolsHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationApplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithString("applicationVersion", m_applicationVersion);

  }

  if(m_launchConfigHasBeenSet)
  {
   payload.WithObject("launchConfig", m_launchConfig.Jsonize());

  }

  if(m_uploadConfigurationsHasBeenSet)
  {
   Array<JsonValue> uploadConfigurationsJsonList(m_uploadConfigurations.size());
   for(unsigned uploadConfigurationsIndex = 0; uploadConfigurationsIndex < uploadConfigurationsJsonList.GetLength(); ++uploadConfigurationsIndex)
   {
     uploadConfigurationsJsonList[uploadConfigurationsIndex].AsObject(m_uploadConfigurations[uploadConfigurationsIndex].Jsonize());
   }
   payload.WithArray("uploadConfigurations", std::move(uploadConfigurationsJsonList));

  }

  if(m_worldConfigsHasBeenSet)
  {
   Array<JsonValue> worldConfigsJsonList(m_worldConfigs.size());
   for(unsigned worldConfigsIndex = 0; worldConfigsIndex < worldConfigsJsonList.GetLength(); ++worldConfigsIndex)
   {
     worldConfigsJsonList[worldConfigsIndex].AsObject(m_worldConfigs[worldConfigsIndex].Jsonize());
   }
   payload.WithArray("worldConfigs", std::move(worldConfigsJsonList));

  }

  if(m_useDefaultUploadConfigurationsHasBeenSet)
  {
   payload.WithBool("useDefaultUploadConfigurations", m_useDefaultUploadConfigurations);

  }

  if(m_toolsHasBeenSet)
  {
   Array<JsonValue> toolsJsonList(m_tools.size());
   for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
   {
     toolsJsonList[toolsIndex].AsObject(m_tools[toolsIndex].Jsonize());
   }
   payload.WithArray("tools", std::move(toolsJsonList));

  }

  if(m_useDefaultToolsHasBeenSet)
  {
   payload.WithBool("useDefaultTools", m_useDefaultTools);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
