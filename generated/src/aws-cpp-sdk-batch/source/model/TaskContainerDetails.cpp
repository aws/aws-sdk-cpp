/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/TaskContainerDetails.h>
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

TaskContainerDetails::TaskContainerDetails() : 
    m_commandHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
}

TaskContainerDetails::TaskContainerDetails(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskContainerDetails& TaskContainerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
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

  if(jsonValue.ValueExists("essential"))
  {
    m_essential = jsonValue.GetBool("essential");

    m_essentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
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

  if(jsonValue.ValueExists("mountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("mountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");

    m_privilegedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readonlyRootFilesystem"))
  {
    m_readonlyRootFilesystem = jsonValue.GetBool("readonlyRootFilesystem");

    m_readonlyRootFilesystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryCredentials"))
  {
    m_repositoryCredentials = jsonValue.GetObject("repositoryCredentials");

    m_repositoryCredentialsHasBeenSet = true;
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

  if(jsonValue.ValueExists("secrets"))
  {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("secrets");
    for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
    {
      m_secrets.push_back(secretsJsonList[secretsIndex].AsObject());
    }
    m_secretsHasBeenSet = true;
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

  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskContainerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("dependsOn", std::move(dependsOnJsonList));

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

  if(m_essentialHasBeenSet)
  {
   payload.WithBool("essential", m_essential);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_linuxParametersHasBeenSet)
  {
   payload.WithObject("linuxParameters", m_linuxParameters.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

  }

  if(m_readonlyRootFilesystemHasBeenSet)
  {
   payload.WithBool("readonlyRootFilesystem", m_readonlyRootFilesystem);

  }

  if(m_repositoryCredentialsHasBeenSet)
  {
   payload.WithObject("repositoryCredentials", m_repositoryCredentials.Jsonize());

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

  if(m_secretsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
   for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
   {
     secretsJsonList[secretsIndex].AsObject(m_secrets[secretsIndex].Jsonize());
   }
   payload.WithArray("secrets", std::move(secretsJsonList));

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

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
