/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeploymentApplicationConfig.h>
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

DeploymentApplicationConfig::DeploymentApplicationConfig() : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false)
{
}

DeploymentApplicationConfig::DeploymentApplicationConfig(JsonView jsonValue) : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentApplicationConfig& DeploymentApplicationConfig::operator =(JsonView jsonValue)
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

JsonValue DeploymentApplicationConfig::Jsonize() const
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
