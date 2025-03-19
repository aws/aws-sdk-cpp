/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/ResourceRequirement.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The overrides that should be sent to a container.</p> <p>For information
   * about using Batch overrides when you connect event sources to targets, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/pipes-reference/API_BatchContainerOverrides.html">BatchContainerOverrides</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerOverrides">AWS
   * API Reference</a></p>
   */
  class ContainerOverrides
  {
  public:
    AWS_BATCH_API ContainerOverrides() = default;
    AWS_BATCH_API ContainerOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ContainerOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    ContainerOverrides& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    ContainerOverrides& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ContainerOverrides& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    ContainerOverrides& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    ContainerOverrides& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const { return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    void SetResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::forward<ResourceRequirementsT>(value); }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    ContainerOverrides& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    ContainerOverrides& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
