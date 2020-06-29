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
    m_launchConfigHasBeenSet(false)
{
}

SimulationApplicationConfig::SimulationApplicationConfig(JsonView jsonValue) : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
