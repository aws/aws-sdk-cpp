/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ContainerProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ContainerProperties::ContainerProperties() : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_jobRoleArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_fargatePlatformConfigurationHasBeenSet(false)
{
}

ContainerProperties::ContainerProperties(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_jobRoleArnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_fargatePlatformConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerProperties& ContainerProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobRoleArn"))
  {
    m_jobRoleArn = jsonValue.GetString("jobRoleArn");

    m_jobRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("mountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readonlyRootFilesystem"))
  {
    m_readonlyRootFilesystem = jsonValue.GetBool("readonlyRootFilesystem");

    m_readonlyRootFilesystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");

    m_privilegedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ulimits"))
  {
    Aws::Utils::Array<JsonView> ulimitsJsonList = jsonValue.GetArray("ulimits");
    for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
    {
      m_ulimits.push_back(ulimitsJsonList[ulimitsIndex].AsObject());
    }
    m_ulimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRequirements"))
  {
    Aws::Utils::Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("resourceRequirements");
    for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
    {
      m_resourceRequirements.push_back(resourceRequirementsJsonList[resourceRequirementsIndex].AsObject());
    }
    m_resourceRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linuxParameters"))
  {
    m_linuxParameters = jsonValue.GetObject("linuxParameters");

    m_linuxParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secrets"))
  {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("secrets");
    for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
    {
      m_secrets.push_back(secretsJsonList[secretsIndex].AsObject());
    }
    m_secretsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fargatePlatformConfiguration"))
  {
    m_fargatePlatformConfiguration = jsonValue.GetObject("fargatePlatformConfiguration");

    m_fargatePlatformConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerProperties::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_jobRoleArnHasBeenSet)
  {
   payload.WithString("jobRoleArn", m_jobRoleArn);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_mountPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("mountPoints", std::move(mountPointsJsonList));

  }

  if(m_readonlyRootFilesystemHasBeenSet)
  {
   payload.WithBool("readonlyRootFilesystem", m_readonlyRootFilesystem);

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

  }

  if(m_ulimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ulimitsJsonList(m_ulimits.size());
   for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
   {
     ulimitsJsonList[ulimitsIndex].AsObject(m_ulimits[ulimitsIndex].Jsonize());
   }
   payload.WithArray("ulimits", std::move(ulimitsJsonList));

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
   for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
   {
     resourceRequirementsJsonList[resourceRequirementsIndex].AsObject(m_resourceRequirements[resourceRequirementsIndex].Jsonize());
   }
   payload.WithArray("resourceRequirements", std::move(resourceRequirementsJsonList));

  }

  if(m_linuxParametersHasBeenSet)
  {
   payload.WithObject("linuxParameters", m_linuxParameters.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_secretsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
   for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
   {
     secretsJsonList[secretsIndex].AsObject(m_secrets[secretsIndex].Jsonize());
   }
   payload.WithArray("secrets", std::move(secretsJsonList));

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_fargatePlatformConfigurationHasBeenSet)
  {
   payload.WithObject("fargatePlatformConfiguration", m_fargatePlatformConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
