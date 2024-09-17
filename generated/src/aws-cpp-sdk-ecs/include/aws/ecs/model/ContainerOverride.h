/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/EnvironmentFile.h>
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
   * <p>The overrides that are sent to a container. An empty container override can
   * be passed in. An example of an empty container override is
   * <code>{"containerOverrides": [ ] }</code>. If a non-empty container override is
   * specified, the <code>name</code> parameter must be included.</p> <p>You can use
   * Secrets Manager or Amazon Web Services Systems Manager Parameter Store to store
   * the sensitive data. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/secrets-envvar.html">Retrieve
   * secrets through environment variables</a> in the Amazon ECS Developer
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerOverride">AWS
   * API Reference</a></p>
   */
  class ContainerOverride
  {
  public:
    AWS_ECS_API ContainerOverride();
    AWS_ECS_API ContainerOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ContainerOverride& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ContainerOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ContainerOverride& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline ContainerOverride& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline ContainerOverride& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline ContainerOverride& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline ContainerOverride& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline ContainerOverride& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline ContainerOverride& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}
    inline ContainerOverride& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline ContainerOverride& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }
    inline ContainerOverride& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline const Aws::Vector<EnvironmentFile>& GetEnvironmentFiles() const{ return m_environmentFiles; }
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
    inline void SetEnvironmentFiles(const Aws::Vector<EnvironmentFile>& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = value; }
    inline void SetEnvironmentFiles(Aws::Vector<EnvironmentFile>&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::move(value); }
    inline ContainerOverride& WithEnvironmentFiles(const Aws::Vector<EnvironmentFile>& value) { SetEnvironmentFiles(value); return *this;}
    inline ContainerOverride& WithEnvironmentFiles(Aws::Vector<EnvironmentFile>&& value) { SetEnvironmentFiles(std::move(value)); return *this;}
    inline ContainerOverride& AddEnvironmentFiles(const EnvironmentFile& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(value); return *this; }
    inline ContainerOverride& AddEnvironmentFiles(EnvironmentFile&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline int GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ContainerOverride& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hard limit (in MiB) of memory to present to the container, instead of the
     * default value from the task definition. If your container attempts to exceed the
     * memory specified here, the container is killed. You must also specify a
     * container name.</p>
     */
    inline int GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ContainerOverride& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline ContainerOverride& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and amount of a resource to assign to a container, instead of the
     * default value from the task definition. The only supported resource is a
     * GPU.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }
    inline ContainerOverride& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}
    inline ContainerOverride& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}
    inline ContainerOverride& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }
    inline ContainerOverride& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<EnvironmentFile> m_environmentFiles;
    bool m_environmentFilesHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
