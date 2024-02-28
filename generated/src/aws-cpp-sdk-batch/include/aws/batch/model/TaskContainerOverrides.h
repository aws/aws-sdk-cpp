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
    AWS_BATCH_API TaskContainerOverrides();
    AWS_BATCH_API TaskContainerOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskContainerOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline TaskContainerOverrides& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline TaskContainerOverrides& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline TaskContainerOverrides& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline TaskContainerOverrides& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>  <p>This parameter can't
     * contain an empty string.</p> 
     */
    inline TaskContainerOverrides& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline TaskContainerOverrides& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline TaskContainerOverrides& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline TaskContainerOverrides& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * <code>AWS_BATCH</code>. This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline TaskContainerOverrides& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline TaskContainerOverrides& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline TaskContainerOverrides& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A pointer to the container that you want to override. The container's name
     * provides a unique identifier for the container being used.</p>
     */
    inline TaskContainerOverrides& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline TaskContainerOverrides& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline TaskContainerOverrides& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline TaskContainerOverrides& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline TaskContainerOverrides& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

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
