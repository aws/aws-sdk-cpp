/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/EcsEnvironmentVariable.h>
#include <aws/pipes/model/EcsEnvironmentFile.h>
#include <aws/pipes/model/EcsResourceRequirement.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The overrides that are sent to a container. An empty container override can
   * be passed in. An example of an empty container override is
   * <code>{"containerOverrides": [ ] }</code>. If a non-empty container override is
   * specified, the <code>name</code> parameter must be included.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/EcsContainerOverride">AWS
   * API Reference</a></p>
   */
  class EcsContainerOverride
  {
  public:
    AWS_PIPES_API EcsContainerOverride();
    AWS_PIPES_API EcsContainerOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API EcsContainerOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EcsContainerOverride& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline EcsContainerOverride& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline EcsContainerOverride& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline EcsContainerOverride& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline EcsContainerOverride& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


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
    inline EcsContainerOverride& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline const Aws::Vector<EcsEnvironmentVariable>& GetEnvironment() const{ return m_environment; }

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
    inline void SetEnvironment(const Aws::Vector<EcsEnvironmentVariable>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline void SetEnvironment(Aws::Vector<EcsEnvironmentVariable>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline EcsContainerOverride& WithEnvironment(const Aws::Vector<EcsEnvironmentVariable>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline EcsContainerOverride& WithEnvironment(Aws::Vector<EcsEnvironmentVariable>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline EcsContainerOverride& AddEnvironment(const EcsEnvironmentVariable& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline EcsContainerOverride& AddEnvironment(EcsEnvironmentVariable&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline const Aws::Vector<EcsEnvironmentFile>& GetEnvironmentFiles() const{ return m_environmentFiles; }

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline void SetEnvironmentFiles(const Aws::Vector<EcsEnvironmentFile>& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = value; }

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline void SetEnvironmentFiles(Aws::Vector<EcsEnvironmentFile>&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::move(value); }

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline EcsContainerOverride& WithEnvironmentFiles(const Aws::Vector<EcsEnvironmentFile>& value) { SetEnvironmentFiles(value); return *this;}

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline EcsContainerOverride& WithEnvironmentFiles(Aws::Vector<EcsEnvironmentFile>&& value) { SetEnvironmentFiles(std::move(value)); return *this;}

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline EcsContainerOverride& AddEnvironmentFiles(const EcsEnvironmentFile& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(value); return *this; }

    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline EcsContainerOverride& AddEnvironmentFiles(EcsEnvironmentFile&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(std::move(value)); return *this; }


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
    inline EcsContainerOverride& WithMemory(int value) { SetMemory(value); return *this;}


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
    inline EcsContainerOverride& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}


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
    inline EcsContainerOverride& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline EcsContainerOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline EcsContainerOverride& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline const Aws::Vector<EcsResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

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
    inline void SetResourceRequirements(const Aws::Vector<EcsResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<EcsResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline EcsContainerOverride& WithResourceRequirements(const Aws::Vector<EcsResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline EcsContainerOverride& WithResourceRequirements(Aws::Vector<EcsResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline EcsContainerOverride& AddResourceRequirements(const EcsResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline EcsContainerOverride& AddResourceRequirements(EcsResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Vector<EcsEnvironmentVariable> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<EcsEnvironmentFile> m_environmentFiles;
    bool m_environmentFilesHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<EcsResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
