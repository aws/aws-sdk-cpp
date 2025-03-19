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
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TaskContainerOverrides">AWS
   * API Reference</a></p>
   */
  class TaskContainerOverrides
  {
  public:
    AWS_BATCH_API TaskContainerOverrides() = default;
    AWS_BATCH_API TaskContainerOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskContainerOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TaskContainerOverrides& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    TaskContainerOverrides& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    TaskContainerOverrides& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    TaskContainerOverrides& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TaskContainerOverrides& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    TaskContainerOverrides& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    TaskContainerOverrides& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
