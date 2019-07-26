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

#include <aws/batch/model/ContainerDetail.h>
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

ContainerDetail::ContainerDetail() : 
    m_imageHasBeenSet(false),
    m_vcpus(0),
    m_vcpusHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_jobRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_userHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_linuxParametersHasBeenSet(false)
{
}

ContainerDetail::ContainerDetail(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_vcpus(0),
    m_vcpusHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_jobRoleArnHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_userHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_linuxParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDetail& ContainerDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcpus"))
  {
    m_vcpus = jsonValue.GetInteger("vcpus");

    m_vcpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Array<JsonView> commandJsonList = jsonValue.GetArray("command");
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

  if(jsonValue.ValueExists("volumes"))
  {
    Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPoints"))
  {
    Array<JsonView> mountPointsJsonList = jsonValue.GetArray("mountPoints");
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

  if(jsonValue.ValueExists("ulimits"))
  {
    Array<JsonView> ulimitsJsonList = jsonValue.GetArray("ulimits");
    for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
    {
      m_ulimits.push_back(ulimitsJsonList[ulimitsIndex].AsObject());
    }
    m_ulimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");

    m_privilegedHasBeenSet = true;
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

  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRequirements"))
  {
    Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("resourceRequirements");
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

  return *this;
}

JsonValue ContainerDetail::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_vcpusHasBeenSet)
  {
   payload.WithInteger("vcpus", m_vcpus);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_commandHasBeenSet)
  {
   Array<JsonValue> commandJsonList(m_command.size());
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

  if(m_volumesHasBeenSet)
  {
   Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_mountPointsHasBeenSet)
  {
   Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
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

  if(m_ulimitsHasBeenSet)
  {
   Array<JsonValue> ulimitsJsonList(m_ulimits.size());
   for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
   {
     ulimitsJsonList[ulimitsIndex].AsObject(m_ulimits[ulimitsIndex].Jsonize());
   }
   payload.WithArray("ulimits", std::move(ulimitsJsonList));

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

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

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
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

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
