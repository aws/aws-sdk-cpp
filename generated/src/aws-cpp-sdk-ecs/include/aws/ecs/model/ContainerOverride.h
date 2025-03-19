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
    AWS_ECS_API ContainerOverride() = default;
    AWS_ECS_API ContainerOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container that receives the override. This parameter is
     * required if any override is specified.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerOverride& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition. You must also specify a container
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    ContainerOverride& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    ContainerOverride& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition. You must also specify a container name.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    ContainerOverride& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    ContainerOverride& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files containing the environment variables to pass to a container,
     * instead of the value from the container definition.</p>
     */
    inline const Aws::Vector<EnvironmentFile>& GetEnvironmentFiles() const { return m_environmentFiles; }
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
    template<typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
    void SetEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::forward<EnvironmentFilesT>(value); }
    template<typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
    ContainerOverride& WithEnvironmentFiles(EnvironmentFilesT&& value) { SetEnvironmentFiles(std::forward<EnvironmentFilesT>(value)); return *this;}
    template<typename EnvironmentFilesT = EnvironmentFile>
    ContainerOverride& AddEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.emplace_back(std::forward<EnvironmentFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of <code>cpu</code> units reserved for the container, instead of
     * the default value from the task definition. You must also specify a container
     * name.</p>
     */
    inline int GetCpu() const { return m_cpu; }
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
    inline int GetMemory() const { return m_memory; }
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
    inline int GetMemoryReservation() const { return m_memoryReservation; }
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
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const { return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    void SetResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::forward<ResourceRequirementsT>(value); }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    ContainerOverride& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    ContainerOverride& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
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

    int m_cpu{0};
    bool m_cpuHasBeenSet = false;

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation{0};
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
