/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotApplicationConfig.h>
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

RobotApplicationConfig::RobotApplicationConfig() : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_useDefaultUploadConfigurations(false),
    m_useDefaultUploadConfigurationsHasBeenSet(false)
{
}

RobotApplicationConfig::RobotApplicationConfig(JsonView jsonValue) : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_useDefaultUploadConfigurations(false),
    m_useDefaultUploadConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

RobotApplicationConfig& RobotApplicationConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("useDefaultUploadConfigurations"))
  {
    m_useDefaultUploadConfigurations = jsonValue.GetBool("useDefaultUploadConfigurations");

    m_useDefaultUploadConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RobotApplicationConfig::Jsonize() const
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

  if(m_useDefaultUploadConfigurationsHasBeenSet)
  {
   payload.WithBool("useDefaultUploadConfigurations", m_useDefaultUploadConfigurations);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
