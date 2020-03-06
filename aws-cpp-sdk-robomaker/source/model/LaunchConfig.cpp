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

#include <aws/robomaker/model/LaunchConfig.h>
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

LaunchConfig::LaunchConfig() : 
    m_packageNameHasBeenSet(false),
    m_launchFileHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_portForwardingConfigHasBeenSet(false),
    m_streamUI(false),
    m_streamUIHasBeenSet(false)
{
}

LaunchConfig::LaunchConfig(JsonView jsonValue) : 
    m_packageNameHasBeenSet(false),
    m_launchFileHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_portForwardingConfigHasBeenSet(false),
    m_streamUI(false),
    m_streamUIHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchConfig& LaunchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchFile"))
  {
    m_launchFile = jsonValue.GetString("launchFile");

    m_launchFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portForwardingConfig"))
  {
    m_portForwardingConfig = jsonValue.GetObject("portForwardingConfig");

    m_portForwardingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamUI"))
  {
    m_streamUI = jsonValue.GetBool("streamUI");

    m_streamUIHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("packageName", m_packageName);

  }

  if(m_launchFileHasBeenSet)
  {
   payload.WithString("launchFile", m_launchFile);

  }

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));

  }

  if(m_portForwardingConfigHasBeenSet)
  {
   payload.WithObject("portForwardingConfig", m_portForwardingConfig.Jsonize());

  }

  if(m_streamUIHasBeenSet)
  {
   payload.WithBool("streamUI", m_streamUI);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
