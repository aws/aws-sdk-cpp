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
   * <p>The overrides that should be sent to a container.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerOverrides">AWS
   * API Reference</a></p>
   */
  class ContainerOverrides
  {
  public:
    AWS_BATCH_API ContainerOverrides();
    AWS_BATCH_API ContainerOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ContainerOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline ContainerOverrides& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerOverrides& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerOverrides& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerOverrides& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline ContainerOverrides& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline ContainerOverrides& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline ContainerOverrides& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline ContainerOverrides& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


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
    inline ContainerOverrides& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ContainerOverrides& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ContainerOverrides& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ContainerOverrides& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

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
