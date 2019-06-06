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

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/ResourceRequirement.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The overrides that should be sent to a container. An empty container override
   * can be passed in. An example of an empty container override would be
   * <code>{"containerOverrides": [ ] }</code>. If a non-empty container override is
   * specified, the <code>name</code> parameter must be included.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerOverride">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ContainerOverride
  {
  public:
    ContainerOverride();
    ContainerOverride(Aws::Utils::Json::JsonView jsonValue);
    ContainerOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline ContainerOverride& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline ContainerOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline ContainerOverride& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline ContainerOverride& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline ContainerOverride& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline ContainerOverride& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline ContainerOverride& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p>The hard limit (in MiB) of memory to present to the container, instead of the
     * default value from the task definition. If your container attempts to exceed the
     * memory specified here, the container is killed. You must also specify a
     * container name.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container, instead of the
     * default value from the task definition. If your container attempts to exceed the
     * memory specified here, the container is killed. You must also specify a
     * container name.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container, instead of the
     * default value from the task definition. If your container attempts to exceed the
     * memory specified here, the container is killed. You must also specify a
     * container name.</p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container, instead of the
     * default value from the task definition. If your container attempts to exceed the
     * memory specified here, the container is killed. You must also specify a
     * container name.</p>
     */
    inline ContainerOverride& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline ContainerOverride& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}


    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline ContainerOverride& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline ContainerOverride& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline ContainerOverride& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline ContainerOverride& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet;

    int m_cpu;
    bool m_cpuHasBeenSet;

    int m_memory;
    bool m_memoryHasBeenSet;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
